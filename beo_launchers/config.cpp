#define _ARMA_

class CfgPatches
{
	class beo_launchers
	{
		units[] = {"beo_ai_spg9"};
		weapons[] = {"beo_ai_weap_rocketLauncher","beo_ai_weap_spg9","rhs_weap_rpg26","rhs_weap_rpg7","rhs_weap_smaw","rhs_weap_maaws","rhs_weap_rshg2","rhs_weap_M136","rhs_weap_m72a7","rhs_weap_rpg75","rhs_weap_m72_ASM","rhs_weap_m72e9","beo_nlaw_asm"};
		version = "1.0";
		requiredVersion = "1.0";
		requiredAddons[] = {"rhs_c_weapons","rhsusf_c_weapons","rhsgref_c_weapons","beo_ai"};
		author = "BEO Walker";
		magazines[] = {"beo_ai_70mm_19rnds","beo_ai_pg7v","beo_ai_pg9v","beo_ai_smaw","beo_ai_maaws"};
		ammo[] = {"R_PG32V_F","beo_ammo_nlaw_asm","R_PG7_F","M_SPG9_HEAT","R_MRAAWS_HEAT_F","rhs_rpg26_rocket","rhs_rpg7v2_pg7vl","rhs_rpg7v2_pg7vr","rhs_rpg7v2_tbg7v","rhs_rshg2_rocket","rhs_ammo_rpg75_rocket","rhs_ammo_M136_rocket","rhs_ammo_M136_hp_rocket","rhs_ammo_M136_hedp_rocket","rhs_ammo_m72a7_rocket","rhs_ammo_m72_asm_rocket","rhs_ammo_m72e9_rocket","rhs_rpg7v2_pg7vl_penetrator","rhs_rpg7v2_pg7vr_penetrator","rhs_rpg26_penetrator","rhs_ammo_M136_penetrator","beo_ai_spg9_pg9v_ammo","beo_ai_spg9_pg9v_penetrator","beo_ai_rpg7_pg7v_ammo","beo_ai_rpg7_pg7v_penetrator","beo_ai_smaw_ammo","beo_ai_smaw_penetrator","beo_ai_maaws_ammo","beo_ai_maaws_penetrator","beo_ai_s8","beo_ai_s8_penetrator","rhs_ammo_atgmBase_base"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class single_optics1;
class CfgCloudlets
{
	class RHS_Fired_M72A7;
	class RHS_Fired_M72_ASM: RHS_Fired_M72A7
	{
		beforeDestroyScript = "scripts\rhs_eh_m72_asm.sqf";
	};
	class RHS_Fired_M72E9: RHS_Fired_M72A7
	{
		beforeDestroyScript = "scripts\rhs_eh_m72e9.sqf";
	};
};
class RHS_Fired_M136HEAT;
class RHS_Fired_M72A7: RHS_Fired_M136HEAT
{
	class Script;
};
class RHS_Fired_M72_ASM: RHS_Fired_M72A7
{
	class Script: Script
	{
		type = "RHS_Fired_M72_ASM";
	};
};
class RHS_Fired_M72E9: RHS_Fired_M72A7
{
	class Script: Script
	{
		type = "RHS_Fired_M72E9";
	};
};
class CfgVehicles
{
	class StaticMortar;
	class rhs_SPG9_base;
	class rhsgref_ins_SPG9: rhs_SPG9_base
	{
		class Turrets;
		class MainTurret;
	};
	class beo_ai_spg9: rhsgref_ins_SPG9
	{
		scope = 2;
		displayName = "[BEO AI] SPG9";
		author = "BEO Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v","beo_ai_pg9v"};
				weapons[] = {"beo_ai_weap_spg9"};
			};
		};
	};

