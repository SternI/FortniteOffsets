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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x130C2A80 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (((Pool ^ 0x3B6) & 0x7FE) == 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x130C2A80 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        char NameBuffer[2048];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, ((Pool ^ 0x3B6) >> 1) & 0x3FF);
        DecryptFName(NameBuffer, ((Pool ^ 0x3B6) >> 1) & 0x3FF);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = -((index - 1) ^ 0xFC4AD0A4);
            return DecryptedIndex ? DecryptedIndex : -62205787;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            char* EncryptedBuffer = new char[length];
            std::memcpy(EncryptedBuffer, buffer, length);

            int v6 = ~(8416 * length + 19101531);
            for (int i = 0; i < length; ++i)
            {
                v6 = ~(8416 * v6 + 19101531);
                buffer[length - i - 1] = v6 - EncryptedBuffer[i] + 36;
            }
        }

        buffer[length] = '\0';
    }
};