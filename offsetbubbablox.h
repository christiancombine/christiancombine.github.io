#pragma once

#include <cstdio>
#include <Windows.h>
#define x(rva) (rva - 0x400000 + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

// Dumped by christian combine at 12:23 UTC+2 2026.08.12
// Revival : BubbaBlox
// REMOVED OFFSETS 21:00 UTC+2 SAME DAY TURNS OUT THEY WERE INVALID DUMP SOON!
namespace Offsets {
    uintptr_t luau_load = x(0x13DEB70) // aka deserialize | credits to speednextdoor for telling me this one
    uintptr_t print = x(0x672A90);
    uintptr_t ScriptContextVFTable = x(0x1DB66EC);
}
