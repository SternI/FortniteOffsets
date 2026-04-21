## ++Fortnite+Release-40.20-CL-52900211-Windows
### SDK: [Viewer](https://agametracker.iamstern.xyz/sdk/++Fortnite+Release-40.20-CL-52900211-Windows?game=fortnite) | [ZIP](/SDK/++Fortnite+Release-40.20-CL-52900211-Windows.zip)
### Global Offsets
```yaml
GWorld: 0x18F6E8F0
GEngine: 0x18F70178
GNames: 0x18E293FC
GRarityStruct: 0x164EE5A8
```
```cpp
inline uintptr_t GetGWorld() {
    auto GWorld = DotMem::Read<uintptr_t>(DotMem::BaseAddress + 0x18F6E8F0);
    if (!GWorld) return NULL;
    return _byteswap_uint64(GWorld) + 2700046658u;
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
        if (Data.ScriptStruct == DotMem::BaseAddress + 0x164EE5A8) { // FortItemComponentData_Rarity struct
            return DotMem::Read<EFortRarity>(Data.StructMemory);
        }
    }

    return EFortRarity::EFortRarity_Uncommon;
}

```
### Functions
```yaml
StaticFindObject: 0x93CA92
UObject::ProcessEvent: 0x5A7A2 (Index: 0x17)
```
### Other Offsets
```yaml
UObject::ObjectFlags: 0x14
UObject::InternalIndex: 0x10
UObject::NamePrivate: 0x8
UObject::ObjectListInternalIndex: 0xc
UObject::OuterPrivate: 0x18
UObject::ClassPrivate: 0x20

UStruct::SuperStruct: 0x40
UStruct::Children: 0x48
UStruct::MinAlignment: 0x5a
UStruct::ChildProperties: 0x70

FField::Owner: 0x10
FField::Next: 0x8
FField::ClassPrivate: 0x20

FFieldClass::CastFlags: 0x10
```

### FName
```cpp
lazy tbh
```
