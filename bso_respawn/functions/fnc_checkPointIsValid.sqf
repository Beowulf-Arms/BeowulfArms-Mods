#include "script_component.hpp"

params ["_name"];

private _sides = [west, east, resistance, civilian];
private _sideIndex = _sides findIf {isClass (missionConfigFile >> "BSORespawns" >> str _x >> _name)};
private _side = _sides select _sideIndex;

private _config = missionConfigFile >> "BSORespawns" >> str _side >> _name;

private _isMarker = isText (_config >> "marker");
private _isObject = isText (_config >> "object");

if (_isMarker isEqualTo _isObject) exitWith {
    ["BSO_Respawn_System: Spawnpoint %1/%2 must have either the marker or the object attribute.", _side, _name] call EFUNC(main,error);
};

if (getText (_config >> "name") == "") exitWith {
    ["BSO_Respawn_System: Spawnpoint %1/%2 is missing the name attribute.", _side, _name] call EFUNC(main,error);
};

if (_isMarker) exitWith {
    private _markerName = getText (_config >> "marker");
    if (getMarkerType _markerName == "") then {
        ["BSO_Respawn_System: Spawnpoint %1/%2 references a marker ""%3"" which doesn't exist.", _side, _name, _markername] call EFUNC(main,error);
    };
};

private _objectName = getText (_config >> "object");
private _object = missionNamespace getVariable [_objectName, objNull];

if (isNull _object) exitWith {
    ["BSO_Respawn_System: Spawnpoint %1/%2 references an object ""%3"" which doesn't exist.", _side, _name, _objectName] call EFUNC(main,error);
};
