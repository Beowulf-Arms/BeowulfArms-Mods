/*
		Author: Jsm

		Description:
			Clears a units loadout

		Paramater(s):
			0: UNIT - Unit to clear 

		Returns: 
			BOOL
*/

_unit = _this;

removeAllItems _unit;
removeHeadgear _unit;
removeAllWeapons _unit;
removeUniform _unit;
removeBackpack _unit;
removeVest _unit;

removeAllAssignedItems _unit;

true;