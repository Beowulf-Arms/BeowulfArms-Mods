#include "script_component.hpp"

private _unit = call FUNC(getSelectedPlayer);

["ace_medical_treatment_fullHealLocal", [_unit], _unit] call CBA_fnc_targetEvent;
// TODO: make sure animation resets properly??

[] call FUNC(refreshDialog);
