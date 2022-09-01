#include "script_component.hpp"

params ["_side"];

if (_side in GVAR(ranOutSides)) exitWith {};
GVAR(ranOutSides) pushBack _side;

private _config = missionConfigFile >> "BSORespawns" >> str _side;

if (!isClass _config) exitWith {};

private _file = getText (_config >> "onTicketsDepleted");

if (_file == "") exitWith {};

[_side] call compile preprocessFileLineNumbers _file;
