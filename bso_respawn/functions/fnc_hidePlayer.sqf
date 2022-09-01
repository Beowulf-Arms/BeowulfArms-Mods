#include "script_component.hpp"

params ["_hidden"];

player setCaptive _hidden;
player allowDamage !_hidden;
player setVariable ["ace_medical_allowDamage", !_hidden];
if (_hidden) then {
    [player, QGVAR(adminHidden)] call ace_common_fnc_hideUnit;
} else {
    [player, QGVAR(adminHidden)] call ace_common_fnc_unhideUnit;
};

