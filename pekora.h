#pragma once

#include <cstdio>
#include <Windows.h>

#define x(rva) (rva - 0x400000 + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

// NEW FORMAT
namespace Offsets {
    uintptr_t r_spawn          = x(0x0);
    uintptr_t lua_getfield     = x(0x0);
    uintptr_t lua_pushstring   = x(0x0;
    uintptr_t print            = x(0x0);
    uintptr_t luaD_pcall       = x(0x0);
    uintptr_t lua_pushcclosure = x(0x0);
    uintptr_t lua_pushthread   = x(0x0);
    uintptr_t luau_load        = x(0x0); // aka deserialize | credits to speednextdoor for telling me this one
    uintptr_t ScriptContextVFTable = x(0x0);
}
