## ++Fortnite+Release-40.00-CL-51995682-Windows
### SDK: [Viewer](https://agametracker.iamstern.xyz/sdk/++Fortnite+Release-40.00-CL-51995682-Windows?game=fortnite) | [ZIP](/SDK/++Fortnite+Release-40.00-CL-51995682-Windows.zip)
### Global Offsets
```yaml
GWorld: 0x19401C60
GEngine: 0x194034B8
GNames: 0x192C1248
GRarityStruct: 0x16A76F78
```
```cpp
inline uintptr_t GetGWorld() {
    auto GWorld = DotMem::Read<uintptr_t>(DotMem::BaseAddress + 0x19401C60);
    if (!GWorld) return NULL;
    return _rotl64(GWorld, 32) ^ 0x35E5647853A0CBFLL;
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
        if (Data.ScriptStruct == DotMem::BaseAddress + 0x16A76F78) { // FortItemComponentData_Rarity struct
            return DotMem::Read<EFortRarity>(Data.StructMemory);
        }
    }

    return EFortRarity::EFortRarity_Uncommon;
}

```
### Functions
```yaml
StaticFindObject: 0x56E5BE
UObject::ProcessEvent: 0xACC58 (Index: 0x2b)
```
### Other Offsets
```yaml
UWorld::CameraLocation: 0x180
UWorld::CameraRotation: 0x190
UWorld::WorldTimeSeconds: 0x1a0
ULevel::Actors: 0xa8

UObject::ObjectFlags: 0x14
UObject::InternalIndex: 0x10
UObject::NamePrivate: 0x8
UObject::ObjectListInternalIndex: 0xc
UObject::OuterPrivate: 0x18
UObject::ClassPrivate: 0x20

UStruct.PropertiesSize: 0x58
UStruct::MinAlignment: 0x5c
UStruct::SuperStruct: 0x60
UStruct::Children: 0x68
UStruct::ChildProperties: 0x88

FField::Owner: 0x10
FField::Next: 0x8
FField::ClassPrivate: 0x18

FFieldClass::CastFlags: 0x28
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
```
