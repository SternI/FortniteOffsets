#pragma once

#include <vector>

static int32_t GNames = 0x1885D640;
static int32_t NamePrivate = 0x8;
class FName
{
public:
    int32_t ComparisonIndex;

    FName()
    {
        ComparisonIndex = 0;
    }

    FName(uintptr_t object)
    {
        if (object)
        {
            ComparisonIndex = DotMem::Read<int32_t>(object + NamePrivate);
        }
    }

    std::string ToString() const
    {
        return ToString(ComparisonIndex);
    }

    static std::string ToString(uintptr_t object)
    {
        return FName(object).ToString();
    }

    static std::string ToString(int32_t index)
    {
        int32_t DecryptedIndex = DecryptIndex(index);
        uint64_t NamePoolChunk = DotMem::Read<uint64_t>(DotMem::BaseAddress + (GNames + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
        uint16_t Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (((Pool ^ 0x80) & 0x7FE0) == 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 2));
            NamePoolChunk = DotMem::Read<uint64_t>(DotMem::BaseAddress + (GNames + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = ((Pool ^ 0x80u) >> 5) & 0x3FF;

        std::vector<char> NameBuffer(Length + 1);
        DotMem::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer.data(), Length);
        DecryptFName(NameBuffer.data(), Length);
        return std::string(NameBuffer.data());
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = _rotr(index - 1, 1) - 0x527D388B;
            return DecryptedIndex ? DecryptedIndex : 0xAD82C774;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int32_t length)
    {
        if (length)
        {
            std::vector<uint8_t> EncryptedBuffer(buffer, buffer + length);
            
            int32_t v8 = 8962 * length + 21856876;
            for (int32_t i = 0; i < length; i++)
            {
                v8 = 8962 * v8 + 21856876;
                buffer[length - 1 - i] = char(v8 + _rotr8(EncryptedBuffer[i], 1) + 6);
            }
        }

        buffer[length] = '\0';
    }
};