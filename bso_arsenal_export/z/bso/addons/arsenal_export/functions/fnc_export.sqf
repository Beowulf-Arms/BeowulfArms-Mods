#include "script_component.hpp"

params ["_display", "_unit"];

private _output = [];

_output pushBack ["primaryWeapon", primaryWeapon _unit];
_output pushBack ["primaryWeaponItems", (primaryWeaponItems _unit) select { _x != "" }];

_output pushBack ["handGun", handgunWeapon _unit];
_output pushBack ["handgunItems", (handgunItems _unit) select { _x != "" }];

// TODO: just mashing them together for now.
private _stuff = [uniformItems _unit + vestItems _unit] call FUNC(splitItems);
_output pushBack ["magazines", _stuff select 1];
_output pushBack ["items", _stuff select 0];
_output pushBack ["personalRadios", [_stuff select 2] call bso_arsenal_export_fnc_cleanRadios];

private _assignedStuff = assignedItems _unit - [binocular _unit, "ItemRadioAcreFlagged"];
private _nvgTypes = _assignedStuff select {getText (configFile >> "CfgWeapons" >> _x >> "simulation") == "NVGoggles"};
private _nvg = if (count _nvgTypes == 0) then {""} else {_nvgTypes select 0};
_output pushBack ["assignedItems", _assignedStuff - [_nvg]];

_output pushBack ["backpack", backpack _unit];
private _backpackStuff = [backpackItems _unit] call bso_arsenal_export_fnc_splitItems;
_output pushBack ["backpackMagazines", _backpackStuff select 1];

_output pushBack ["launcher", secondaryWeapon _unit];
_output pushBack ["launcherItems", (secondaryWeaponItems _unit) select { _x != "" }];

_output pushBack ["backpackItems", _backpackStuff select 0];
_output pushBack ["backpackRadios",[_backpackStuff select 2] call bso_arsenal_export_fnc_cleanRadios];

_output pushBack ["uniform", [uniform _unit]];
_output pushBack ["vest", [vest _unit]];
_output pushBack ["headgear", [headgear _unit]];

_output pushBack ["nvg", _nvg];
_output pushBack ["binoculars", binocular _unit];

private _t = toString [9];
private _n = toString [13];

"ace_clipboard" callExtension _t+_t + "class PutClassNameHere" + _n;
"ace_clipboard" callExtension _t+_t + "{" + _n;
"ace_clipboard" callExtension _t+_t+_t + 'name = "PutLoadoutNameHere";' + _n;

{
    _x params ["_name", "_value"];

    if (_value isEqualType "") then {
        "ace_clipboard" callExtension _t+_t+_t + format ['%1 = "%2";', _name, _value] + _n;
    } else { // should be array
        if (count _value <= 4) then {
            "ace_clipboard" callExtension _t+_t+_t + format ['%1[] = {%2};', _name, (_value apply {str _x}) joinString ", "] + _n;
        } else {
            "ace_clipboard" callExtension _t+_t+_t + format ['%1[] = {', _name] + _n;
            {
                if (_foreachIndex < count _value - 1) then
                {
                    "ace_clipboard" callExtension _t+_t+_t+_t + format ['"%1",', _x] + _n;
                } else {
                    "ace_clipboard" callExtension _t+_t+_t+_t + format ['"%1"', _x] + _n;
                };
            } forEach _value;
            "ace_clipboard" callExtension _t+_t+_t + "};" + _n;
        };
    };
} forEach _output;
"ace_clipboard" callExtension _t+_t + "};" + _n;

"ace_clipboard" callExtension "--COMPLETE--";

[_display, "Current BSO loadout exported to clipboard"] call ace_arsenal_fnc_message;
