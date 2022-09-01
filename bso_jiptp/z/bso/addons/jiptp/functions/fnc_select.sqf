#include "script_component.hpp"

params ["_unit"];

private _side = side _unit;

private _squad = [];
private _others = [];

private _units_group = units _unit;
private _available_vecs = [];
private _blocked_vecs = [];

private _blockedCount = 0;

{
    if (_side == side _x) then {
        if (_x == _unit) then {
            _squad pushBack _unit;
        };
        if (_x != _unit && [_x] call EFUNC(main,isAlive)  && {!(_x getVariable ["ACE_isUnconscious", false])}) then {
            private _block = false;
            private _vec = vehicle _x;
            if (_vec != _x) then {
                if (!(_vec in _available_vecs)) then {
                    if (_vec in _blocked_vecs) then {
                        _block = true;
                    } else {
                        private _free = (_vec emptyPositions "cargo") + (_vec emptyPositions "commander") + (_vec emptyPositions "gunner");
                        if (!(_vec isKindOf "Helicopter")) then {
                            _free = _free + (_vec emptyPositions "driver");
                        };
                        if (_free > 0) then {
                            _available_vecs pushBack _vec;
                        } else {
                            _block = true;
                            _blocked_vecs pushBack _vec;
                        };
                    };
                };
            };
        
            if (_block) then {
                _blockedCount = _blockedCount + 1;
            } else {
                if (_x in _units_group) then {
                    _squad pushBack _x;
                } else {
                    _others pushBack _x;
                };
            };
        };
    };
} foreach playableUnits;

squad = _squad;
others = _others;

private _find_ranking = {
    params ["_set"];
    private _result = objNull;
    private _min_rank = -1;
    {
        if (rankId _x > _min_rank) then {
            _result = _x;
            _min_rank = rankId _x;
        }
    } forEach _set;
    _result
};

private _return = objNull;

if (count _squad > 1) then {
    private _unit_rank = rankId _unit;
    private _index = _squad find _unit;
    private _selected = objNull;
    if (_index > 0) then {
        for [{_i=_index - 1}, {_i >= 0}, {_i = _i - 1}] do {
            private _p = _squad select _i;
            if (rankId _p > _unit_rank) exitWith {_selected = _p};
        };
    };
    if (isNull _selected) then {
        _selected = [_squad - [_unit]] call _find_ranking;
    };
    _return = _selected;
};

if (isNull _return) then {
    if (count _others > 0) then {
        _return = [_others] call _find_ranking;
    };
};

_return

