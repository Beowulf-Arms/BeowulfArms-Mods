#include "script_component.hpp"

if (!GVAR(handleRespawn)) exitwith {
    player setVariable ["BIS_fnc_showRespawnMenu_disable", false];
    true
};

setPlayerRespawnTime (3 + getMissionConfigValue ["respawnDelay", 3]);

player setVariable ["BIS_fnc_showRespawnMenu_disable", true];

if (isNil QGVAR(handleRespawnFnc)) exitWith {
    ["BSO_Respawn_System: Unexpected respawn."] call EFUNC(main,error);
};

GVAR(handleRespawnFnc) params ["_code", "_args"];
GVAR(handleRespawnFnc) = nil;
_args call _code;

// otherwise bis_fnc_selectRespawnTemplate dies horribly
true
