#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

ADDON = true;

["ace_arsenal_displayOpened", {
    params ["_display"];
    [_display] call FUNC(install);
}] call CBA_fnc_addEventHandler;
