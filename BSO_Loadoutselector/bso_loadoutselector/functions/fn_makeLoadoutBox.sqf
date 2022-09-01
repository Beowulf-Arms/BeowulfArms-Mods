/*
		Author: Jsm

		Description:
			Adds the "Select Loadout" action to a box (or anything else for that matter)

		Paramater(s):
			0: VEHICLE - Vehicle (box etc) to apply the loadout box to
			1: STRING - Faction to use.

		Returns:
			BOOL
*/

_box = _this select 0;
_faction = _this select 1;

//_box addAction ["<t color='#6666ff'>Select Loadout</t>",format ["""%1"" call BSO_fnc_showLoadoutSelector;",_faction]];

_loadoutCheck = {

params ["_target", "_player", "_params"];

true;
};

_loadoutBoxAction = {

params ["_target", "_player", "_params"];
	_params params ["_faction"];
    [_faction] call BSO_fnc_showLoadoutSelector;
};

_LoadoutSelector = ["bso_selectLoadout", "Select Loadout", "\z\bso\addons\main\images\logo_bso_ca.paa", _loadoutBoxAction, _loadoutCheck, {},[_faction]] call ace_interact_menu_fnc_createAction;

[_box, 0, ["ACE_MainActions"], _LoadoutSelector] call ace_interact_menu_fnc_addActionToObject;
