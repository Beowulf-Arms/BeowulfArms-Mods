#include "script_component.hpp"

if (hasInterface) then {
    ["BSO Reporter", QGVAR(camera), "Activate Splendid Camera", {call FUNC(camera)}, ""] call CBA_fnc_addKeybind;
    // ["BSO Reporter", QGVAR(toggleHud), "Toggle HUD", {call FUNC(toggleHud)}, ""] call CBA_fnc_addKeybind;
};
