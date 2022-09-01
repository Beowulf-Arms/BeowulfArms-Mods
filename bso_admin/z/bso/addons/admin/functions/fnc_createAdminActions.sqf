#include "script_component.hpp"

params ["_target", "_player", "_params"];

// Add children to this action
private _actions = [];
{
    _x params ["_title", "_code", "_condition"];

    private _action = [_title, _title, "", _code,  {serverCommandAvailable "#kick" && (_this select 2 select 0)}, {}, [_condition]] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target]; // New action, it's children, and the action's target
} forEach GVAR(adminActions);

_actions
