#include "script_component.hpp"

params ["_unit", "_target", ["_canBeInVehicle", false]];

if (!_canBeInVehicle && vehicle _unit != _unit) exitWith { // unit is in a vehicle
    false
};

if (vehicle _target == _target) then { // not in a vehicle
    _unit setPosASL getPosASL _target;
    true
} else { // in a vehicle
    private _vehicle = vehicle _target;
    if ((_vehicle emptyPositions "cargo") > 0) then { // keep the plebs out the of the crew slots
        [_unit, _vehicle] remoteExec ["moveInCargo", _unit];
        true
    } else {
        _unit moveInAny _vehicle
    };
};
