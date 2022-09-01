/*
		Author: Jsm

		Description:
			Attempts to add an item to a units vest

		Paramater(s):
			0: UNIT - Unit to attempt to add to
			1: STRING - Item to add

		Returns:
			true on success, false on fail
*/

params ["_unit","_item"];
_return = false;

if (_item isEqualTo "") exitWith { _return };

if (_unit canAddItemToVest _item) then {
	_return = true;
	_unit addItemToVest _item;
};

_return
