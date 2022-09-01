#include "script_component.hpp"

private _config = missionConfigFile >> "BSORespawns" >> (str side group player);

if (!isClass _config) exitWith {};

private _personalTickets = getNumber (_config >> "personalTickets");

{
    _x params ["_unit", "_tickets"];
    if (vehicleVarName player == _unit) exitWith {
        _personalTickets = _tickets;
    };
} foreach getArray (_config >> "personalTicketsUnit");

if (_personalTickets > 0) then {
    [player, _personalTickets] call BIS_fnc_respawnTickets;
};
setPlayerRespawnTime (3 + getMissionConfigValue ["respawnDelay", 3]);

if (didJIP) then {
    [] call FUNC(addLocalSpawnPoints);
};
