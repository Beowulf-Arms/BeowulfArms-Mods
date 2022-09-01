////////////////////////////////////////////////////////////////////
//DeRap: bso_jiptp\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:07 2022 : 'file' last modified on Sat Jul 18 10:31:10 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bso_jiptp
	{
		name = "bso - JipTp";
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
	class bso_jiptp
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\jiptp\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class bso_jiptp
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\jiptp\XEH_preInit.sqf'";
	};
};
