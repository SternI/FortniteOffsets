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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x17923240 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if ((Pool ^ 0x2800u) < 0x40) {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x17923240 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = (Pool ^ 0x2800u) >> 6;
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
            int32_t DecryptedIndex = (((index - 1) >> 1) | ((index - 1) << 31)) + 0x6E08231F;
            return DecryptedIndex ? DecryptedIndex : 0x6E08231E;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            int v4 = (16 * length) ^ (0x1349568 + 8442 * length);

            for (int i = 0; i < length; i++) {
                buffer[i] = (uint8_t(buffer[i] - v4 + 94) << 1) | (uint8_t(buffer[i] - v4 + 94) >> 7);
                v4 = (16 * v4) ^ (0x1349568 + 8442 * v4);
            }
        }

        buffer[length] = '\0';
    }
};