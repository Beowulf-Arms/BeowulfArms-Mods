private _condition = {
    [_this select 0, true, {((_this select 0) animationPhase "door_2_1" > 0.8) && ((_this select 0) animationPhase "door_2_2" > 0.8)}] call dega_fnc_canDeploy
};

private _statement = {
    _this spawn {
        params ["_vehicle"];
        private _cargo = [_vehicle] call DEGA_fnc_getHookedUnits;
        for "_i" from 0 to (count _cargo - 1) do {
            private _unit = _cargo select _i;
            if (_i % 2 == 0) then {
                [_vehicle, _unit, "para_eject_1", [0,0,0]] remoteExec ["DEGA_fnc_deploy", _unit];
            } else {
                [_vehicle, _unit, "para_eject_2", [0,0,0]] remoteExec ["DEGA_fnc_deploy", _unit];
            };
            sleep 0.35;
        };
        hint "Drop complete!";
    };
};

private _action = ["jumpBoth", "Deploy All Both", "", _statement, _condition] call ace_interact_menu_fnc_createAction;

[_action]
