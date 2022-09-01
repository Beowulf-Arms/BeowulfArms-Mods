#include "script_component.hpp"

params [["_instant", false]];

setPlayerRespawnTime 99999;

GVAR(handleRespawn) = true; // we are leaving or bypassing MenuPosition

if (isNil QGVAR(spectatorDisplayHandler)) then {
    GVAR(spectatorDisplayHandler) = ["ace_spectator_displayLoaded", {
        private _display = _this;
        [_display] call FUNC(installSpectatorKeyhandler);
    }] call CBA_fnc_addEventHandler;
};

if (_instant) then {
    [true] call ace_spectator_fnc_setSpectator;
} else {
    [{[true] call ace_spectator_fnc_setSpectator}, [], 3] call CBA_fnc_waitAndExecute;
};

