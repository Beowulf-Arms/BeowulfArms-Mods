#include "script_component.hpp"

params ["_name"];

_name = toLower _name;

if (!isServer || canSuspend) exitWith {
    _this remoteExecCall [QFUNC(deactivatePoint), 2]; // execute unscheduled on server
};

if (!(_name in GVAR(activeSpawnPoints))) exitWith {};

GVAR(activeSpawnPoints) = GVAR(activeSpawnPoints) - [_name];

private _toRemove = GVAR(activeSpawnPointsData) select {_x select 1 == _name};

{
    _x params ["_target", "_pointName", "_bisId"];
    if (typeName _target == "OBJECT") then {
        _target = missionNamespace getVariable vehicleVarName _target;
    };
    [_target, _bisId] call BIS_fnc_removeRespawnPosition;
} forEach _toRemove;

GVAR(activeSpawnPointsData) = GVAR(activeSpawnPointsData) - _toRemove;

publicVariable QGVAR(activeSpawnPoints);
publicVariable QGVAR(activeSpawnPointsData);
