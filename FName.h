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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x139143F8 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if ((((Pool >> 1) ^ 0xFFB7) & 0x3FF) <= 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x139143F8 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = ((Pool >> 1) ^ 0xFFB7) & 0x3FF * ((Pool & 1) != 0 ? 2 : 1);

        char NameBuffer[2048];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, Length);
        DecryptFName(NameBuffer, Length);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = ((index - 1) ^ 0xABAA4FBA) + 1;
            return DecryptedIndex ? DecryptedIndex : 1414901830;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            int v4 = 8879 * length + 19162179;
            for (int i = 0; i < length; ++i)
            {
                buffer[i] ^= (v4 - 30) & 0xFF;
                v4 = 8879 * v4 + 19162179;
            }
        }

        buffer[length] = '\0';
    }
};