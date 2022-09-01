////////////////////////////////////////////////////////////////////
//DeRap: bso_main\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:14 2022 : 'file' last modified on Sat Jul 18 10:31:10 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bso_main
	{
		name = "bso - main";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.56;
		requiredAddons[] = {"ace_common"};
		author = "";
		authors[] = {"ACE Team","Glowbal"};
		authorUrl = "http://ace3mod.com";
		version = "1.0.0.0";
		versionStr = "1.0.0.0";
		versionAr[] = {1,0,0,0};
	};
};
class Extended_PreStart_EventHandlers
{
	class bso_main
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\main\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class bso_main
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\main\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class bso_main
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\main\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayEGSpectator
	{
		bso_main = "_this call bso_main_fnc_spectatorEGDisplayLoad";
	};
};
class Extended_DisplayUnload_EventHandlers
{
	class RscDisplayEGSpectator
	{
		bso_main = "_this call bso_main_fnc_spectatorEGDisplayUnload";
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class BSO: NO_CATEGORY
	{
		displayName = "BSO";
		priority = 2;
		side = 7;
	};
};
class CfgVehicleClasses
{
	class BSO_Vehicles
	{
		displayName = "BSO Vehicles";
	};
};
