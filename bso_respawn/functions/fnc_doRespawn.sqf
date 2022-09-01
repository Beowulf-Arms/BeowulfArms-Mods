#include "script_component.hpp"

params ["_code", "_args"];

GVAR(handleRespawnFnc) = [_code, _args];

if (ace_spectator_isSet) then {
    [false] call ace_spectator_fnc_setSpectator;
};
GVAR(handleRespawn) = true; // go away MenuPosition we handle this
setPlayerRespawnTime 0;


