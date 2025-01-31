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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x1719F7C0 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (((Pool ^ 0x1980) & 0x7FE0) <= 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x1719F7C0 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = (((Pool ^ 0x1980u) >> 5) & 0x3FF) * ((Pool & 0x8000u) == 0 ? 1 : 2);

        char* NameBuffer = new char[Length + 1];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, Length);
        DecryptFName(NameBuffer, Length);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = ((uint32_t(index - 1) >> 1) | (uint32_t(index - 1) << 31)) + 0x156B90C9;
            return DecryptedIndex ? DecryptedIndex : 0x156B90C8;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            uint8_t* EncryptedBuffer = new uint8_t[length];
            memcpy(EncryptedBuffer, buffer, length);

            int v7 = (16 * length) ^ (8978 * length + 19717748);
            for (int i = 0; i < length; i++) {
                v7 = (16 * v7) ^ (8978 * v7 + 19717748);
                buffer[length - 1 - i] = v7 - 50 + ((EncryptedBuffer[i] >> 1) | (EncryptedBuffer[i] << 7));
            }

            delete[] EncryptedBuffer;
        }

        buffer[length] = '\0';
    }
};