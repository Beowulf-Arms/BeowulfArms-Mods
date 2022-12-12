
private _hook_up = ["dega_hook_up", "Hook up", "", {
    private _unit = _this select 1;
    _unit setVariable ["dega_hooked_up", true, true];
    _unit setVariable ["dega_hookup_time", CBA_missionTime, true];
}, {
    params ["_vehicle", "_caller"];
    !(_vehicle getVariable ["dega_static_line_disabled", false]) && ((_vehicle getCargoIndex _caller) >= 0) && !(_caller getVariable ["dega_hooked_up", false])
}] call ace_interact_menu_fnc_createAction;

private _unhook = ["dega_unhook", "Unhook", "", {
    (_this select 1) setVariable ["dega_hooked_up", false, true];
}, {
    params ["_vehicle", "_caller"];
    !(_vehicle getVariable ["dega_static_line_disabled", false]) && (_caller getVariable ["dega_hooked_up", false])
}] call ace_interact_menu_fnc_createAction;

[_hook_up, _unhook]
