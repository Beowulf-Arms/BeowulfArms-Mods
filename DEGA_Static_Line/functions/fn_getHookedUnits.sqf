params ["_vehicle"];

private _units = (crew _vehicle) select { _x getVariable ["dega_hooked_up", false] }; // get valid units
_units = _units apply {[_x, _x getVariable ["dega_hookup_time", 9999999]]}; // add hook-up time
_units sort true;
_units = _units apply { _x select 0 }; // remove hook-up time

_units
