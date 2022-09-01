#include "script_component.hpp"

private _unit = call FUNC(getSelectedPlayer);

if ([_unit] call EFUNC(main,isAlive)) exitWith {
    [_unit] call EFUNC(jiptp,teleport);
    [] call FUNC(refreshDialog);
};

[{
    [player] call EFUNC(jiptp,teleport);
    [] remoteExec [QFUNC(refreshDialog), _this select 0];
}, [player]] remoteExec [QEFUNC(main,doRespawn), _unit];

