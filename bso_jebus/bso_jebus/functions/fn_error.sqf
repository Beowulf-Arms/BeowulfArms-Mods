params ["_text", "_module"];

private _text = format ["Jebus Module Error: %1", _text];
if (hasInterface) then {

	bso_jebus_markerid = missionNamespace getVariable ["bso_jebus_markerid", 0];
	private _markerid = bso_jebus_markerid;
	bso_jebus_markerid = bso_jebus_markerid + 1;

	private _marker = createMarker [format ["bso_jb_marker_%1", _markerid], position _module];
	_marker setMarkerShape "ICON";
	_marker setMarkerType "hd_dot";
	_marker setMarkerText _text;

	[_text] spawn {
		waitUntil {time > 3};
		systemChat _text;
	};
};
diag_log _text;
