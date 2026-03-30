#pragma once

#include <vector>
#include <string>

static int32_t GNames = 0x192C1248;
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
            ComparisonIndex = DotMem::Read<int32_t>(object + Offsets::NamePrivate);
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
        uint32_t BlockCount = DotMem::Read<uint32_t>(DotMem::BaseAddress + Offsets::GNames) + 1;
        auto GetEntry = [&](uint32_t index) -> uint64_t
        {
            uint32_t BlockIndex = index >> 16;
            if (BlockIndex >= BlockCount) return 0;
 
            uint64_t Block = DotMem::Read<uint64_t>(DotMem::BaseAddress + Offsets::GNames + 8 + (BlockIndex * 8));
            if (!Block) return 0;
 
            return Block + 2 * uint16_t(index);
        };
 
        int32_t Index = DecryptIndex(index);
        uint64_t Entry = GetEntry(Index);
        if (!Entry) return "";
 
        uint16_t Header = DotMem::Read<uint16_t>(Entry);
        int32_t Length = (Header >> 6) ^ 0x373;
 
        if (!Length)
        {
            Index = DecryptIndex(DotMem::Read<int32_t>(Entry + 6));
            Entry = GetEntry(Index);
            if (!Entry) return "";
 
            Header = DotMem::Read<uint16_t>(Entry);
            Length = (Header >> 6) ^ 0x373;
        }
 
        std::vector<char> Buffer(Length + 1);
        DotMem::ReadMemory(Entry + 2, Buffer.data(), Length);
        DecryptName(Buffer.data(), Length);
 
        return std::string(Buffer.data());
    }
 
    static int32_t DecryptIndex(int32_t index)
    {
        if (!index) return 0;
        int32_t Decrypted = ((index - 1) ^ 0xAF1469C4) + 1;
        return Decrypted ? Decrypted : 0x50EB963C;
    }
 
    static void DecryptName(char *buffer, int32_t length)
    {
        if (length > 0)
        {
            std::vector<uint8_t> Encrypted(buffer, buffer + length);
 
            int32_t Key = (8080 * length + 918566067) ^ (4 * length);
            for (int32_t i = 0; i < length; i++)
            {
                buffer[i] = Key + ~Encrypted[i] + 13;
                Key = (8080 * Key + 918566067) ^ (4 * Key);
            }
        }
 
        buffer[length] = '\0';
    }
};
