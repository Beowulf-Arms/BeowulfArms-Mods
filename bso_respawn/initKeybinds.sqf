#include "script_component.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

if (hasInterface) then {
    ["BSO Admin", QGVAR(exitSpectator), "Exit Spectator", {call FUNC(adminExitSpectator)}, "", [DIK_R, [false, false, false]]] call CBA_fnc_addKeybind;
};
