params ["_leader"];

private _synced = synchronizedObjects _leader;
private _defend = _synced select {typeOf _x == "CBA_ModuleDefend"};

private _code = "";

if (count _defend == 1) then {
	private _module = _defend select 0;
	private _pos = position _module;
	private _hold = _module getVariable ["shouldhold", 0];
	private _threshold = _module getVariable ["threshold", 1];
	private _radius = _module getVariable ["defendradius", 100];
	private _patrol = _module getVariable ["canpatrol", 0];
	private _cmd = format ["[group _proxyThis, %1, %2, %3, %4, %5] call CBA_fnc_taskDefend;", _pos, _radius, _threshold, _patrol, _hold];
	//_leader synchronizeObjectsRemove [_module];
	//deleteVehicle _module;
	_code = _code + _cmd;
};

_code
