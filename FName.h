// GNames: 0x1897AD08
// UObject.NamePrivate: 0x18
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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x1897AD08 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (((Pool ^ 0x1A40) & 0x7FE0) == 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x1897AD08 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = ((Pool ^ 0x1A40u) >> 5) & 0x3FF;
        Length *= (Pool & 0x8000u) == 0 ? 1 : 2;

        std::vector<char> NameBuffer(Length + 1);
        Driver::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer.data(), Length);
        DecryptFName(NameBuffer.data(), Length);
        return std::string(NameBuffer.data());
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = _rotr(index - 1, 3) - 1459010364;
            return DecryptedIndex ? DecryptedIndex : -1459010365;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            std::vector<uint8_t> EncryptedBuffer(buffer, buffer + length);

            int v8 = ~(8958 * length + 21238378);
            for (int i = 0; i < length; i++)
            {
                v8 = ~(8958 * v8 + 21238378);
                buffer[length - i - 1] = v8 - 44 + _rotr8(EncryptedBuffer[i], 1);
            }
        }

        buffer[length] = '\0';
    }
};