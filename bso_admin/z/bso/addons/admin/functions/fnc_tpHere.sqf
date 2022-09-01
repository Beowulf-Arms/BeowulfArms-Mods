#include "script_component.hpp"

private _unit = call FUNC(getSelectedPlayer);

if ([_unit] call EFUNC(main,isAlive)) exitWith {
    if !([_unit, player] call EFUNC(main,doTeleport)) then {
        hint "Something went wrong";
    };
    [] call FUNC(refreshDialog);
};

[{
    params ["_admin"];
    if !([player, _admin] call EFUNC(main,doTeleport)) then {
        hint "Something went wrong";
    };
    [] remoteExec [QFUNC(refreshDialog), _admin];
}, [player]] remoteExec [QEFUNC(main,doRespawn), _unit];

