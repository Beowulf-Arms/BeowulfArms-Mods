#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

ADDON = true;

[QGVAR(debugEnabled), "CHECKBOX", ["Debug Enabled", "Broadcast error messages to all machines"], "BSO Server", false] call CBA_fnc_addSetting;
