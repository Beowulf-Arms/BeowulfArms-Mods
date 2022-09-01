#include "script_component.hpp"

params ["_spawnPoint", ["_consumeTicket", false], ["_callback", {}], ["_callbackArgs", []]];

private _point = [_spawnPoint] call FUNC(getRespawnPoint);

if (isNil "_point") exitWith {
    ["WaveRespawn: Can't find a spawnpoint ""%1"".", _spawnPoint] call EFUNC(main,error);
};

_point params ["_target", "_location", "_displayName"];

// We do not consider players still in respawn menu here. They should have other options available
private _players = [] call ace_spectator_fnc_players;

_players = _players select {
    private _unit = _x;
    (typeName _target == "SIDE" && {side group _unit == _target}) ||
    (typeName _target == "ARRAY" && {vehicleVarName _unit in _target})
};

if (_consumeTicket) then {
    _players = _players call BIS_fnc_arrayShuffle; // make it somewhat fair for side tickets
    _players = _players select {
        [_x] call FUNC(consumeTicket) // keep going as long as there are tickets
    };
};

[{
    params ["_location", "_callback", "_callbackArgs"];
    [player, _location, false] call BIS_fnc_moveToRespawnPosition;
    _callbackArgs call _callback;
}, [_location, _callback, _callbackArgs]] remoteExec [QFUNC(doRespawn), _players]; // execute on selected players
