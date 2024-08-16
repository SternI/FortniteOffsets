// People will steal the updated one without credit :(
for (auto i = 0; i < 25; i++) {
    if (Memory::Read<__int32>(BaseAddress + (i * 0x1000) + 0x250) == 0x6F41C00) {
        va_text = BaseAddress + ((i + 1) * 0x1000);
    }
}