	class beo_ai_spg9_opf: beo_ai_spg9
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};

	class beo_ai_spg9_ind: beo_ai_spg9
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};


	class UK3CB_Hilux_Rocket;
	class UK3CB_I_G_Hilux_Rocket: UK3CB_Hilux_Rocket
	{
		class Turrets;
		class MainTurret;
	};
	class beo_ai_hilux_rocket: UK3CB_I_G_Hilux_Rocket
	{
		scopt = 2;
		displayName = "[BEO AI] Hilux (Rocket)";
		author = "BEO Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds","beo_ai_70mm_19rnds"};
				weapons[] = {"beo_ai_weap_rocketLauncher"};
			};
		};
	};

	class beo_ai_hilux_rocket_opf: beo_ai_hilux_rocket
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};

	class beo_ai_hilux_rocket_ind: beo_ai_hilux_rocket
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};




};
class cfgWeapons
{
	class Launcher_Base_F;
	class launch_NLAW_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Launch_RPG7_F: Launcher_Base_F
	{
		primary = 11;
		class Single: Mode_SemiAuto
		{
			//dispersion = 0.015;
			////aiDispersionCoefX = 1.7;
			////aiDispersionCoefy = 2.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 5;
			aiRateOfFireDistance = 450;
			maxRange = 450;
			maxRangeProbab = 0.8;
			midRange = 250;
			midRangeProbab = 0.9;
			minRange = 5;
			minRangeProbab = 0.5;
			recoil = "recoil_single_law";
			sounds[] = {"StandardSound"};
		};
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			////aiDispersionCoefX = 1.7;
			////aiDispersionCoefy = 2.2;
			aiRateOfFire = 7;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 400;
			maxRange = 600;
			maxRangeProbab = 0.85;
			midRange = 40;
			midRangeProbab = 0.85;
			minRange = 10;
			minRangeProbab = 0.3;
			recoil = "recoil_single_law";
			sounds[] = {"StandardSound"};
		};
	};
	class UK3CB_70mm_rocket_launcher;
	class beo_ai_weap_rocketLauncher: UK3CB_70mm_rocket_launcher
	{
		scope = 2;
		aiDispersionCoefX = 3;
		aiDispersionCoefy = 5;
		magazines[] += {"beo_ai_70mm_19rnds"};
	};
	class rhs_weap_SPG9;
	class beo_ai_weap_spg9: rhs_weap_SPG9
	{
		scope = 2;
		//aiDispersionCoefX = 10;
		//aiDispersionCoefy = 10;
		aiRateOfFire = 3;
		aiRateOfFireDispersion = 0;
		aiRateOfFireDistance = 450;
		magazineReloadTime = 10;
		reloadTime = 10;
		//magazines[] += {"beo_ai_pg9v"};
		maxRange = 800;
		maxRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.9;
		minRange = 50;
		minRangeProbab = 0.3;
	};
	class rhs_weap_rpg26: Launcher_Base_F
	{
		scope = 2;
		//aiDispersionCoefX = 1;
		//aiDispersionCoefy = 0.5;
	};
	class rhs_weap_rpg7: Launcher_Base_F
	{
		scope = 2;
		//aiDispersionCoefX = 5;
		//aiDispersionCoefy = 5;
		//magazines[] += {"beo_ai_pg7v","RPG7_Cluster_F"};
		aiRateOfFireDispersion = 5;
		aiRateOfFireDistance = 500;
		maxRange = 900;
		maxRangeProbab = 0.8;
		midRange = 500;
		midRangeProbab = 0.9;
		minRange = 10;
		minRangeProbab = 0.9;
		class Single: Mode_SemiAuto
		{
			//aiDispersionCoefX = 5;
			//aiDispersionCoefy = 5;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 5;
			aiRateOfFireDistance = 500;
			maxRange = 900;
			maxRangeProbab = 0.8;
			midRange = 500;
			midRangeProbab = 0.9;
			minRange = 10;
			minRangeProbab = 0.9;
		};
		class single_optics1: Single
		{
			//aiDispersionCoefX = 5;
			//aiDispersionCoefy = 5;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 5;
			aiRateOfFireDistance = 500;
			maxRange = 900;
			maxRangeProbab = 0.8;
			midRange = 500;
			midRangeProbab = 0.9;
			minRange = 10;
			minRangeProbab = 0.9;
		};
		class single_optics2: single_optics1
		{
			//aiDispersionCoefX = 5;
			//aiDispersionCoefy = 10;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 900;
			maxRange = 900;
			maxRangeProbab = 1;
			midRange = 100;
			midRangeProbab = 1;
			minRange = 10;
			minRangeProbab = 1;
		};
	};
	class rhs_weap_smaw: Launcher_Base_F
	{
		scope = 2;
		//magazines[] += {"beo_ai_smaw"};
		//aiDispersionCoefX = 5;
		//aiDispersionCoefy = 5;
		aiRateOfFire = 3;
		aiRateOfFireDispersion = 5;
		aiRateOfFireDistance = 400;
		maxRange = 800;
		maxRangeProbab = 0.8;
		midRange = 500;
		midRangeProbab = 0.9;
		minRange = 10;
		minRangeProbab = 0.9;
		class Single: Mode_SemiAuto
		{
			//aiDispersionCoefX = 5;
			//aiDispersionCoefy = 5;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 5;
			aiRateOfFireDistance = 400;
			maxRange = 800;
			maxRangeProbab = 0.8;
			midRange = 500;
			midRangeProbab = 0.9;
			minRange = 10;
			minRangeProbab = 0.9;
		};
	};
	class rhs_weap_maaws: Launcher_Base_F
	{
		scope = 2;
		//magazines[] += {"beo_ai_maaws"};
		//aiDispersionCoefX = 3;
		//aiDispersionCoefy = 3;
		aiRateOfFire = 3;
		aiRateOfFireDispersion = 5;
		aiRateOfFireDistance = 400;
		maxRange = 1000;
		maxRangeProbab = 0.8;
		midRange = 600;
		midRangeProbab = 0.9;
		minRange = 10;
		minRangeProbab = 0.9;
		class Single: Mode_SemiAuto
		{
			//aiDispersionCoefX = 5;
			//aiDispersionCoefy = 5;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 5;
			aiRateOfFireDistance = 400;
			maxRange = 1000;
			maxRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.9;
			minRange = 10;
			minRangeProbab = 0.9;
		};
	};
	class rhs_weap_rshg2: rhs_weap_rpg26
	{
		scope = 2;
		//aiDispersionCoefX = 1;
		//aiDispersionCoefy = 0.5;
		aiRateOfFire = 10;
		aiRateOfFireDispersion = 0;
		aiRateOfFireDistance = 350;
		maxRange = 350;
		maxRangeProbab = 1;
		midRange = 100;
		midRangeProbab = 1;
		minRange = 10;
		minRangeProbab = 1;
	};
	class rhs_weap_M136: Launcher_Base_F
	{
		scope = 2;
		//aiDispersionCoefX = 1;
		//aiDispersionCoefy = 0.5;
		aiRateOfFire = 10;
		aiRateOfFireDispersion = 0;
		aiRateOfFireDistance = 350;
		maxRange = 350;
		maxRangeProbab = 1;
		midRange = 100;
		midRangeProbab = 1;
		minRange = 10;
		minRangeProbab = 1;
	};
	class rhs_weap_m72a7: rhs_weap_M136
	{
		scope = 2;
		//aiDispersionCoefX = 1;
		//aiDispersionCoefy = 0.5;
		aiRateOfFire = 10;
		aiRateOfFireDispersion = 0;
		aiRateOfFireDistance = 350;
		maxRange = 350;
		maxRangeProbab = 1;
		midRange = 100;
		midRangeProbab = 1;
		minRange = 10;
		minRangeProbab = 1;
	};
	class rhs_weap_rpg75: Launcher_Base_F
	{
		scope = 2;
		//aiDispersionCoefX = 1;
		//aiDispersionCoefy = 0.5;
		aiRateOfFire = 10;
		aiRateOfFireDispersion = 0;
		aiRateOfFireDistance = 350;
		maxRange = 350;
		maxRangeProbab = 1;
		midRange = 100;
		midRangeProbab = 1;
		minRange = 10;
		minRangeProbab = 1;
	};
	class rhs_weap_m72_ASM: rhs_weap_m72a7
	{
		scope = 2;
		displayName = "M72 ASM (HE-FRAG)";
		descriptionShort = "Rocket launcher<br/>Caliber: 66mm<br/>Type: Single-shot Anti-Sturcture Munition HE-Frag";
		magazines[] = {"rhs_m72_asm_mag"};
		class Library
		{
			libTextDesc = "M72ASM LAW is a portable one-shot 66 mm unguided anti-structure HE-Frag rocket";
		};
		class ItemInfo
		{
			priority = 3;
			RMBhint = "M72 ASM";
			onHoverText = "M72 ASM";
		};
	};
	class rhs_weap_m72a7_used;
	class rhs_weap_m72_ASM_used: rhs_weap_m72a7_used
	{
		scope = 1;
		displayname = "M72 ASM (used)";
	};
	class rhs_weap_m72e9: rhs_weap_m72a7
	{
		scope = 2;
		displayName = "M72E9 (IAAC)";
		descriptionShort = "Rocket launcher<br/>Caliber: 66mm<br/>Type: Single-shot rocket with Improved Anti-Armour Capability";
		magazines[] = {"rhs_m72e9_mag"};
		class Library
		{
			libTextDesc = "M72E9 LAW is a portable one-shot 66 mm unguided rocket with Improved Anti-Armour Capability";
		};
		class ItemInfo
		{
			priority = 3;
			RMBhint = "M72 ASM";
			onHoverText = "M72 ASM";
		};
	};
	class rhs_weap_m72e9_used: rhs_weap_m72a7_used
	{
		scope = 1;
		displayname = "M72E9 (used)";
	};
	class rhs_weap_panzerfaust60: Launcher_Base_F
	{
		class WeaponSlotsInfo
		{
			mass = 138;
		};
	};

