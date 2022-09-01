#include "script_component.hpp"

// posible returns (strings):
// alive, injured (bleeding), unconscious, dead, respawning

params ["_unit"];

if (!alive _unit && {_unit in ([] call ace_spectator_fnc_players)}) exitWith { "dead" };
if (!alive _unit) exitWith { "respawning" };
if (_unit getVariable ["ACE_isUnconscious", false]) exitWith { "unconscious" };
if (_unit getVariable ["ace_medical_woundBleeding", 0] > 0) exitWith { "injured" }; // TODO: use better metric / divide into multiple injured states

"alive"
