#include "script_component.hpp"

if (!ace_spectator_isSet) exitWith {};
if (!serverCommandAvailable "#kick") exitWith {};

[{
    [true] call FUNC(hidePlayer);
    hint "You'll become un-hidden after moving 5m.";
    private _oldPos = getPosASL player;
    [{
        params ["_oldPos"];
        player distance2D _oldPos > 5
    }, {
        [false] call FUNC(hidePlayer);
        hint "You are not hidden anymore.";
    }, [_oldPos]] call CBA_fnc_waitUntilAndExecute;
}, []] call FUNC(doRespawn);
