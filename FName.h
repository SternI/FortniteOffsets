// Make Sure Your UWorld Is The Same As This Repo
class FName {
public:
    int ComparisonIndex;

    std::string ToString() {
        const int NAME_SIZE = 2048;

        const unsigned int ChunkOffset = ComparisonIndex >> 16;
        const unsigned short NameOffset = ComparisonIndex;

        auto NamePoolChunk = DotMem::Read<uint64_t>(va_text + (0x124DE7C0 + 8 * ChunkOffset + 16)) + 2 * NameOffset;
        auto Pool = DotMem::Read<uint16_t>(NamePoolChunk);

        if (Pool < 64) {
            const int CompIndex = DotMem::Read<DWORD>(NamePoolChunk + 2);
            const unsigned int _chunkOffset = CompIndex >> 16;
            const unsigned short _nameOffset = CompIndex;
            NamePoolChunk = DotMem::Read<uint64_t>(va_text + (0x124DE7C0 + 8 * _chunkOffset + 16)) + 2 * _nameOffset;
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
        unsigned int v4; // eax
        int v5; // edx
        unsigned int v6; // er8
        char* v7; // rcx
        __int64 v8; // rax

        v4 = DotMem::Read<unsigned int>(va_text + 0x123DA2D8);
        v5 = (v4 << 8) | (v4 >> 8);
        v6 = v4 >> 2;
        if (length)
        {
            v7 = buffer;
            v8 = length;
            do
            {
                v5 += v6;
                *v7++ ^= v5;
                --v8;
            } while (v8);
        }
    }
};