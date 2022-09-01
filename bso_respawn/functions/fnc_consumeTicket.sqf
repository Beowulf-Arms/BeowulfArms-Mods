#include "script_component.hpp"

params ["_unit"];

// personal
if ([_unit] call BIS_fnc_respawnTickets > 0) exitWith {
    private _resulting = [_unit, -1] call BIS_fnc_respawnTickets;
    if (_resulting <= 0) then {
        _unit setVariable ["BIS_fnc_respawnTickets_value", nil, true]; // remove personal ticket so that UI falls through to side tickets
    };
    true
};

// side
if ([side group _unit] call BIS_fnc_respawnTickets > 0) exitWith {
    private _resulting = [side group _unit, -1] call BIS_fnc_respawnTickets;
    if (_resulting <= 0) then {
        [side group _unit] remoteExec [QFUNC(ticketsRanOut), 2];
    };
    true
};

false
