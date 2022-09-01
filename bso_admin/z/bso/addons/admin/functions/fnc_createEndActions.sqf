#include "script_component.hpp"

params ["_target", "_player", "_params"];

// Add children to this action
private _actions = [];
{
    _x params ["_title", "_end", "_isVictory"];
    private _childStatement = {
        (_this select 2) params ["_end", "_isVictory"];
        [_end, _isVictory, 4] remoteExec ["BIS_fnc_endMission"];
    };
    private _action = [_end, _title, "", _childStatement,  {serverCommandAvailable "#kick"}, {}, [_end, _isVictory]] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target]; // New action, it's children, and the action's target
} forEach GVAR(missionEnds);

_actions
