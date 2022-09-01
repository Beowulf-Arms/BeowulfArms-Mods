#include "script_component.hpp"
#include "idcs.hpp"

// TODO: add ability to restore list selection

private _disp = findDisplay IDC_BSO_ADMIN_DIALOG;
if (isNull _disp) exitWith {};

private _playerList = _disp displayCtrl IDC_BSO_ADMIN_PLAYER_LIST;
lbClear _playerList;
{
    private _i = _playerList lbAdd name _x;
    _playerList lbSetData [_i, _x call BIS_fnc_netId];
    private _state = [_x] call FUNC(getPlayerStatus);
    private _color = switch (_state) do {
        case "alive": { [1, 1, 1, 1] };
        case "injured": { [1, 1, 0, 1] };
        case "unconscious": { [0, 0, 1, 1] };
        case "dead": { [0.38, 0.38, 0.38, 1] };
        case "respawning": { [0.38, 0.38, 0.38, 1] };
        default { [0.8, 0.8, 0.8, 1] };
    };
    _playerList lbSetColor [_i, _color];
} foreach allPlayers;

lbSort _playerList;

_playerList lbSetCurSel 0;
