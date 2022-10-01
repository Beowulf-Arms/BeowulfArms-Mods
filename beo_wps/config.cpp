////////////////////////////////////////////////////////////////////
//DeRap: beo_wps\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Tue Dec 10 13:54:34 2019 : 'file' last modified on Sat Dec 07 19:43:50 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class beo_wps
	{
		units[] = {};
		weapons[] = {
		"beo_glock18",
		"rhs_weap_akms_folded",
		"beo_ai_akms_folded",
		//"beo_Askefor_Galil",
		//"beo_Askefor_Galil_ACOG",				
		"beo_F2000_Blk",
		"beo_F2000_GL_Blk",
		"beo_F2000C_Blk"
		
		};
		requiredAddons[] = {
		"A3_Weapons_F_EPB",
		"rhs_c_weapons",
		"rhsusf_c_weapons",
		"uk3cb_factions_weapons",
		"sp_fwa_AR10",
		"sp_fwa_AR15",
		"sp_fwa_Enfield",
		"sp_fwa_fal",
		"sp_fwa_hipower",
		"sp_fwa_mag58",
		"sp_fwa_mas",
		"sp_fwa_mat",
		"sp_fwa_no32",
		"sp_fwa_Sterling",
		"sp_fwa_bar",
		
		"beo_ai" // here due to needing some firemodes to exist before we can define their sounds...

		};
		version = "2";
		requiredVersion = "1.1";
		versionDesc = "Beowulf Weapons";
		author = "Walker";
		magazines[] = {""};
		ammo[] = {};
	};
};

class asdg_SlotInfo;
class asdg_UnderSlot: asdg_SlotInfo { // Base under barrel slot

    class compatibleItems {
        sp_fwa_bipod_ar15_clipon = 1;
        sp_fwa_bipod_m60 = 1;
    };
};

/*
class CfgMagazines
{

	class 35Rnd_556x45_Velko_lxWS;
	class beo_mag_35rnd_556_galil_tracer: 35Rnd_556x45_Velko_lxWS
	{
		displayName = "5.56 mm 35rnd Mag TRACER";
		lastRoundsTracer = 0;
		tracersEvery = 1;

	};
	class beo_mag_35rnd_556_galil_mixed: 35Rnd_556x45_Velko_lxWS
	{
		displayName = "5.56 mm 35rnd Mag MIXED";
		lastRoundsTracer = 4;
		tracersEvery = 4;

	};
	
	class 50Rnd_556x45_Velko_lxWS;
	class beo_mag_50rnd_556_galil_tracer: 50Rnd_556x45_Velko_lxWS
	{
		displayName = "5.56 mm 50rnd Mag TRACER";
		lastRoundsTracer = 0;
		tracersEvery = 1;

	};
	class beo_mag_50rnd_556_galil_mixed: 50Rnd_556x45_Velko_lxWS
	{
		displayName = "5.56 mm 50rnd Mag MIXED";
		lastRoundsTracer = 4;
		tracersEvery = 4;

	};
};
*/



