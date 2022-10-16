#define _ARMA_

class CfgPatches
{
	class beo_air
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_EPB","rhs_c_weapons","rhsusf_c_weapons","rhsusf_c_airweapons","rhsgref_c_air","UK3CB_Factions_Vehicles_2S6M_Tunguska"};
		version = "1.0";
		requiredVersion = "1.0";
		versionDesc = "Beowulf Air Assets";
		author = "Walker";
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;

class CfgAmmo
{
	class ammo_Missile_mim145;
	class beo_ai_missile_mim145: ammo_Missile_mim145
	{
		cmImmunity = 0.95; //0.95
		hit = 100; //400
		indirectHit = 60; //90
		indirectHitRange = 18; //25
		missileLockMaxDistance = 10000; //16000
	};

	class ammo_Missile_BIM9X;
	class beo_ai_missile_BIM9X: ammo_Missile_BIM9X
	{
		cmImmunity = 0.85; //0.92
		hit = 80; //130
		indirectHit = 50; //90
		indirectHitRange = 8; //25
		//missileLockMaxDistance = 5000; //5000
				
	};
	
	class B_35mm_AA_Tracer_Red;
	class beo_ai_aa_35mm_red: B_35mm_AA_Tracer_Red
	{
		hit = 30; //60
		indirectHit = 12.5; //25
		indirectHitRange = 2.4; //2.4
		
	};
	
	class M_Titan_AA_long;
	class beo_ai_missile_titanLong: M_Titan_AA_long
	{
		hit = 60; //80
		indirectHit = 40; //60
		indirectHitRange = 4; //4
		cmImmunity = 0.8; //0.9
	};
	
};

class CfgMagazines
{
	class magazine_Missile_mim145_x4;
	class beo_ai_missile_mim145_mag_x4: magazine_Missile_mim145_x4
	{
		ammo = "beo_ai_missile_mim145";
		descriptionShort = "[BEO AI] Defender Surface-to-Air Missile (MIM-145)";
		displayName = "[BEO AI] Defender AA";
		displayNameShort = "[BEO AI] SAM";
	};
	
	class PylonMissile_Missile_BIM9X_x1;
	class beo_ai_missile_bim9x_pylong_x1: PylonMissile_Missile_BIM9X_x1
	{
		ammo = "beo_ai_missile_BIM9X";
		pylonWeapon = "weapon_BIM9xLauncher";
		descriptionShort = "[BEO AI] Short-range, infrared-guided, air-to-air missile with high-explosive warhead";
		displayName = "[BEO AI] BIM 9X AA x1";
		displayNameShort = "[BEO AI] AA SR";
		hardpoints[] += {"B_ASRAAM","B_MISSILE_PYLON","B_AIM9","I_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","RHS_HP_AIM9_HELI_USMC","RHS_HP_AIM9","RHS_HP_AIM120"};
	};
	
	class 680Rnd_35mm_AA_shells_Tracer_Red;
	class beo_ai_35mm_AA_red_680rnd: 680Rnd_35mm_AA_shells_Tracer_Red
	{
		ammo = "beo_ai_aa_35mm_red";
		displayNameMFDFormat = "[BEO AI] AA SHELLS";
		displayNameShort = "[BEO AI] 35mm HEI-T";
		displayName = "[BEO AI] 35 mm AA Shells";
	};
	
	class 4Rnd_Titan_long_missiles;
	class beo_ai_missile_titanLong_x4: 4Rnd_Titan_long_missiles
	{
		ammo = "beo_ai_missile_titanLong";
		displayName = "[BEO AI] Titan Missile";
		displayNameMFDFormat = "[BEO AI] MISSILE";
		displayNameShort = "[BEO AI] AA";
		descriptionShort = "[BEO AI] Medium-range, radar-guided, air-to-air missile with high-explosive warhead";
	};

};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
	class MissileLauncher;
	class weapon_mim145Launcher:MissileLauncher
	{
		class LoalDistance;
	};
	class beo_ai_launcher_mim145: weapon_mim145Launcher
	{
		aiRateOfFire = 60; //15
		aiRateOfFireDistance = 10000; //10000
		displayName = "[BEO AI] MIM-145 Defender";
		magazines[] += {"beo_ai_missile_mim145_mag_x4"};
		maxRange = 5000; //16000
		magazineReloadTime = 300; //10
		reloadTime = 60; //4
		magazineReloadSwitchPhase = 0.1; //1 - Sets when the magazine proxy switches (0.1 will be at the end of the reload)
		class LoalDistance: LoalDistance
		{
			aiRateOfFire = 60;
			aiRateOfFireDistance = 10000; //10000
			maxRange = 10000; //16000
			midRange = 3000; //3000
			displayName = "[BEO AI] MIM-145 Defender";
			reloadTime = 60; //4
			
