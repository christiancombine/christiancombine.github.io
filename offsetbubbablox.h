#pragma once

#include <cstdio>
#include <Windows.h>
#define x(rva) (rva - 0x400000 + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

// Dumped by christian combine at 12:23 UTC+2 2026.08.12
// Revival : BubbaBlox
namespace Offsets {
    uintptr_t luau_load = x(0x13DEB70) // aka deserialize | credits to speednextdoor for telling me this one
    uintptr_t print = x(0x672A90);
    uintptr_t lua_gettop = x(0x1537270);
    uintptr_t lua_createtable   = x(0x13E0580);
    uintptr_t lua_pushstring    = x(0x13DF460);
    uintptr_t lua_setfield      = x(0x13DEB70);
    uintptr_t lua_pushlstring   = x(0x13DEB70);
    uintptr_t lua_pushvalue     = x(0x13DF700);
    uintptr_t lua_settable      = x(0x13DEB70);
    uintptr_t lua_setmetatable  = x(0x13DE860);
    uintptr_t lua_replace       = x(0x13DF700);
    uintptr_t lua_getfield      = x(0x13DDFA0);
    uintptr_t lua_settop        = x(0x13DFE90);
    uintptr_t lua_remove        = x(0x13DF460);
    uintptr_t lua_insert        = x(0x13DF1E0);
    uintptr_t index2adr         = x(0x13DE860);
    uintptr_t lua_pushcclosure  = x(0x13DF460);
    uintptr_t lua_call          = x(0x13DDBA0);
    uintptr_t lua_close         = x(0x13DDCB0);
    uintptr_t lua_rawget        = x(0x13E05E0);
    uintptr_t lua_rawgeti       = x(0x13E06A0);
    uintptr_t lua_rawset        = x(0x13E0710);
    uintptr_t lua_rawseti       = x(0x13E0750);
    uintptr_t lua_pushlightuserdata = x(0x13E0310);
    uintptr_t lua_pushnil       = x(0x13E0370);
    uintptr_t lua_pushnumber    = x(0x13E03B0);
    uintptr_t lua_pushthread    = x(0x13E0410);
    uintptr_t lua_newthread     = x(0x13DEFC0);
    uintptr_t lua_newuserdata   = x(0x13DF040);
    uintptr_t lua_next          = x(0x13DF110);
    uintptr_t lua_objlen        = x(0x13DF1E0);
    uintptr_t lua_pcall         = x(0x13DF270);
    uintptr_t lua_pushboolean   = x(0x13DF380);
    uintptr_t lua_resume        = x(0x13DEC50);
    uintptr_t lua_setreadonly   = x(0x13DEF00);
    uintptr_t ScriptContextVFTable = x(0x1DB66EC);
}
