#include "script_component.hpp"

params ["_name"];

private _sides = [west, east, resistance, civilian];
private _sideIndex = _sides findIf {isClass (missionConfigFile >> "BSORespawns" >> str _x >> _name)};
if (_sideIndex == -1) exitWith { nil };
private _side = _sides select _sideIndex;

private _config = missionConfigFile >> "BSORespawns" >> str _side >> _name;

private _displayName = getText (_config >> "name");

private _target = _side;
private _units = getArray (_config >> "units");

if (count _units > 0) then {
    _target = _units;
};

private _markerName = getText (_config >> "marker");
if (_markerName != "") exitWith {
    [_target, _markerName, _displayName]
};

private _objectName = getText (_config >> "object");
private _object = missionNamespace getVariable [_objectName, objNull];

[_target, _object, _displayName]
