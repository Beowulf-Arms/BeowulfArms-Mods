params ["_door_code", "_memory_point", ["_offset", [0, 0, 0]], ["_side", ""]];


private _conditionSingle = {
    params ["_vehicle", "_caller", "_params"];
    if !(_caller getVariable ["dega_hooked_up", false]) exitWith { false };
    _params params ["_door_code"];
    [_vehicle, false, _door_code] call dega_fnc_canDeploy 
};

private _statementSingle ={
    params ["_vehicle", "_caller", "_params"];
    _params params ["_door_code", "_memory_point", "_offset"];
    [_vehicle, _caller, _memory_point, _offset] call dega_fnc_Deploy 
};

private _nameSingle = if (_side == "") then {
    "Jump"
} else {
    "Jump " + _side
};

private _actionSingle = ["dega_jumpSingle" + _side, _nameSingle, "", _statementSingle, _conditionSingle, {}, [_door_code, _memory_point, _offset]] call ace_interact_menu_fnc_createAction;



private _conditionMultiple = {
    params ["_vehicle", "_caller", "_params"];
    _params params ["_door_code"];
    [_vehicle, true, _door_code] call dega_fnc_canDeploy 
};

private _statementMultiple ={
    params ["_vehicle", "_caller", "_params"];
    _params params ["_door_code", "_memory_point", "_offset"];
    [_vehicle, 0.8, _memory_point, _offset] call dega_fnc_massDeploy 
};

private _nameMultiple = if (_side == "") then {
    "Deploy All"
} else {
    "Deploy All " + _side
};

private _modify = {
    params ["_target", "_player", "_params", "_actionData"];
    private _baseName = _params select 3;
    private _count = { _x getVariable ["dega_hooked_up", false] } count crew _target;
    
    private _name = format ["%1: %2 hooked up", _baseName, _count];
    
    _actionData set [1, _name];
};

private _actionMultiple = ["dega_jumpMultiple" + _side, _nameMultiple, "\z\bso\addons\main\images\logo_bso_ca.paa", _statementMultiple, _conditionMultiple, {}, [_door_code, _memory_point, _offset, _nameMultiple], "", 4, [false, false, false, false, false], _modify] call ace_interact_menu_fnc_createAction;

[_actionSingle, _actionMultiple]
