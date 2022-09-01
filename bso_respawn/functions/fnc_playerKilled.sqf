#include "script_component.hpp"

params ["_corpse"];

// Virtual spectators should be ignored by the template (otherwise they break) (from original ace code)
if (_corpse isKindOf "ace_spectator_virtual") exitWith {};

if (ace_spectator_isSet) exitWith {}; // (from original ace code) TODO: should be moved to preset, as ace could potentially maybe change internal things

private _hasActiveSpawnPoints = [] call FUNC(hasActivePoints);

if (!_hasActiveSpawnPoints || {!([player] call FUNC(consumeTicket))}) exitWith {
    _corpse setVariable ["BIS_fnc_showRespawnMenu_disable", true];
    [] call FUNC(setSpectator);
};

[{
    !isNil {uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlButtonSpectate"}
}, {
    private _ctrl = uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlButtonSpectate";
    _ctrl ctrlEnable true;
    _ctrl ctrlSetTooltip "";
    _ctrl ctrlRemoveAllEventHandlers "ButtonDown";
    _ctrl ctrlAddEventHandler ["ButtonDown", {_this call FUNC(spectateButton); }];
}] call CBA_fnc_waitUntilAndExecute;
// TODO: ^ can we detect menuposition stuff being loaded?

GVAR(handleRespawn) = false; // handled by MenuPosition
_corpse setVariable ["BIS_fnc_showRespawnMenu_disable", false];
true
