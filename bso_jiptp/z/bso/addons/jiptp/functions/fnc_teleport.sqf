#include "script_component.hpp"

// For legacy frameworks. actual teleportation done by doTeleport

params ["_unit"];

private _target = [_unit] call FUNC(select);

private _success = false;

if (!isNull _target) exitWith {
    _success = [_unit, _target] call EFUNC(main,doTeleport);
};

if (!_success) then {
    hint "Something went wrong. Please ask the admin for a teleport.";
};
