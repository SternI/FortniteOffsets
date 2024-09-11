class FName {
public:
    int ComparisonIndex;

    std::string ToString() {
        const int NAME_SIZE = 1024;

        const unsigned int ChunkOffset = ComparisonIndex >> 16;
        const unsigned short NameOffset = ComparisonIndex;

        auto NamePoolChunk = DotMem::Read<uint64_t>(va_text + (0x121B1400 + 8 * ChunkOffset + 16)) + 2 * NameOffset;
        auto Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (Pool < 64) {
            const int CompIndex = DotMem::Read<DWORD>(NamePoolChunk + 2);
            const unsigned int _chunkOffset = CompIndex >> 16;
            const unsigned short _nameOffset = CompIndex;
            NamePoolChunk = DotMem::Read<uint64_t>(va_text + (0x121B1400 + 8 * _chunkOffset + 16)) + 2 * _nameOffset;
            Pool = DotMem::Read<uint16_t>(NamePoolChunk);
        }

        const auto NameLength = Pool >> 6;
        char NameBuffer[NAME_SIZE + 1] = { 0 };
        Driver::ReadPhysical(reinterpret_cast<void*>(NamePoolChunk + 2), NameBuffer, NameLength < NAME_SIZE ? NameLength : NAME_SIZE);

        DecryptFName(NameBuffer, NameLength);
        return std::string(NameBuffer);
    }

private:
    static void DecryptFName(char* buffer, int length) {
        char* v2; // rdi
        int v3; // ebx
        unsigned int v4; // eax
        unsigned int v5; // r8d
        __int64 result; // rax
        int v6; // ecx

        v2 = buffer;
        v3 = length;
        v4 = DotMem::Read<int>(va_text + 0x120AB40C); // always 0x65BBA674 for me ¯\_(ツ)_/¯
        v5 = v4 ^ 0x9C677CC5;
        result = 1041204193 * v4;
        v6 = 0;
        if (v3)
        {
            do
            {
                result = v6 + v4 % 0x21;
                ++v6;
                v5 += result;
                *v2++ ^= v5;
            } while (v6 < v3);
        }
    }
};
