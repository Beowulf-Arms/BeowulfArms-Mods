////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.01
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class beo_ai : config.bin{
class CfgPatches
{
	class beo_ai
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","rhs_c_weapons","rhsusf_c_weapons","rhssaf_c_weapons","rhsgref_c_weapons","uk3cb_factions_weapons"};
		version = "1.0";
		requiredVersion = "1.0";
		author = "Walker";
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class beo_ai
		{
			list[] = {"beo_ai"};
		};
	};
};

class CfgFactionClasses
{
	class BLU_F;
	class beo_ai_blu: BLU_F
	{
		displayName = "[BEO] AI Assets";
		priority = 1;
		side = 1;
	};
	class OPF_F;
	class beo_ai_opf: OPF_F
	{
		displayName = "[BEO] AI Assets";
		priority = 1;
		side = 0;
	};
	class IND_F;
	class beo_ai_ind: IND_F
	{
		displayName = "[BEO] AI Assets";
		priority = 1;
		side = 2;
	};
};

class CfgAISkill
{
	aimingAccuracy[] = {0, 0, 1, 0.7};
	aimingShake[] = {0, 0, 1, 0.7};
	aimingSpeed[] = {0, 0, 1, 0.7};
	commanding[] = {0, 0, 1, 0.7};
	courage[] = {0, 0, 1, 1};
	//endurance[] = {0, 0, 1, 1}; Has been disabled in Arma 3
	general[] = {0, 0, 1, 0.7};
	reloadSpeed[] = {0, 0, 1, 0.7};
	spotDistance[] = {0, 0, 1, 0.7};
	spotTime[] = {0, 0, 1, 0.7};
};

class cfgVehicles
{
	
	// Generic Crewman
	
	class I_crew_F;
	class beo_ai_crew: I_crew_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[BEO AI] Generic Crewman";	
		side = 1;
		faction = "beo_ai_blu";		
		uniformClass = "rhsgref_uniform_olive";
		
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		
		magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","SmokeShell","SmokeShellBlue","Chemlight_green"};
		
		linkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		
	};
	
	
	class beo_ai_crew_opf: beo_ai_crew
	{
		side = 0;
		faction = "beo_ai_opf";	
		
		uniformClass = "rhs_uniform_afghanka";
		weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShellBlue","Chemlight_green"};
		
		linkedItems[] = {"UK3CB_V_Belt_KHK","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"UK3CB_V_Belt_KHK","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	
	
	class beo_ai_crew_ind: beo_ai_crew
	{
		side = 2;
		faction = "beo_ai_ind";	
		
		uniformClass = "rhsgref_uniform_olive";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		
		magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","SmokeShell","SmokeShellBlue","Chemlight_green"};
		
		linkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};	
	
};

class Mode_SemiAuto
{
	aiRateOfFire = 1;
	aiRateOfFireDistance = 300;
	aiRateOfFireDispersion = 2;
	minRange = 0;
	minRangeProbab = 0.9;
	midRange = 150;
	midRangeProbab = 0.5;
	maxRange = 500;
	maxRangeProbab = 0.1;
	aiDispersionCoefX = 3;
	aiDispersionCoefY = 5;
};
class Mode_Burst: Mode_SemiAuto
{
	aiRateOfFire = 1;
	aiRateOfFireDistance = 100;
	aiRateOfFireDispersion = 0.5;
	minRange = 5;
	minRangeProbab = 0.8;
	midRange = 10;
	midRangeProbab = 0.7;
	maxRange = 20;
	maxRangeProbab = 0.2;
	aiDispersionCoefX = 3;
	aiDispersionCoefY = 5;
};
class Mode_FullAuto: Mode_SemiAuto
{
	aiRateOfFire = 0.1;
	aiRateOfFireDistance = 50;
	minRange = 0;
	minRangeProbab = 0.9;
	midRange = 1;
	midRangeProbab = 0.8;
	maxRange = 5;
	maxRangeProbab = 0.1;
	aiDispersionCoefX = 3;
	aiDispersionCoefY = 5;
};

class CfgWeapons
{
	class Default
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 2;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 500;
		maxRangeProbab = 0.1;
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 5;
	};
	class Binocular: Default
	{
		minRangeProbab = 0.1;
		midRangeProbab = 0.4;
		maxRangeProbab = 0.04;
	};
	class RifleCore;
	class MGunCore;
	class CannonCore;
	class MGun: MGunCore
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class LMG_RCWS: MGun
	{
		aiDispersionCoefX = 5;
		aidispersioncoefy = 3;
	};
	class LMG_M200: LMG_RCWS
	{
		aiDispersionCoefX = 5;
		aidispersioncoefy = 3;
	};	
	class HMG_127: LMG_RCWS
	{
		dispersion = 0.0055;
		aiDispersionCoefX = 5;
		aidispersioncoefy = 3;
	};	

	class HMG_01: HMG_127
	{
		dispersion = 0.0055;
		aiDispersionCoefX = 5;
		aidispersioncoefy = 3;
		class manual: manual
		{
			dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class close: manual
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class short: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class medium: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class far: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};		
	};	
	class HMG_M2: HMG_01
	{
		dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		class manual: manual
		{
			dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class close: manual
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;	
		};
		class short: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class medium: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class far: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;	
		};		
	};

	class HMG_NSVT: HMG_127
	{
		dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		class manual: manual
		{
			dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class close: manual
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class short: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;	
		};
		class medium: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class far: close
		{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};		
	};		
	class M134_minigun: MGunCore
	{
		dispersion = 0.0055;
		class LowROF: Mode_FullAuto
		{
			dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
	};
	
	
	class autocannon_Base_F: CannonCore
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		class player;
		class close: player
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class gatling_30mm_base: CannonCore
	{		
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class cannon_120mm: CannonCore
	{		
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		class player;
		class close: player
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{		
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 1;
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{		
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class cannon_125mm: CannonCore
	{		
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		class player;
		class close: player
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class cannon_105mm: CannonCore
	{		
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		class player;
		class close: player
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class GrenadeLauncher: Default
	{
		aiRateOfFire = 4;
		aiRateOfFireDistance = 50;
		aiRateOfFireDispersion = 4;
		minRange = 60;
		minRangeProbab = 0.45;
		midRange = 200;
		midRangeProbab = 0.65;
		maxRange = 400;
		maxRangeProbab = 0.01;
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 30;
	};
	class UGL_F: GrenadeLauncher
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 4;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 4;
			minRange = 60;
			minRangeProbab = 0.45;
			midRange = 200;
			midRangeProbab = 0.65;
			maxRange = 400;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};	
	class GMG_F: MGun
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class GMG_20mm;
	class Rifle: RifleCore
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	
	class LMG_Minigun: LMG_RCWS
	{
		aiDispersionCoefX = 2.5;
		aiDispersionCoefY = 2.5;
		class manual;
		class close: manual
		{
			aiDispersionCoefX = 2.5;
			aiDispersionCoefY = 2.5;
		};
		class short: close
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
		};
		class medium: close
		{
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
		};
		class far: close
		{
			aiDispersionCoefX = 1;
			aiDispersionCoefY = 1;
		};
	};
	
	
	class LauncherCore;
	class RocketPods: LauncherCore
	{
		aiDispersionCoefX = 1;
		aiDispersionCoefY = 1;
	};
	
	
	class Rifle_Base_F: Rifle
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 350;
		aiRateOfFireDispersion = 2;
		minRange = 20;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 500;
		maxRangeProbab = 0.1;
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 5;		
		class FullAuto;
		class Single;
		class Burst;
	};
	class Rifle_Short_Base_F: Rifle_Base_F{};
	class Rifle_Long_Base_F: Rifle_Base_F{};
	class HandGunBase: Rifle
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		aiRateOfFireDispersion = 1;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.05;
		maxRange = 70;
		maxRangeProbab = 0.01;
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 5;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		aiRateOfFireDispersion = 1;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.05;
		maxRange = 70;
		maxRangeProbab = 0.01;
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 5;
	};
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 50;
			midRangeProbab = 0.8;
		};
		class MiniGrenadeMuzzle: ThrowMuzzle
		{
			minRange = 15;
			minRangeProbab = 0.7;
			midRange = 50;
			midRangeProbab = 0.8;
		};
	};
	/*
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		modes[] = {"SemiAuto","FullAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		modes[] = {"SemiAuto","FullAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","AI_Single_optics1","AI_Single_optics2","AI_Single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			minRange = 1;
			minRangeProbab = 0.4;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 4;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class AI_Single_far_optics2: AI_Single_optics2
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 5;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 2500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","AI_Single_optics1","AI_Single_optics2","AI_Single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			minRange = 1;
			minRangeProbab = 0.4;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 4;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class AI_Single_far_optics2: AI_Single_optics2
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 5;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 2500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		modes[] = {"manual","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class manual: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: manual
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: manual
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","Single","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.05;
			maxRange = 70;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class hgun_P07_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.05;
			maxRange = 70;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.05;
			maxRange = 70;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.05;
			maxRange = 70;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.05;
			maxRange = 70;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class mk20_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		modes[] = {"Single","manual","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_far_optic1","AI_far_optic2"};
		class manual: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: manual
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		modes[] = {"SemiAuto","FullAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 60;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class Tavor_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst: Mode_Burst
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 60;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst: Mode_Burst
		{
			burst = 2;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 60;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 60;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_L: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_M: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_B: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_H_MG: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_H_SW: muzzle_snds_H_MG
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_acp: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_338_black: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class muzzle_snds_93mmg: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class AmmoCoef
			{
				visibleFire = 0.2;
				audibleFire = 0.2;
			};
		};
	};
	class InventoryOpticsItem_Base_F;
	class optic_NVS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
		};
	};
	class optic_tws: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
		};
	};
	class optic_tws_mg: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 1;
			minRangeProbab = 0.4;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 4;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		modes[] = {"SemiAuto","FullAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		modes[] = {"SemiAuto","FullAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"manual","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class manual: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: manual
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"manual","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class manual: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: manual
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		modes[] = {"SemiAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		modes[] = {"FullAutoFast","FullAutoSlow","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class FullAutoSlow;
		class FullAutoFast: FullAutoSlow
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: FullAutoFast
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class hgun_Pistol_01_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.05;
			maxRange = 70;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_Burst_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
		};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class Secondary: Rifle_Base_F{};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};
	class arifle_CTAR_GL_base_F: arifle_CTAR_base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_far_optic1","AI_far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};
	class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_far_optic1","AI_far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		modes[] = {"SemiAuto","FullAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 60;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	*/
	
	
	//#include "mods\rhs_ru_wps.hpp"
	//#include "mods\rhs_ru_vehc.hpp"
	//#include "mods\rhs_us_wps.hpp"
	//#include "mods\rhs_us_vehc.hpp"
	//#include "mods\rhs_gref_wps.hpp"
	//#include "mods\rhs_saf_wps.hpp"
	//#include "mods\niarms_wps.hpp"
	//#include "mods\3cb_wps.hpp"
	//#include "mods/beo_wps.hpp"
};


//};

