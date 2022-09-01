#include "script_component.hpp"

params ["_display"];

_display displayAddEventHandler ["KeyDown", {
    params ["_display", "_key", "_shift", "_ctrl", "_alt"];
    private _keyBinds = (["BSO Admin", QGVAR(exitSpectator)] call CBA_fnc_getKeybind) select 8; // all keybinds
    if ([_key, [_shift, _ctrl, _alt]] in _keybinds) then {
        [] call FUNC(adminExitSpectator);
        true
    } else {
        false
    }
}];
