#include "script_component.hpp"

params ["_unit"];

if (!alive _unit) exitWith { false };

if (_unit getVariable [QGVAR(isInVanillaSpectator), false]) exitWith { false };

if (getMarkerType "spectator_box" != "") exitWith { // spectator box exists and is properly marked
    _unit distance2D getMarkerPos "spectator_box" > 30 // not in the spectator box, aka alive
};

// probably alive. weird spectator box setup might break this. not a massive issue.
true
