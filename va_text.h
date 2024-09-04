for (auto i = 0; i < INT_MAX; i++) {
    va_text = BaseAddress + i * 0x1000;
    auto uworld = read<uintptr_t>(va_text + Offsets::UWorld);
    auto level = read<uintptr_t>(uworld + Offsets::PersistentLevel);
    if (uworld && level && read<uintptr_t>(level + Offsets::OwningWorld) == uworld) {
        break;
    }
}
