// UObject.NamePrivate: 0x8
class FName
{
public:
    int32_t ComparisonIndex;

    std::string ToString()
    {
        return ToString(ComparisonIndex);
    }

    static std::string ToString(int32_t index)
    {
        int32_t DecryptedIndex = DecryptIndex(index);
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x16A27140 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (((Pool ^ 0x25C0) & 0x7FE0) <= 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x16A27140 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = ((Pool ^ 0x25C0u) >> 5) & 0x3FF * ((Pool & 0x8000u) != 0 ? 2 : 1);

        char* NameBuffer = new char[Length + 1];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, Length);
        DecryptFName(NameBuffer, Length);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = ((uint32_t((index - 1) ^ 0xD1E539C8) >> 8) | (uint32_t((index - 1) ^ 0xD1E539C8) << 24)) + 1;
            return DecryptedIndex ? DecryptedIndex : 925768391;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            unsigned int v4 = 0x12A2DD2 + 8653 * length;
            for (int i = 0; i < length; ++i)
            {
                buffer[i] = (uint8_t(buffer[i] ^ v4) >> 1) | (uint8_t(buffer[i] ^ v4) << 7);
                v4 = 0x12A2DD2 + 8653 * v4;
            }
        }

        buffer[length] = '\0';
    }
};