class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	//CLASSNAMES REQUIRED FOR INHERITENCE
	class Rifle;
	class UnderBarrelSlot;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo{};
		class GunParticles{};
		class FullAuto;
		class Single;
		class Burst;
		class SilencedSound;
		class StandardSound;
	};
		class Rifle_Long_Base_F: Rifle_Base_F 
	{ 
		class SilencedSound; 
		class StandardSound; 
	}; 
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;

	class arifle_Mk20_F;
	class arifle_Mk20C_F;
	class arifle_Mk20_GL_F;

	//RHS WEAPONS
	class rhs_weap_pkp;
	class rhs_weap_akms;	
	class rhs_weap_saw_base;	
	class rhsusf_weap_glock17g4;

	//ATTACHMENTS
	class bipod_01_F_snd;
	class muzzle_snds_L;

	//ENABLES ACE BARREL SWAPPING
	class rhs_weap_m84: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		ace_overheating_allowSwapBarrel = 1;
	};
	class rhs_weap_lmg_minimipara: rhs_weap_saw_base
	{
		ace_overheating_allowSwapBarrel = 1;
	};

	// 6rnd grenades in m320 (because no 6 barrel launcher in pistol/launcher slot)
	class rhs_weap_M320;
	class beo_M320: rhs_weap_M320
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "M320 (BSO Special)";
		magazineWell[] += {"CBA_40mm_M203_6rnds","3UGL_40x36"};
	};

	//BSO CUSTOM WEAPONS
	
	
	class arifle_Mk20_plain_F;
	class beo_F2000_Blk: arifle_Mk20_plain_F
	{
		scope = 2;
		scopeArsenal = 2;
		generalMacro = "beo_F2000_Blk";
		hiddenSelectionsTextures[] = {"beo_wps\data\mk20_blackcamo_co.paa"};
		displayName = "F2000 (Black)";
		baseWeapon = "beo_F2000_Blk";
		
	};

	class beo_F2000_GL_Blk: arifle_Mk20_GL_F
	{
		scope = 2;
		scopeArsenal = 2;
		generalMacro = "beo_F2000_GL_Blk";
		hiddenSelectionsTextures[] = {"beo_wps\data\mk20_blackcamo_co.paa","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
		displayName = "F2000 GL (Black)";
		baseWeapon = "beo_F2000_GL_Blk";
		
	};
	
	class arifle_Mk20C_plain_F;
	class beo_F2000C_Blk: arifle_Mk20C_plain_F
	{
		scope = 2;
		scopeArsenal = 2;
		generalMacro = "beo_F2000C_Blk";
		hiddenSelectionsTextures[] = {"beo_wps\data\mk20_blackcamo_co.paa"};
		displayName = "F2000 Tactical (Black)";
		baseWeapon = "beo_F2000C_Blk";
		
	};
	
	class tacs_Mk20_Black_F: arifle_Mk20_plain_F
	{
		scope = 1; // because fuck that classname 
	};
	
	class rhs_weap_akms_folded: rhs_weap_akms
	{
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "rhs_weap_akms_folded";
		generalmacro = "rhs_weap_akms_folded";
	};
	
	class beo_ai_akms_folded: rhs_weap_akms_folded
	{
		generalmacro = "beo_ai_akms_folded";
		scopeArsenal = 2;
		scope = 2;
		baseWeapon = "beo_ai_akms_folded";
		
		displayName = "[BEO AI] AKMS (Folded)";
		modes[] += {"beo_ai_spray"};
		class beo_ai_spray
		{
			aiBurstTerminable = 1;
			aiDispersionCoefX = 3;
			aiDispersionCoefY = 30;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 1000;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 1;
			burst = 12;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.0021;
			displayName = "SPRAY";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 1000;
			maxRangeProbab = 1;
			midRange = 500;
			midRangeProbab = 1;
			minRange = 1;
			minRangeProbab = 1;
			multiplier = 1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.1;
			requiredOpticType = -1;
			showToPlayer = 0;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {"sound",1};
			soundLoop[] = {};
			sounds[] = {"StandardSound","SilencedSound"};
			textureType = "fullAuto";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
			class BaseSoundModeType{};
			class StandardSound
			{
				soundSetShot[] = {"RHS_ak47_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet","RHS_sd_MMG1_Tail_SoundSet"};
			};
		};
	};
	
	
	class beo_glock18: rhsusf_weap_glock17g4
	{
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "beo_glock18";
		displayName = "(BEO) Glock 18";
		modes[] = {"Single","FullAuto"};
		magazines[] = {"30Rnd_9x21_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","UK3CB_BAF_9_17Rnd"};
		class Single;
		class FullAuto: Single
		{
			textureType = "fullAuto";
			displayName = "Full";
			autoFire = 1;
			aiRateOfFire = 0.1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.05;
		};
	};
	

	/*
	// Adds extra mags to Galils + 5.56 ARM and 7.62 NATO varients
	class arifle_Galat_base_lxWS;
	class arifle_Galat_lxWS: arifle_Galat_base_lxWS
	{
		displayName = "(BSO) Galil ARM (7.62)";
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
		class Single;
		class FullAuto;
		class close;
		class short;
		class medium;
		class far_optic1;
		class far_optic2;
		class SilencedSound;
		class StandardSound;

	};
	class beo_galil_arm_556: arifle_Galat_lxWS
	{
		magazines[] = {"35Rnd_556x45_Velko_lxWS","beo_mag_35rnd_556_galil_tracer","beo_mag_35rnd_556_galil_mixed","50Rnd_556x45_Velko_lxWS","beo_mag_50rnd_556_galil_tracer","beo_mag_50rnd_556_galil_mixed"};
		magazineWell[] = {};
		displayName = "(BSO) Galil ARM (5.56)";
		//dlc = "";
		author = "BSO Walker";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "beo_galil_arm_556";
		generalmacro = "beo_galil_arm_556";
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
	};
	class beo_galil_arm_762: arifle_Galat_lxWS
	{
		magazines[] = {"rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
		magazineWell[] = {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
		displayName = "(BSO) Galil ARM (7.62 NATO)";
		//dlc = "";
		author = "BSO Walker";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "beo_galil_arm_762";
		generalmacro = "beo_galil_arm_762";
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet","RHS_sd_MMG1_Tail_SoundSet"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet","RHS_sd_MMG1_Tail_SoundSet"};
			};
		};		
	};

	class arifle_Velko_base_lxWS;
	class arifle_Velko_lxWS: arifle_Velko_base_lxWS
	{
		magazines[] = {"35Rnd_556x45_Velko_lxWS","beo_mag_35rnd_556_galil_tracer","beo_mag_35rnd_556_galil_mixed","50Rnd_556x45_Velko_lxWS","beo_mag_50rnd_556_galil_tracer","beo_mag_50rnd_556_galil_mixed"};
		
	};

	*/

	// M1 garand un-JSRS
	class rhs_weap_M1garand_Base_F: Rifle_Base_F
	{
		class Single;
		class StandardSound;
		class far_optic1;
		class far_optic2;

	};
	class rhs_weap_m1garand_sa43: rhs_weap_M1garand_Base_F
	{
		//modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
			};
		};

	};


	// m2 .50 cal JSRS sound
	class HMG_01;
	class HMG_M2: HMG_01
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class RHS_M2: HMG_M2
	{

		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_m2_shot_soundset",
					"jsrs_hmg_reverb_soundset"
				};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_m2_shot_soundset",
					"jsrs_hmg_reverb_soundset"
				};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_m2_shot_soundset",
					"jsrs_hmg_reverb_soundset"
				};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_m2_shot_soundset",
					"jsrs_hmg_reverb_soundset"
				};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_m2_shot_soundset",
					"jsrs_hmg_reverb_soundset"
				};
			};
		};		
	};	







	#include "mods\fwa_weap.hpp"
	#include "mods\3cb_weap.hpp"
};
