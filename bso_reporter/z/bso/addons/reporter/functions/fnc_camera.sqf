#include "script_component.hpp"

if (!(call FUNC(isAllowed))) exitWith {false};

if (missionNamespace getVariable ["BIS_RscRespawnControlsMap_shown", false]) exitWith {false};

// TODO: make a custom version of BIS_fnc_camera?
[] spawn BIS_fnc_camera;

true
