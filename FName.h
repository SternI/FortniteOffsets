#pragma once

#include <vector>

static int32_t GNames = 0x183BE640;
static int32_t NamePrivate = 0xc;
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

        if (((Pool ^ 0xFFA2) & 0x3FF) == 0)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 2));
            NamePoolChunk = DotMem::Read<uint64_t>(DotMem::BaseAddress + (GNames + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        int32_t Length = (Pool ^ 0xFFA2) & 0x3FF;
        Length *= (Pool & 0x8000u) == 0 ? 1 : 2;

        std::vector<char> NameBuffer(Length + 1);
        DotMem::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer.data(), Length);
        DecryptFName(NameBuffer.data(), Length);
        return std::string(NameBuffer.data());
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = _rotr((index - 1) ^ 0x7F6890E5, 12) + 1;
            return DecryptedIndex ? DecryptedIndex : 0xF1A80977;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int32_t length)
    {
        if (length)
        {
            int32_t v11 = 8949 * length + 21607526;
            for (int32_t i = 0; i < length; i++)
            {
                buffer[i] = _rotr8(uint8_t(buffer[i]) ^ v11, 1);
                v11 = 8949 * v11 + 21607526;
            }
        }

        buffer[length] = '\0';
    }
};