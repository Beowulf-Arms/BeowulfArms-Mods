////////////////////////////////////////////////////////////////////
//DeRap: bso_arsenal_export\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:01 2022 : 'file' last modified on Sat Jul 18 10:31:10 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bso_arsenal_export
	{
		name = "bso - Arsenal Export";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.56;
		requiredAddons[] = {"bso_main"};
		author = "";
		authors[] = {""};
		version = "1.0.0.0";
		versionStr = "1.0.0.0";
		versionAr[] = {1,0,0,0};
	};
};
class Extended_PreStart_EventHandlers
{
	class bso_arsenal_export
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\arsenal_export\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class bso_arsenal_export
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\arsenal_export\XEH_preInit.sqf'";
	};
};
class ctrlButton;
class bso_arsenal_export_buttonExport: ctrlButton
{
	colorBackground[] = {0,0,0,0.8};
	x = "3 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25))) / 100) + 2 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25))) - 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25))) / 100)) / 5)";
	y = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
	w = "(((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25))) - 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25))) / 100)) / 5)";
	h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
	sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
	text = "BSO Export";
	tooltip = "Export current loadout in BSO format";
	onButtonClick = "[ctrlParent (_this select 0), ace_arsenal_center] call bso_arsenal_export_fnc_export";
};
