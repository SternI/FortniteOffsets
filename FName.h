// UObject.NamePrivate: 0xc
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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x13930600 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if ((Pool ^ 0x4080u) < 0x40)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 2));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x13930600 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        }

        int32_t Length = ((Pool ^ 0x4080u) >> 6) * ((Pool & 1) != 0 ? 2 : 1);

        char NameBuffer[2048];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, Length);
        DecryptFName(NameBuffer, Length);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = ((uint32_t(0x691F1F9 ^ (index - 1)) >> 12) | (uint32_t(0x691F1F9 ^ (index - 1)) << 20)) + 1;
            return DecryptedIndex ? DecryptedIndex : -529557791;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            int v5 = (8 * length) | uint8_t(-58 - 75 * length);
            for (int i = 0; i < length; ++i)
            {
                buffer[i] = (uint8_t(buffer[i] ^ v5) >> 1) | (uint8_t(buffer[i] ^ v5) << 7);
                v5 = uint8_t(-58 - 75 * v5) | (8 * v5);
            }
        }

        buffer[length] = '\0';
    }
};