#pragma once

#include <vector>

static int32_t GNames = 0x183501C0;
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
        int32_t Length = ((Pool >> 6) ^ 0xFF42) & 0x3FF;

        if (!Length)
        {
            DecryptedIndex = DecryptIndex(DotMem::Read<int32_t>(NamePoolChunk + 6));
            NamePoolChunk = DotMem::Read<uint64_t>(DotMem::BaseAddress + (GNames + 8 * (DecryptedIndex >> 16) + 16)) + 2 * (uint16_t)DecryptedIndex;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
            Length = ((Pool >> 6) ^ 0xFF42) & 0x3FF;
        }

        if (!Length) return "";

        std::vector<char> NameBuffer(Length + 1);
        DotMem::ReadPhysical(PVOID(NamePoolChunk + 2), NameBuffer.data(), Length);
        DecryptFName(NameBuffer.data(), Length);
        return std::string(NameBuffer.data());
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (index)
        {
            int32_t DecryptedIndex = _rotr(index - 1, 3) - 0x4F027D5B;
            return DecryptedIndex ? DecryptedIndex : 0xB0FD82A4;
        }

        return 0;
    }

    static void DecryptFName(char* buffer, int32_t length)
    {
        if (length)
        {            
            int32_t v8 = (16 * length) ^ (8926 * length + 22251098);
            for (int32_t i = 0; i < length; i++)
            {
                buffer[i] = char(_rotl8(uint8_t(buffer[i] - v8 - 68), 1));
                v8 = (16 * v8) ^ (8926 * v8 + 22251098);
            }
        }

        buffer[length] = '\0';
    }
};