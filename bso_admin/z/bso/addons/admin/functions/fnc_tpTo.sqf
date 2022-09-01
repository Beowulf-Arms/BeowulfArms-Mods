#include "script_component.hpp"

private _unit = call FUNC(getSelectedPlayer);

if !([_unit] call EFUNC(main,isAlive)) exitWith {};

if !([player, _unit, true] call EFUNC(main,doTeleport)) then {
    hint "Something went wrong";
};