/*
	class beo_nlaw_asm: launch_NLAW_F
	{
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "beo_nlaw_asm";
		displayName = "NLAW - ASM";
		magazines[] = {"CBA_FakeLauncherMagazine"};
		magazineReloadTime = 0.1;
		reloadMagazineSound[] = {"",1,1};
		modes[] = {"Single"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 180;
		};
		class ace_missileguidance
		{
			attackProfiles[] = {"ace_nlaw_directAttack","ace_nlaw_overflyTopAttack"};
			canVanillaLock = 0;
			defaultAttackProfile = "ace_nlaw_directAttack";
			defaultSeekerLockMode = "LOBL";
			defaultSeekerType = "";
			enabled = 1;
			incDeflection = 0.0005;
			maxDeflection = 0.01;
			minDeflection = 0.0005;
			onFired = "ace_nlaw_fnc_onFired";
			seekerAccuracy = 1;
			seekerAngle = 45;
			seekerLockModes[] = {"LOBL"};
			seekerMaxRange = 10;
			seekerMinRange = 0;
			seekerTypes[] = {""};
			seekLastTargetPos = 0;
			showHintOnCycle = 1;
			useModeForAttackProfile = 1;
		};
	};
	class ACE_launch_NLAW_ASM_ready_F: beo_nlaw_asm
	{
		scope = 1;
		scopeArsenal = 1;
		baseWeapon = "beo_nlaw_asm";
		magazines[] = {"beo_mag_nlaw_asm"};
		class EventHandlers
		{
			fired = "_this call CBA_fnc_firedDisposable";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class ACE_launch_NLAW_ASM_used_F: beo_nlaw_asm
	{
		scope = 1;
		scopeArsenal = 1;
		baseWeapon = "ACE_launch_NLAW_ASM_used_F";
		weaponPoolAvailable = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
*/	
};
/*
class CBA_DisposableLaunchers
{
	ACE_launch_NLAW_ASM_ready_F[] = {"beo_nlaw_asm","ACE_launch_NLAW_ASM_used_F"};
};
*/	
class cfgMagazines
{

