////////////////////////////////////////////////////////////////////
//DeRap: bso_respawn\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:20 2022 : 'file' last modified on Sat Oct 31 13:25:54 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bso_respawn
	{
		name = "bso - Blank";
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
	class bso_respawn
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\respawn\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class bso_respawn
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\respawn\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class bso_respawn
	{
		init = "call compile preprocessFileLineNumbers '\z\bso\addons\respawn\XEH_postInit.sqf'";
	};
};
class CfgRespawnTemplates
{
	class BSO_Respawn_System
	{
		displayName = "BSO Advanced Respawn System";
		onPlayerKilled = "bso_respawn_fnc_playerKilled";
		onPlayerRespawn = "bso_respawn_fnc_playerRespawn";
		respawnTypes[] = {3};
		isCall = 1;
	};
};
