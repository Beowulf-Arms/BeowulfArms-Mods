#include "script_component.hpp"

params ["_allItems"];

private _magazines = [];
private _items = [];
private _radios = [];

{
    if (isClass (configFile >> "CfgMagazines" >> _x)) then {
        _magazines pushBack _x;
    } else {
        if (isClass (configFile >> "CfgWeapons" >> _x)) then {
            if (getNumber (configFile >> "CfgWeapons" >> _x >> "acre_isRadio") > 0) then {
                _radios pushBack _x;
            } else {
                _items pushBack _x;
            };
        } else {
            // uhm, that's weird. just put it as an item
            _items pushBack _x;
        };
    };
} forEach _allItems;

[_items, _magazines, _radios]
