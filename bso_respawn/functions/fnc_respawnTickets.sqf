#include "script_component.hpp"

params [["_target", objNull, [objNull, sideUnknown]], ["_delta", 0, [0]]];

if (_target isEqualTo objNull) exitWith {
    [QFUNC(respawnTickets) + ": bad target"] call EFUNC(main,error);
};

if (typeName _target == "side" && _delta > 0) then {
    // reset notification block
    [[_target], {
        GVAR(ranOutSides) = GVAR(ranOutSides) - _this;
    }] remoteExec ["call", 2];
};

[_target, _delta] call BIS_fnc_respawnTickets
