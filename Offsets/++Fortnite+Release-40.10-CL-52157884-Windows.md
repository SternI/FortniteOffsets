## ++Fortnite+Release-40.10-CL-52157884-Windows
### SDK: No SDK (lazy)
### Global Offsets
```yaml
GWorld: 0x1895DE60
GEngine: 0x1895F6B8
GNames: 0x18814B40
```
```cpp
inline uintptr_t GetGWorld() {
    auto GWorld = DotMem::Read<uintptr_t>(DotMem::BaseAddress + 0x1895DE60);
    if (!GWorld) return NULL;
    return ~_rotl64(GWorld ^ 0xCF76574CLL, 48)
}

struct FInstancedStruct
{
    uintptr_t ScriptStruct;
    uintptr_t StructMemory;
};
 
EFortRarity GetRarity(uintptr_t itemDefinition) {
    auto DataList = DotMem::Read<TArray<FInstancedStruct>>(itemDefinition + 0x68);
    for (auto i = 0; i < DataList.Num(); i++) {
        auto Data = DataList[i];
        if (Data.ScriptStruct == DotMem::BaseAddress + 0x15FAA268) { // FortItemComponentData_Rarity struct
            return DotMem::Read<EFortRarity>(Data.StructMemory);
        }
    }

    return EFortRarity::EFortRarity_Common;
}

```
### Functions
```yaml
StaticFindObject: 0x8D9F7D
UObject::ProcessEvent: 0x62DD6 (Index: 0x29)
```
### Other Offsets
```yaml
UWorld::CameraLocation: 0x160
UWorld::CameraRotation: 0x170
UWorld::WorldTimeSeconds: 0x180
ULevel::Actors: 0x98

UObject::InternalIndex: 0x8
UObject::ClassPrivate: 0x10
UObject::OuterPrivate: 0x18
UObject::NamePrivate: 0x20
```

### FName
```cpp
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
        int32_t Length = ((Header >> 5) & 0x3FF) ^ 0x383;

        if (!Length)
        {
            Index = DecryptIndex(DotMem::Read<int32_t>(Entry + 6));
            if (!Index) return "";
            Entry = GetEntry(Index);
            if (!Entry) return "";

            Header = DotMem::Read<uint16_t>(Entry);
            Length = ((Header >> 5) & 0x3FF) ^ 0x383;
        }

        std::vector<char> Buffer(Length + 1);
        DotMem::ReadMemory(Entry + 2, Buffer.data(), Length);
        DecryptName(Buffer.data(), Length);

        return std::string(Buffer.data());
    }

    static int32_t DecryptIndex(int32_t index)
    {
        if (!index) return 0;
        int32_t Decrypted = ((index - 1) ^ 0x57C9BBE3) + 1;
        return Decrypted ? Decrypted : 0xA836441D;
    }

    static void DecryptName(char *buffer, int32_t length)
    {
        if (length > 0)
        {
            std::vector<uint8_t> Encrypted(buffer, buffer + length);

            int32_t Key = length;
            for (int32_t i = 0; i < length; i++)
            {
                buffer[i] = 80 * Key + ~Encrypted[i] - 71;
                Key = -8368 * Key - 920115012;
            }
        }

        buffer[length] = '\0';
    }
};
```