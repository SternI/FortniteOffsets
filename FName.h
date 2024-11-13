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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x12F8D640 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if ((((Pool ^ 0x238) >> 1) & 0x3FF) == 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x12F8D640 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        char NameBuffer[2048];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, ((Pool ^ 0x238) >> 1) & 0x3FF);
        DecryptFName(NameBuffer, ((Pool ^ 0x238) >> 1) & 0x3FF);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = ((((index - 1) ^ 0xFE3643FE) >> 10) | (((index - 1) ^ 0xFE3643FE) << 22)) + 1;
            return DecryptedIndex ? DecryptedIndex : 4223600;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            int v4 = 8713 * length + 18979312;
            for (int i = 0; i < length; ++i)
            {
                buffer[i] = ((uint8_t(buffer[i] ^ v4) >> 3) | (uint8_t(buffer[i] ^ v4) << 5));
                v4 = 8713 * v4 + 18979312;
            }
        }

        buffer[length] = '\0';
    }
};