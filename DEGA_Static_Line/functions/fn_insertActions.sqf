params ["_vehicle"];

private _children = switch true do {
    case (_vehicle isKindOf "UK3CB_Antonov_An2_Base"): {  [{(_this select 0) animationPhase "cabindoor" > 0.8}, "para_eject", [-2,-1,-2]] call DEGA_fnc_createInteractions };
    case (_vehicle isKindOf "RHS_An2_Base"): { [{(_this select 0) animationPhase "door" > 0.8}, "para_eject"] call DEGA_fnc_createInteractions };
    case (_vehicle isKindOf "RHS_CH_47F_base"): { [{(_this select 0) animationPhase "Ramp" > 0.8}, "para_eject"] call DEGA_fnc_createInteractions };
    case (_vehicle isKindOf "RHS_C130J_Base"): {
        private _actions = [{(_this select 0) animationPhase "door_2_1" > 0.8}, "para_eject_1", [0, 0, 0], "Left"] call DEGA_fnc_createInteractions;
        _actions = _actions + ([{(_this select 0) animationPhase "door_2_2" > 0.8}, "para_eject_2", [0, 0, 0], "Right"] call DEGA_fnc_createInteractions);
        _actions = _actions + ([] call DEGA_fnc_build_C130_interactions);
        _actions
    };
    default { [{true}, "", [0,-20,0]] call DEGA_fnc_createInteractions };
};

_children = _children + ([] call DEGA_fnc_createHookActions);

_children apply {[_x, [], _vehicle]}
