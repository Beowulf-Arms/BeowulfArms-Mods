_logic = param [0,objNull,[objNull]];

if (isNil "jebus_fnc_main") exitWith {
	["Mission doesn't include jebus.", _logic] call bso_jb_fnc_error;
};

bso_jebus_error = missionNamespace getVariable ["bso_jebus_error", []];

private _lives = [] call compile (_logic getVariable "lives");
private _delay = [] call compile (_logic getVariable "delay");
private _cache = [] call compile (_logic getVariable "cache");
private _reduce = [] call compile (_logic getVariable "reduce");
private _start = [] call compile (_logic getVariable "start");
private _flying = _logic getVariable "flying";
private _respawnmarkers = [] call compile (_logic getVariable "respawnmarkers");
private _pause = [] call compile (_logic getVariable "pause");
private _exit = _logic getVariable "exit";
private _init = _logic getVariable "init";
private _debug = _logic getVariable "debug";

private _synced = synchronizedObjects _logic;
private _triggers = [];
private _units = [];
{
	if (_x isKindOf "EmptyDetector") then
	{
		_triggers pushBack _x;
	};
	if (_x isKindOf "CAManBase") then
	{
		_units pushBack _x;
	};
} forEach _synced;

private _remaining = _synced - _triggers - _units;

if (count _remaining > 0) exitWith {
	[format ["Unrecognized objects synced: %1", str (_remaining apply {[_x, typeof _x]})], _logic] call bso_jb_fnc_error;
	bso_jebus_error pushBack _remaining;
};

private _nonLeaders = _units select {_x != leader group _x};
if (count _nonLeaders > 0) exitWith {
	[format ["Linked unit is not a group leader: %1", str _nonLeaders], _logic] call bso_jb_fnc_error;
	bso_jebus_error pushBack _nonLeaders;
};

{
	private _args = [_x, "LIVES=", _lives, "DELAY=", _delay, "START=", _start, "RESPAWNMARKERS=", _respawnmarkers, "PAUSE=", _pause];
	if (_flying) then {
		_args pushBack "FLYING";
	};
	if (_debug) then {
		_args pushBack "DEBUG";
	};
	if (_exit != "") then {
		_args pushBack "EXIT=";
		_args pushBack _exit;
	};
	if (!isNil "_reduce") then {
		_args pushBack "REDUCE=";
		_args pushBack _reduce;
	};
	if (!isNil "_cache") then {
		_args pushBack "CACHE=";
		_args pushBack _cache;
	};
	_args pushBack "INIT=";
	_args pushBack (([_x] call bso_jb_fnc_modulesToCode) + _init);

	_x synchronizeObjectsAdd _triggers;

	if (_debug) then {
		[format ["DEBUG: %1 spawn jebus_fnc_main", _args], _logic] call bso_jb_fnc_error;
	};

	_args spawn jebus_fnc_main;
} forEach _units;