			magazineReloadSwitchPhase = 0.1; //1 - Sets when the magazine proxy switches (0.1 will be at the end of the reload)
			
		};
		
	};
	class weapon_BIM9xLauncher;
	class beo_ai_pylon_bim9x_launcher: weapon_BIM9xLauncher
	{
		displayName = "[BEO AI] BIM 9X";
		magazines[] += {"beo_ai_missile_bim9x_pylong_x1"};
	};



	class CannonCore;
	class autocannon_35mm: CannonCore
	{
		aiDispersionCoefX = 5;
		aidispersioncoefy = 3;
		magazines[] += {"beo_ai_35mm_AA_red_680rnd"};
		
	};
	
	class missiles_titan;
	class missiles_titan_AA: missiles_titan 
	{
		magazines[] += {"beo_ai_missile_titanLong_x4"};
		class TopDown;
		class Player;
		
	};
	class beo_ai_missiles_titanAA: missiles_titan_AA
	{
		reloadTime = 30; //0.5
		magazineReloadTime = 180; //50
		magazineReloadSwitchPhase = 0.1;
		class TopDown: TopDown
		{
			reloadTime = 30; //0.5
			magazineReloadTime = 180; //50
			magazineReloadSwitchPhase = 0.1;
			
		};
		class Player: Player
		{
			reloadTime = 30; //0.5
			magazineReloadTime = 180; //50
			magazineReloadSwitchPhase = 0.1;
		};
	};
	
};


class CfgVehicles
{
  

	class SAM_System_03_base_F;
	class B_SAM_System_03_F: SAM_System_03_base_F
	{
		class Turrets;
		class MainTurret;
		class AnimationSources;
		class Missiles_revolving;
	};
	class beo_ai_sam: B_SAM_System_03_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[BEO AI] MIM-145 Defender";
		editorSubcategory = "EdSubcat_AAs";
		side = 1;
		faction = "beo_ai_blu";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_ai_missile_mim145_mag_x4","beo_ai_missile_mim145_mag_x4","beo_ai_missile_mim145_mag_x4"}; //Normally only 1. With high reload time they will "reload"
				weapons[] = {"beo_ai_launcher_mim145"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving: Missiles_revolving
			{
				weapon = "beo_ai_launcher_mim145";
			};
		};
		
	};
	
	class beo_ai_sam_opf: beo_ai_sam
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
	};	
	
	class beo_ai_sam_ind: beo_ai_sam
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
	};	
	
	
	// BluFor Radar 
	class B_Radar_System_01_F;
	class beo_ai_sam_radar: B_Radar_System_01_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[BEO AI] AN/MPQ-105 Radar";
		editorSubcategory = "EdSubcat_AAs";
		side = 1;
		faction = "beo_ai_blu";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
	};	
	class beo_ai_sam_radar_opf: beo_ai_sam_radar
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
	};	
	
	class beo_ai_sam_radar_ind: beo_ai_sam_radar
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
	};	
	
	



