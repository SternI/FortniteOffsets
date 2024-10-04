for (auto i = 0; i < FLT_MAX; i++) {
    va_text = BaseAddress + i * 0x1000; // va_text must be out
    auto UWorld = read<uintptr_t>(va_text + Offsets::UWorld);
    auto Level = read<uintptr_t>(UWorld + 0x30); // PersistentLevel
    if (UWorld && Level && read<uintptr_t>(Level + 0xc0) /* OwningWorld */ == UWorld) {
        break;
    }
}