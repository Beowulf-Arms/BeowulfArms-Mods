#include "script_component.hpp"
#include "idcs.hpp"

private _disp = findDisplay IDC_BSO_ADMIN_DIALOG;
if (isNull _disp) exitWith {};

private _playerList = _disp displayCtrl IDC_BSO_ADMIN_PLAYER_LIST;
private _netId = _playerList lbData lbCurSel _playerList;
private _unit = _netId call BIS_fnc_objectFromNetId;

_unit
