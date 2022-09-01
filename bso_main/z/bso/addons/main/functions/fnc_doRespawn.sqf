#include "script_component.hpp"

params ["_code", "_args"];

if (!alive player && {player in ([] call ace_spectator_fnc_players) && !isNil QEFUNC(respawn,isTemplateActive) && {[side group player] call EFUNC(respawn,isTemplateActive)}}) exitWith {
    [_code, _args] call EFUNC(respawn,doRespawn);
};

if (["IsSpectating"] call BIS_fnc_EGSpectator) exitWith {
    ["Terminate"] call BIS_fnc_EGSpectator;
    _args call _code;
};

if (getMarkerType "spectator_box" != "" && player distance2D getMarkerPos "spectator_box" < 30) exitWith { // spectator box exists and is properly marked
    _args call _code;
};