	/*
	class NLAW_F;
	class beo_mag_nlaw_asm: NLAW_F
	{
		scope = 1;
		allowedSlots[] = {};
		ammo = "beo_ammo_nlaw_asm";
	};
	class rhs_rpg7_OG7V_mag;
	class beo_ai_pg7v: rhs_rpg7_OG7V_mag
	{
		scope = 2;
		cost = 1;
		descriptionShort = "BSO AI CINEMATIC AMMO<br />Type: 40mm HE-Fragmentation Rocket<br />Rounds: 1<br />Used in: RPG-7";
		displayName = "[BEO AI] PG7V";
		displayNameShort = "[BEO] PG7V";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7v_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7v";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7V_mag_ca.paa";
		allowedSlots[] = {801,701,901};
		author = "BEO Walker";
		ammo = "beo_ai_rpg7_pg7v_ammo";
	};

	*/	
	class 70mm_19rnds;
	class beo_ai_70mm_19rnds: 70mm_19rnds
	{
		scope = 2;
		cost = 1;
		ammo = "beo_ai_s8";
		displayName = "[BEO AI] 70mm Rocket Launcher 19rnds";
	};
	class rhs_mag_PG9V;
	class beo_ai_pg9v: rhs_mag_PG9V
	{
		scope = 2;
		cost = 1;
		descriptionShort = "BEO AI CINEMATIC AMMO<br />Type: 73mm HE-Fragmentation Rocket<br />Rounds: 1<br />Used in: SPG-9";
		displayName = "[BEO AI] PG9V";
		displayNameShort = "[BEO] PG9V";
		ammo = "beo_ai_spg9_pg9v_ammo";
	};
	/*
	class rhs_mag_smaw_HEDP;
	class beo_ai_smaw: rhs_mag_smaw_HEDP
	{
		scope = 2;
		descriptionShort = "BSO AI CINEMATIC AMMO<br />Type: 83mm Rocket<br />Rounds: 1<br />Used in: SMAW";
		displayName = "[BEO AI] Mk.4 Mod 0 HEDP";
		displayNameShort = "[BEO] Mk.4 HEDP";
		author = "BEO Walker";
		ammo = "beo_ai_smaw_ammo";
	};
	class rhs_mag_maaws_HEAT;
	class beo_ai_maaws: rhs_mag_maaws_HEAT
	{
		scope = 2;
		descriptionShort = "BSO AI CINEMATIC AMMO<br />Type: 84mm Recoilless Rifle Shell<br />Rounds: 1<br />Used in: M3 MAAWS";
		displayName = "[BEO AI] FFV751 HEAT";
		displayNameShort = "[BEO] HEAT";
		author = "BEO Walker";
		ammo = "beo_ai_maaws_ammo";
	};
	
	*/
	class rhs_m136_hedp_mag;
	class rhs_m72_asm_mag: rhs_m136_hedp_mag
	{
		displayName = "M72 ASM";
		ammo = "rhs_ammo_m72_asm_rocket";
	};
	class rhs_m72e9_mag: rhs_m136_hedp_mag
	{
		displayName = "M72 IAAC";
		ammo = "rhs_ammo_m72e9_rocket";
	};
};
class cfgAmmo
{
	class RocketBase;
	class MissileBase;
	class R_PG32V_F: RocketBase
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 40;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	/*
	class ACE_NLAW;
	class beo_ammo_nlaw_asm: ACE_NLAW
	{
		hit = 180;
		indirectHit = 60;
		indirectHitRange = 10;
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionAutoleveling = 1;
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionConeType[] = {"randomupcone",15};
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionInitSpeed = 200;
		submunitionParentSpeedCoef = 0;
		warheadName = "HE";
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "RHS_FAE_Explosion";
		explosionType = "explosive";
		explosive = 1;
	};
	*/
	class R_PG7_F: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 40;
		effectsMissile = "missile3";
	};
	class M_SPG9_HEAT: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128 + 512";
		allowAgainstInfantry = 1;
	};
	class R_MRAAWS_HEAT_F: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128 + 512";
		allowAgainstInfantry = 1;
		cost = 40;
	};
	class rhs_rpg26_rocket: R_PG32V_F
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_rpg7v2_pg7vr: rhs_rpg7v2_pg7vl
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_ammo_rpg75_rocket: R_PG32V_F
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_ammo_M136_rocket: RocketBase
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_ammo_M136_hp_rocket: rhs_ammo_M136_rocket
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_rocket
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_ammo_m72_asm_rocket: rhs_ammo_m72a7_rocket
	{
		ais_ce_penetrators[] = {"rhs_ammo_M136_hedp_penetrator"};
		hit = 120;
		indirectHit = 31;
	};
	class rhs_ammo_m72e9_rocket: rhs_ammo_m72a7_rocket
	{
		ais_ce_penetrators[] = {"rhs_ammo_M136_hp_penetrator"};
		hit = 200;
		indirectHit = 10;
	};
	class rhs_ammo_3bk12_penetrator;
	class rhs_rpg7v2_pg7vl_penetrator: rhs_ammo_3bk12_penetrator
	{
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_rpg7v2_pg7vr_penetrator: rhs_ammo_3bk12_penetrator
	{
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 2;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhs_rpg26_penetrator: rhs_ammo_3bk12_penetrator
	{
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class rhsusf_ammo_basic_penetrator;
	class rhs_ammo_M136_penetrator: rhsusf_ammo_basic_penetrator
	{
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	
	class rhs_ammo_pg9v;
	class beo_ai_spg9_pg9v_ammo: rhs_ammo_pg9v
	{
		ace_frag_charge = 100;
		ace_frag_classes[] = {"ACE_frag_small"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 100;
		ace_frag_skip = 0;
		ace_rearm_caliber = 70;
		cost = 5;
		scope = 2;
		airLock = 0;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 512";
		hit = 70;
		indirectHit = 3;
		indirectHitRange = 10;
		submunitionAmmo = "beo_ai_spg9_pg9v_penetrator";
		whistleDist = 30;
	};
	class rhs_ammo_pg9v_penetrator;
	class beo_ai_spg9_pg9v_penetrator: rhs_ammo_pg9v_penetrator
	{
		cost = 0.1;
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 80;
	};
	/*
	class rhs_rpg7v2_pg7v;
	class beo_ai_rpg7_pg7v_ammo: rhs_rpg7v2_pg7v
	{
		ace_frag_charge = 100;
		ace_frag_classes[] = {"ACE_frag_small"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 100;
		ace_frag_skip = 0;
		ace_rearm_caliber = 70;
		whistleDist = 30;
		cost = 0.1;
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 80;
		indirectHit = 2;
		indirectHitRange = 10;
		submunitionAmmo = "beo_ai_rpg7_pg7v_penetrator";
	};
	class rhs_rpg7v2_pg7v_penetrator;
	class beo_ai_rpg7_pg7v_penetrator: rhs_rpg7v2_pg7v_penetrator
	{
		cost = 0.1;
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 90;
	};
	class rhs_ammo_smaw_HEDP;
	class beo_ai_smaw_ammo: rhs_ammo_smaw_HEDP
	{
		ace_frag_charge = 100;
		ace_frag_classes[] = {"ACE_frag_small"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 100;
		ace_frag_skip = 0;
		ace_rearm_caliber = 70;
		whistleDist = 30;
		cost = 0.1;
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 80;
		indirectHit = 3;
		indirectHitRange = 10;
		submunitionAmmo = "beo_ai_smaw_penetrator";
	};
	class rhs_ammo_smaw_HEDP_penetrator;
	class beo_ai_smaw_penetrator: rhs_ammo_smaw_HEDP_penetrator
	{
		cost = 0.1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 100;
	};
	class rhs_ammo_maaws_HEAT;
	class beo_ai_maaws_ammo: rhs_ammo_maaws_HEAT
	{
		ace_frag_charge = 100;
		ace_frag_classes[] = {"ACE_frag_small"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 100;
		ace_frag_skip = 0;
		ace_rearm_caliber = 70;
		whistleDist = 30;
		cost = 0.1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 80;
		indirectHit = 2;
		indirectHitRange = 10;
		submunitionAmmo = "beo_ai_maaws_penetrator";
	};
	class rhs_ammo_maaws_HEAT_penetrator;
	class beo_ai_maaws_penetrator: rhs_ammo_maaws_HEAT_penetrator
	{
		cost = 0.1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 100;
	};
	*/
	class rhs_ammo_s8;
	class beo_ai_s8: rhs_ammo_s8
	{
		ace_frag_charge = 100;
		ace_frag_classes[] = {"ACE_frag_small"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 100;
		ace_frag_skip = 0;
		ace_rearm_caliber = 70;
		scope = 2;
		whistleDist = 30;
		submunitionAmmo = "beo_ai_s8_penetrator";
		airLock = 0;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 512";
		hit = 25;
		indirectHit = 2;
		indirectHitRange = 10;
		cost = 0.1;
	};
	class rhs_ammo_s8_penetrator;
	class beo_ai_s8_penetrator: rhs_ammo_s8_penetrator
	{
		scope = 2;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		hit = 25;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 0.1;
	};
	class M_Titan_AT;
	class rhs_ammo_atgmBase_base: M_Titan_AT
	{
		airLock = 0;
	};
};
