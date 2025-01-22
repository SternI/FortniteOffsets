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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x165F5000 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if ((((Pool >> 1) ^ 0xFE33) & 0x3FF) <= 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 2));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x165F5000 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = (((Pool >> 1) ^ 0xFE33) & 0x3FF) * ((Pool & 1) != 0 ? 2 : 1);

        char* NameBuffer = new char[Length + 1];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, Length);
        DecryptFName(NameBuffer, Length);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = -((index - 1) ^ 0x2F7D666F);
            return DecryptedIndex ? DecryptedIndex : 0x2F7D6670;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            uint8_t* EncryptedBuffer = new uint8_t[length];
            memcpy(EncryptedBuffer, buffer, length);

            int v6 = 8465 * length + 19638643;
            for (int i = 0; i < length; i++) {
                v6 = 8465 * v6 + 19638643;
                buffer[length - i - 1] = (v6 - EncryptedBuffer[i]) + 76;
            }

            delete[] EncryptedBuffer;
        }

        buffer[length] = '\0';
    }
};