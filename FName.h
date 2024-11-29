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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x13078C08 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (((Pool ^ 0x16C0) & 0x7FE0) <= 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x13078C08 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = (((Pool ^ 0x16C0u) >> 5) & 0x3FF) * ((Pool & 0x8000u) == 0 ? 1 : 2);

        char NameBuffer[2048];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, Length);
        DecryptFName(NameBuffer, Length);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = ((uint32_t(index - 1) >> 3) | (uint32_t(index - 1) << 29)) - 374317418;
            return DecryptedIndex ? DecryptedIndex : -374317419;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            uint8_t* EncryptedBuffer = new uint8_t[length];
            std::memcpy(EncryptedBuffer, buffer, length);

            int v6 = ~(19185646 + 8710 * length);
            for (int i = 0; i < length; ++i)
            {
                v6 = ~(19185646 + 8710 * v6);
                buffer[length - i - 1] = v6 - 72 + ((EncryptedBuffer[i] >> 1) | (EncryptedBuffer[i] << 7));
            }

            delete[] EncryptedBuffer;
        }
        
        buffer[length] = '\0';
    }
};