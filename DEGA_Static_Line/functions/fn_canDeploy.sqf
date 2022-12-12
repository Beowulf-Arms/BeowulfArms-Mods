params ["_vehicle", "_pilot_action", "_door_code"];

private _valid_position = if (_pilot_action) then {
    player == driver _vehicle
} else {
    (_vehicle getCargoIndex player) >= 0
};

private _disabled = _vehicle getVariable ["dega_static_line_disabled", false];

!_disabled && _valid_position && ((getPosATL _vehicle) select 2 > 140) && {[_vehicle] call _door_code}
