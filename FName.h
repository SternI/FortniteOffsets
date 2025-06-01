// GNames: 0x18B3A0C0
// UObject.NamePrivate: 0x8
class FName
{
public:
    int32_t ComparisonIndex;

    std::string ToString() const
    {
        return ToString(ComparisonIndex);
    }

    static std::string ToString(int32_t index)
    {
        int32_t DecryptedIndex = DecryptIndex(index);
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x18B3A0C0 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if ((Pool ^ 0x13C0u) < 0x40)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x18B3A0C0 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = (Pool ^ 0x13C0u) >> 6;
        Length *= (Pool & 1) == 0 ? 1 : 2;

        std::vector<char> NameBuffer(Length + 1);
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer.data(), Length);
        DecryptFName(NameBuffer.data(), Length);
        return std::string(NameBuffer.data());
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = ((index - 1) ^ 0xEFE54562) + 1;
            return DecryptedIndex ? DecryptedIndex : 270187166;
        }

        return 0;
    }

    static void DecryptFName(char *buffer, int length)
    {
        if (length)
        {
            int v8 = (2 * length) ^ (8031 * length + 21456027);
            for (int i = 0; i < length; ++i)
            {
                buffer[i] ^= (v8 - 22);
                v8 = (2 * v8) ^ (8031 * v8 + 21456027);
            }

        }

        buffer[length] = '\0';
    }
};