// OPFOR RHEA SYSTEM	
	
	class SAM_System_04_base_F;
	class O_SAM_System_04_F: SAM_System_04_base_F
	{
		class Turrets;
		class MainTurret;
		class AnimationSources;
		class Missiles_revolving;
	};
	class beo_ai_sam_rhea: O_SAM_System_04_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[BEO AI] S-750 Rhea";
		editorSubcategory = "EdSubcat_AAs";
		side = 1;
		faction = "beo_ai_blu";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		textureList[] = {"AridHex",0,"JungleHex",1};
		hiddenSelectionsTextures[] = {"A3\Static_F_Sams\SAM_System_04\Data\Sam_system_04_mat_01_ghex_CO.paa","A3\Static_F_Sams\SAM_System_04\Data\Sam_system_04_mat_02_ghex_CO.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_ai_missile_mim145_mag_x4","beo_ai_missile_mim145_mag_x4","beo_ai_missile_mim145_mag_x4"}; //Normally only 1. With high reload time they will "reload"
				weapons[] = {"beo_ai_launcher_mim145"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving: Missiles_revolving
			{
				weapon = "beo_ai_launcher_mim145";
			};
		};
		
	};
	
	class beo_ai_sam_rhea_opf: beo_ai_sam_rhea
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
	};	
	
	class beo_ai_sam_rhea_ind: beo_ai_sam_rhea
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
	};	
	
	
	// Opfor RHEA Radar
	class O_Radar_System_02_F;
	class beo_ai_sam_radar_rhea_opf: O_Radar_System_02_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[BEO AI] R-750 Cronus Radar";
		editorSubcategory = "EdSubcat_AAs";
		side = 0;
		faction = "beo_ai_opf";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		textureList[] = {"AridHex",0,"JungleHex",1};
		hiddenSelectionsTextures[] = {"A3\Static_F_Sams\Radar_System_02\Data\Radar_system_02_mat_01_ghex_CO.paa","A3\Static_F_Sams\Radar_System_02\Data\Radar_system_02_mat_02_ghex_CO.paa"};		
	};	
	
	class beo_ai_sam_radar_rhea_ind: beo_ai_sam_radar_rhea_opf
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
	};	
	
	class beo_ai_sam_radar_rhea_blu: beo_ai_sam_radar_rhea_opf
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
	};	
	
	
	
	
	//// AA SPG - NATO
	
	
	class B_APC_Tracked_01_base_F;
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	{
		class Turrets;
		class MainTurret;
		class AnimationSources;
		
		class Missiles_revolving;
		class Missiles_reloadMagazine;
	};
	class beo_ai_spaa_bardelas: B_APC_Tracked_01_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[BEO AI] Bardelas SP AA";
		editorSubcategory = "EdSubcat_AAs";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_ai_35mm_AA_red_680rnd","beo_ai_missile_titanLong_x4","beo_ai_missile_titanLong_x4","beo_ai_missile_titanLong_x4"};
				weapons[] = {"autocannon_35mm","beo_ai_missiles_titanAA"};
			};
		};	
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving: Missiles_revolving
			{
				weapon = "beo_ai_missiles_titanAA";
			};
			class Missiles_reloadMagazine: Missiles_reloadMagazine
			{
				source = "reloadMagazine";
				weapon = "beo_ai_missiles_titanAA";
			};
		};			
	};
	
	class beo_ai_spaa_bardelas_opf: beo_ai_spaa_bardelas
	{
		scope = 2;
		scopeCurator = 2;		
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};		
	};
	
	class beo_ai_spaa_bardelas_ind: beo_ai_spaa_bardelas
	{
		scope = 2;
		scopeCurator = 2;		
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};		
	};
	
	
	//// AA SPG - OPFOR
	class UK3CB_O_2S6_Tunguska_SOV;
	class UK3CB_CW_SOV_O_EARLY_2S6_Tunguska: UK3CB_O_2S6_Tunguska_SOV
	{
		class Turrets;
		class MainTurret;
		class AnimationSources;
		
		class Missiles_revolving;
		class Missiles_reloadMagazine;
	};
	class beo_ai_spaa_tunguska: UK3CB_CW_SOV_O_EARLY_2S6_Tunguska
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[BEO AI] Tunguska SP AA";
		editorSubcategory = "EdSubcat_AAs";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_ai_35mm_AA_red_680rnd","beo_ai_missile_titanLong_x4","beo_ai_missile_titanLong_x4","beo_ai_missile_titanLong_x4"};
				weapons[] = {"autocannon_35mm","beo_ai_missiles_titanAA"};
			};
		};	
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving: Missiles_revolving
			{
				weapon = "beo_ai_missiles_titanAA";
			};
			class Missiles_reloadMagazine: Missiles_reloadMagazine
			{
				source = "reloadMagazine";
				weapon = "beo_ai_missiles_titanAA";
			};
		};			
	};	
	
	class beo_ai_spaa_tunguska_opf: beo_ai_spaa_tunguska
	{
		scope = 2;
		scopeCurator = 2;		
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};		
	};
	
	class beo_ai_spaa_tunguska_ind: beo_ai_spaa_tunguska
	{
		scope = 2;
		scopeCurator = 2;		
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};		
	};




  #include "mods\uh1.hpp"

};