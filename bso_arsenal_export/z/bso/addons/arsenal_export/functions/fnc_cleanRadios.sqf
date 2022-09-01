#include "script_component.hpp"

params ["_radios"];

// TODO: use acre functions

private _result = [];

{
    if (getNumber (configFile >> "CfgWeapons" >> _x >> "acre_isUnique") > 0) then
    {
        _result pushBack (getText (configFile >> "CfgWeapons" >> _x >> "acre_baseClass"));
    } else {
        _result pushBack _x;
    };
} forEach _radios;

_result
