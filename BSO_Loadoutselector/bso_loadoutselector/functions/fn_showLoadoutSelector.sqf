/*
		Author: Jsm

		Description:
			Shows the loadout selector dialog.

		Paramater(s):
			0: STRING - Faction Name

		Returns:
			BOOL
*/

/*
For reference: 
#define IDC_BSO_LOADOUTSELECTORDIALOG_TEXT		454651
#define IDC_BSO_LOADOUTSELECTORDIALOG_BTNOK		454652
#define IDC_BSO_LOADOUTSELECTORDIALOG_BTNCANCEL		454653
#define IDC_BSO_LOADOUTSELECTORDIALOG_FRAME		454654
#define IDC_BSO_LOADOUTSELECTORDIALOG_COMBOLOADOUTS	454655
*/
_comboLoadouts = 454655;
_btnOkay = 454652;
BSO_LoadoutSelectorFaction = _this select 0;
createDialog "BSO_LoadoutSelectorDialog";
lbClear _comboLoadouts;
{
	lbAdd [_comboLoadouts,_x select 0];
} foreach (BSO_LoadoutSelectorFaction call BSO_fnc_getFactionLoadouts);
lbSetCurSel [_comboLoadouts,0];
