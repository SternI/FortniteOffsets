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
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x176AF040 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);
 
        if (((Pool ^ 0x35A0) & 0x7FE0) == 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 2));
            NamePoolChunk = DotMem::Read<uint64_t>(BaseAddress + (0x176AF040 + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }
 
        int32_t Length = ((Pool ^ 0x35A0u) >> 5) & 0x3FF;
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
            int32_t DecryptedIndex = ((index - 1) ^ 0xC402F7E7) + 1;
            return DecryptedIndex ? DecryptedIndex : 0x3BFD0819;
        }
 
        return 0;
    }
 
    static void DecryptFName(char* buffer, int length)
    {
        if (length)
        {
            std::vector<uint8_t> EncryptedBuffer(buffer, buffer + length);
 
            int v5 = (uint16_t)(((2 * ((2 * length) ^ (8571 * length - 11351))) ^ (8571 * ((2 * length) ^ (8571 * length - 11351)) - 11351)) + 218);
            for (int i = 0; i < length; ++i)
            {
                buffer[i] = EncryptedBuffer[v5++ % length] ^ (((2 * ((2 * length) ^ (123 * length - 87))) ^ (123 * ((2 * length) ^ (123 * length - 87)) - 87)) - 44);
            }
        }
 
        buffer[length] = '\0';
    }
};