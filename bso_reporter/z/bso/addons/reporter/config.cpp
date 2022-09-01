////////////////////////////////////////////////////////////////////
//DeRap: bso_reporter\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:18 2022 : 'file' last modified on Sat Jul 18 10:31:10 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bso_reporter
	{
		name = "bso - Reporter";
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
	class bso_reporter
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\reporter\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class bso_reporter
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\reporter\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class bso_reporter
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\reporter\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class bso_reporter_reporter
			{
				displayName = "BSO Reporter";
				exceptions[] = {"isNotInside","isNotSitting","isNotSwimming"};
				class bso_reporter_reporter_camera
				{
					displayName = "Activate Splendid Camera";
					condition = "call bso_reporter_fnc_isAllowed";
					statement = "call bso_reporter_fnc_camera";
					exceptions[] = {"isNotInside","isNotSitting","isNotSwimming"};
				};
			};
		};
	};
};
