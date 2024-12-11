// NamePrivate: 0x18
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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x17B01480 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if ((Pool ^ 0x7C40u) < 0x40)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 2));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x17B01480 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = ((Pool ^ 0x7C40u) >> 6) * ((Pool & 1) != 0 ? 2 : 1);

        char* NameBuffer = new char[Length + 1];
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer, Length);
        DecryptFName(NameBuffer, Length);
        return std::string(NameBuffer);
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = -((index - 1) ^ 0xF05509A2);
            return DecryptedIndex ? DecryptedIndex : -262862429;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            uint8_t* EncryptedBuffer = new uint8_t[length];
            std::memcpy(EncryptedBuffer, buffer, length);

            int v6 = ~(8684 * length + 19315169);
            for (int i = 0; i < length; ++i)
            {
                v6 = ~(8684 * v6 + 19315169);
                buffer[length - i - 1] = (v6 - EncryptedBuffer[i]) + 110;
            }

            delete[] EncryptedBuffer;
        }

        buffer[length] = '\0';
    }
};