#include "script_component.hpp"

if (!(call FUNC(isAllowed))) exitWith {false};

if (isNil QGVAR(hudActive)) then { GVAR(hudActive) = false; };

GVAR(hudActive) = !GVAR(hudActive);

// TODO: implement
