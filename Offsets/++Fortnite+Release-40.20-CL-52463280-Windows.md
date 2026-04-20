## ++Fortnite+Release-40.20-CL-52463280-Windows
### SDK: [Viewer](https://agametracker.iamstern.xyz/sdk/++Fortnite+Release-40.20-CL-52463280-Windows?game=fortnite) | [ZIP](/SDK/++Fortnite+Release-40.20-CL-52463280-Windows.zip)
### Global Offsets
```yaml
GWorld: 0x18DA5D70
GEngine: 0x18DA75F8
GNames: 0x18C60888
```
```cpp
inline uintptr_t GetGWorld() {
    auto GWorld = DotMem::Read<uintptr_t>(DotMem::BaseAddress + 0x18DA5D70);
    if (!GWorld) return NULL;
    return 0x24042FF8A5B240D7LL * (_rotl64(GWorld, 5) ^ 0x165D340LL) - 0x235CE507FE35F6B5LL;
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
        if (Data.ScriptStruct == DotMem::BaseAddress + 0x163AB2E8) { // FortItemComponentData_Rarity struct
            return DotMem::Read<EFortRarity>(Data.StructMemory);
        }
    }

    return EFortRarity::EFortRarity_Uncommon;
}

```
### Functions
```yaml
StaticFindObject: 0x41FEB4
UObject::ProcessEvent: 0x8E154 (Index: 0x44)
```
### Other Offsets
```yaml
UObject::ObjectFlags: 0x8
UObject::InternalIndex: 0xc
UObject::NamePrivate: 0x10
UObject::ObjectListInternalIndex: 0x14
UObject::OuterPrivate: 0x18
UObject::ClassPrivate: 0x20

UStruct::SuperStruct: 0x40
UStruct::Children: 0x48
UStruct::ChildProperties: 0x50
UStruct::MinAlignment: 0x58

FField::Owner: 0x20
FField::Next: 0x10
FField::ClassPrivate: 0x8

FFieldClass::CastFlags: 0x18
```

### FName
```cpp
lazy tbh
```
