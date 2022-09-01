#include "script_component.hpp"

private _index = GVAR(activeSpawnPointsData) findIf {
    _x params ["_target"];
    if (typeName _target == "SIDE") then {
        _target isEqualTo side group player
    } else {
        (vehicleVarName _target) == (vehicleVarName player)
    }
};
_index >= 0
