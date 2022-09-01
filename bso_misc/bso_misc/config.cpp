////////////////////////////////////////////////////////////////////
//DeRap: bso_misc\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:16 2022 : 'file' last modified on Mon Apr 12 20:12:50 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class bso_misc
	{
		units[] = {"bso_flag"};
		weapons[] = {};
		requiredAddons[] = {"A3_Characters_F_Common"};
		version = "1.0";
		requiredVersion = "1.0";
		versionDesc = "Beowulf Misc";
		author = "BSO Walker";
	};
};
class CfgEditorSubcategories
{
	class men
	{
		displayName = "Men";
	};
};
class cfgVehicles
{
	class FlagCarrier;
	class bso_flag: FlagCarrier
	{
		author = "BSO";
		_generalMacro = "bso_flag";
		scope = 2;
		displayName = "Beowulf Flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'bso_misc\data\bso_flag.jpg'";
		};
		scopeCurator = 2;
	};
};
class CfgMarkers
{
	class flag_NATO;
	class bso_flag_swe: flag_NATO
	{
		name = "Sweedish Flag";
		markerClass = "Flags";
		icon = "\bso_misc\data\se.paa";
		shadow = 1;
		scope = 2;
		color[] = {1,1,1,1};
	};
};
