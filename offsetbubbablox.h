#pragma once

#include <cstdio>
#include <Windows.h>

#define x(rva) (rva - 0x400000 + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

// Dumped by christian combine at 12:23 UTC+2 2026.08.12
// Revival : BubbaBlox
// REMOVED OFFSETS 21:00 UTC+2 SAME DAY TURNS OUT THEY WERE INVALID DUMP SOON!
// added that i had - 21:34
namespace Offsets {
    uintptr_t r_spawn          = x(0x158F2A0);
    uintptr_t lua_getfield     = x(0x13DDFA0);
    uintptr_t lua_pushstring   = x(0x13DEB70);
    uintptr_t print            = x(0x6570D0);
    uintptr_t luaD_pcall       = x(0x13DE750);
    uintptr_t lua_pushcclosure = x(0x13DF700);
    uintptr_t lua_pushthread   = x(0x772140);
    uintptr_t luau_load        = x(0x13DEB70); // aka deserialize | credits to speednextdoor for telling me this one
    uintptr_t ScriptContextVFTable = x(0x1DB66EC);
}
