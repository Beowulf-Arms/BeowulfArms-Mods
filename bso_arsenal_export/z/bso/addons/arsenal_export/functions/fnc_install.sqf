#include "script_component.hpp"
#include "\z\bso\addons\arsenal_export\ui\defines.hpp"

if (!is3DEN) exitWith {};

params ["_display"];

private _group = _display displayCtrl 10;
_group ctrlSetPositionY (safezoneH + safezoneY - 18 * GRID_H);
_group ctrlSetPositionH ((2 + 2 * 7) * GRID_H);
_group ctrlCommit 0;
private _ctrl = _display ctrlCreate [QGVAR(buttonExport), -1, _group];

private _msgCtrl = _display displayCtrl 9;
_msgCtrl ctrlSetPositionY (safeZoneH + safezoneY - 34 * GRID_H);
_msgCtrl ctrlCommit 0;
