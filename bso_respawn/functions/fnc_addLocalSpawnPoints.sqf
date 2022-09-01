#include "script_component.hpp"

{
    private _name = _x;
    private _exists = GVAR(activeSpawnPointsData) findIf { 
        params ["_target", "_pointName"];
        _pointName == _name && 
        typeName _target == "OBJECT" &&
        {(vehicleVarName _target) isEqualTo vehicleVarName player}
    };
    if (_exists == -1) then {
        private _point = [_name] call FUNC(getRespawnPoint);

        _point params ["_target", "_location", "_displayName"];
        if (typeName _target != "ARRAY") exitWith {}; // side
        if !(vehicleVarName player in _target) exitWith {}; // not for us;
        private _bisId = [player, _location, _displayName] call BIS_fnc_addRespawnPosition;
        GVAR(activeSpawnPointsData) pushBack [player, _name, _bisId select 1];
    };
} forEach GVAR(activeSpawnPoints);

publicVariable QGVAR(activeSpawnPointsData);
