/*
		Author: Jsm

		Description:
			Handles clicking the "okay" button on a box.
 
		Paramater(s):

		Returns: 
			bool
*/
_comboLoadouts = 454655;
_selectedID = (lbCurSel _comboLoadouts);
_loadouts = (BSO_LoadoutSelectorFaction) call BSO_fnc_getFactionLoadouts;
_loadoutName = configName ((_loadouts select _selectedID) select 1);
_respawn = cbChecked ((findDisplay 45465) displayCtrl 454656); 

closeDialog 1;

private _time = if (isServer) then {0} else {3};
[_time, [BSO_LoadoutSelectorFaction, _loadoutName, _respawn], {

    (_this select 0) params ["_faction", "_loadout", "_respawn"];

    [player, _faction, _loadout, _respawn] call BSO_fnc_applyLoadout;

}, {}, "Applying Loadout..."] call ace_common_fnc_progressBar;

true;
