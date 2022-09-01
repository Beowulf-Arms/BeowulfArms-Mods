#include "script_component.hpp"

params ["_name"];

_name = toLower _name;

if (!isServer || canSuspend) exitWith {
    _this remoteExecCall [QFUNC(activatePoint), 2]; // execute unscheduled on server
};

if (_name in GVAR(activeSpawnPoints)) exitWith {};

private _point = [_name] call FUNC(getRespawnPoint);

if (isNil "_point") exitWith {
    ["ActivatePoint: Can't find a spawnpoint ""%1"".", _name] call EFUNC(main,error);
};

_point params ["_target", "_location", "_displayName"];

GVAR(activeSpawnPoints) pushBack _name;

if (typeName _target == "SIDE") then { // side
    private _bisId = [_target, _location, _displayName] call BIS_fnc_addRespawnPosition;
    GVAR(activeSpawnPointsData) pushBack [_target, _name, _bisId select 1];
} else {
     {
        private _unit = missionNamespace getVariable [_x, objNull];
        if (!isNull _unit) then {
            private _bisId = [_unit, _location, _displayName] call BIS_fnc_addRespawnPosition;
            GVAR(activeSpawnPointsData) pushBack [_unit, _name, _bisId select 1];
        };
    } forEach _target;
};

publicVariable QGVAR(activeSpawnPoints);
publicVariable QGVAR(activeSpawnPointsData);
