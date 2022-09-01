#include "script_component.hpp"

if (hasInterface && [side group player] call FUNC(isTemplateActive)) then
{
    if (getNumber (missionConfigFile >> "respawnOnStart") != -1) exitWith {
        ["BSO_Respawn_System: respawnOnStart must be -1."] call EFUNC(main,error);
    };

    [{!isNull player}, {
        [] call FUNC(playerPostInit);
    }] call CBA_fnc_waitUntilAndExecute;
};

if (!isServer) exitWith {}; // server only from here on

if ({[_x] call bso_respawn_fnc_isTemplateActive} count [west, east, resistance, civilian] == 0) exitwith {};

if (getNumber (missionConfigFile >> "respawnOnStart") != -1) exitWith {
    ["BSO_Respawn_System: respawnOnStart must be -1."] call EFUNC(main,error);
};

{
    private _side = _x;
    private _config = missionConfigFile >> "BSORespawns" >> (str _side);
    private _tickets = getNumber (_config >> "sideTickets");
    [_side, _tickets] call BIS_fnc_respawnTickets;
    {
        [configName _x] call FUNC(checkPointIsValid);
        if (getNumber (_x >> "disabled") == 0) then {
            [configName _x, true] call FUNC(activatePoint);
        };
    } forEach ("true" configClasses _config);
} foreach [west, east, resistance, civilian];
