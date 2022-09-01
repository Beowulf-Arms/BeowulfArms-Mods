#include "script_component.hpp"
#include "idcs.hpp"

private _disp = findDisplay IDC_BSO_ADMIN_DIALOG;
if (isNull _disp) exitWith {};

private _unit = call FUNC(getSelectedPlayer);
private _state = [_unit] call FUNC(getPlayerStatus);

private _statusText = switch (_state) do {
    case "alive": { "<t color='#ffffff'>Alive</t>" };
    case "injured": { "<t color='#ffff00'>Injured</t>" };
    case "unconscious": { "<t color='#0000ff'>Unconscious</t>" };
    case "dead": { "<t color='#606060'>Dead</t>" };
    case "respawning": { "<t color='#606060'>Respawning</t>" };
    default { "Unknown" };
};

private _isInVehicle = vehicle _unit != _unit;
if (_state == "dead" || _state == "respawning") then { _isInVehicle = false; };
private _vehicleText = ["", " in vehicle"] select _isInVehicle;;

_statusText = format ["%1: %2%3", name _unit, _statusText, _vehicleText];

(_disp displayCtrl IDC_BSO_ADMIN_TXT_STATUS) ctrlSetStructuredText parseText _statusText;

// TODO: use localization for easier text editing


switch (_state) do {
    case "dead": {
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP_TO) ctrlEnable false;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_HEAL) ctrlEnable false;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP) ctrlEnable true;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_JIP) ctrlEnable true;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP) ctrlSetText "Respawn and teleport here";
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_JIP) ctrlSetText "Respawn and teleport to leader";
    };
    case "respawning": {
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP_TO) ctrlEnable false;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_HEAL) ctrlEnable false;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP) ctrlEnable false;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_JIP) ctrlEnable false;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP) ctrlSetText "Teleport here";
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_JIP) ctrlSetText "Teleport to leader";
    };
    default {
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP_TO) ctrlEnable true;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_HEAL) ctrlEnable true;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP) ctrlEnable true;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_JIP) ctrlEnable true;
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP) ctrlSetText "Teleport here";
        (_disp displayCtrl IDC_BSO_ADMIN_BTN_JIP) ctrlSetText "Teleport to leader";
    };
};

if (_isinVehicle) then {
    (_disp displayCtrl IDC_BSO_ADMIN_BTN_TP) ctrlEnable false;
    (_disp displayCtrl IDC_BSO_ADMIN_BTN_JIP) ctrlEnable false;
};
