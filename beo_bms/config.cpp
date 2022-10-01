#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class beo_bms
	{
		units[] = {"beo_bms_launcher_static","beo_bms_launcher_static_opf","beo_bms_launcher_static_ind","beo_bms_launcher_static_mk2","beo_bms_launcher_static_mk2_opf","beo_bms_launcher_static_mk2_ind","beo_bms_launcher_static_mk3","beo_bms_launcher_static_mk3_opf","beo_bms_launcher_static_mk3_ind","beo_bms_launcher_static_AT","beo_bms_launcher_static_AT_opf","beo_bms_launcher_static_AT_ind","beo_bms_launcher_static_AT_mk2","beo_bms_launcher_static_AT_mk2_opf","beo_bms_launcher_static_AT_mk2_ind","beo_bms_launcher_static_AT_mk3","beo_bms_launcher_static_AT_mk3_opf","beo_bms_launcher_static_AT_mk3_ind","beo_bms_launcher_static_AP","beo_bms_launcher_static_AP_opf","beo_bms_launcher_static_AP_ind","beo_bms_launcher_static_AP_mk2","beo_bms_launcher_static_AP_mk2_opf","beo_bms_launcher_static_AP_mk2_ind","beo_bms_launcher_static_AP_mk3","beo_bms_launcher_static_AP_mk3_opf","beo_bms_launcher_static_AP_mk3_ind"};
		weapons[] = {"beo_bms_launcher"};
		requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F_Common","A3_Characters_F_Heads","A3_Static_F_Exp_AA_01","uk3cb_factions_vehicles_hilux"};
		version = "1.0";
		requiredVersion = "1.0";
		versionDesc = "Beowulf Missile Systems";
		author = "Walker";
		magazines[] = {"beo_bms_mag_aa","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk3","beo_bms_mag_aa_nyan","beo_bms_mag_at","beo_bms_mag_at_mk2","beo_bms_mag_at_mk3","beo_bms_mag_ap","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk3"};
		ammo[] = {"M_Titan_AA","beo_bms_ammo_aa","beo_bms_ammo_aa_mk2","beo_bms_ammo_aa_mk3","beo_bms_ammo_aa_nyan","ACE_Javelin_FGM148","beo_bms_ammo_at","beo_bms_ammo_at_mk2","beo_bms_ammo_at_mk3","beo_bms_sub_at","beo_bms_sub_at_mk2","beo_bms_sub_at_mk3","beo_bms_ammo_ap","beo_bms_ammo_ap_mk2","beo_bms_ammo_ap_mk3"};
	};
};
class beo_bms_missile5_black
{
	class Light1
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "light";
		type = "RocketLight";
	};
	class beo_bms_missile5_black
	{
		simulation = "particles";
		type = "beo_bms_missile5_black";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class beo_bms_missile5_nyan
{
	class Light1
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "light";
		type = "RocketLight";
	};
	class beo_bms_missile5_nyan
	{
		simulation = "particles";
		type = "beo_bms_missile5_nyan";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class cfgCloudlets
{
	class Missile5;
	class beo_bms_missile5_black: Missile5
	{
		color[] = {{0.01,0.01,0.01,0.8},{0.05,0.05,0.05,0.4},{0.1,0.1,0.1,0}};
		colorVar[] = {0,0,0,0};
	};
	class beo_bms_missile5_nyan: Missile5
	{
		color[] = {{0.8,0.1,0.8,0.8},{0.1,0.1,0.8,0.4},{0.1,0.8,0.1,0}};
		colorVar[] = {0,0,0,0};
	};
};
class cfgAmmo
{
	class MissileBase;
	class M_Titan_AA: MissileBase
	{
		class Components;
	};
	class beo_bms_ammo_aa: M_Titan_AA
	{
		hit = 50;
		indirectHit = 30;
		initTime = 0.6;
		cost = 1000;
		airLock = 2;
		airFriction = 0.145;
		cmImmunity = 0.6;
		fuseDistance = 50;
		irLock = 1;
		maneuvrability = 7;
		timeToLive = 10;
		thrust = 150;
		thrustTime = 7;
		maxSpeed = 400;
		trackLead = 0.5;
		trackOversteer = 0.7;
		weaponLockSystem = "2 + 16";
		whistleDist = 100;
		whistleOnFire = 0;
		effectsMissile = "beo_bms_missile5_black";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = 0.2;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = 50;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 250;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 2000;
						class AirTarget
						{
							minRange = 200;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 200;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class beo_bms_ammo_aa_mk2: beo_bms_ammo_aa
	{
		hit = 60;
		indirectHit = 40;
		cost = 1000;
		airLock = 2;
		airFriction = 0.145;
		cmImmunity = 0.7;
		fuseDistance = 50;
		irLock = 1;
		maneuvrability = 10;
		maxSpeed = 500;
		timeToLive = 10;
		thrust = 300;
		thrustTime = 4;
		trackLead = 0.7;
		trackOversteer = 0.7;
		weaponLockSystem = "2 + 16";
		whistleDist = 100;
		whistleOnFire = 0;
		effectsMissile = "Missile5";
	};
	class beo_bms_ammo_aa_mk3: beo_bms_ammo_aa
	{
		hit = 60;
		indirectHit = 40;
		cost = 1000;
		airLock = 2;
		airFriction = 0.145;
		cmImmunity = 0.9;
		fuseDistance = 50;
		irLock = 1;
		maneuvrability = 15;
		maxSpeed = 700;
		timeToLive = 10;
		thrust = 350;
		thrustTime = 3;
		trackLead = 0.8;
		trackOversteer = 0.8;
		weaponLockSystem = "2 + 16";
		whistleDist = 100;
		whistleOnFire = 0;
		effectsMissile = "Missile3";
	};
	class beo_bms_ammo_aa_nyan: beo_bms_ammo_aa
	{
		effectsMissile = "beo_bms_missile5_nyan";
		soundFly[] = {"beo_bms\sounds\nyan.ogg",5,1,1000};
		thrust = 50;
		thrustTime = 20;
		maxSpeed = 50;
	};
	class M_Titan_AT;
	class ACE_Javelin_FGM148: M_Titan_AT
	{
		class Components;
		class SensorTemplateIR;
	};
	class beo_bms_ammo_at: ACE_Javelin_FGM148
	{
		cmImmunity = 0.4;
		initTime = 0.25;
		effectsMissile = "beo_bms_missile5_black";
		hit = 70;
		indirectHit = 20;
		indirectHitRange = 3.3;
		submunitionAmmo = "beo_bms_sub_at";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 3.7;
						angleRangeVertical = 2.3;
						maxTrackableATL = 50;
					};
				};
			};
		};
		cost = 40;
	};
	class beo_bms_ammo_at_mk2: beo_bms_ammo_at
	{
		cmImmunity = 0.4;
		effectsMissile = "missile5";
		hit = 80;
		indirectHit = 20;
		indirectHitRange = 3.3;
		submunitionAmmo = "beo_bms_sub_at_mk2";
		cost = 40;
	};
	class beo_bms_ammo_at_mk3: beo_bms_ammo_at
	{
		cmImmunity = 0.4;
		effectsMissile = "missile2";
		hit = 90;
		indirectHit = 20;
		indirectHitRange = 3.3;
		submunitionAmmo = "beo_bms_sub_at_mk3";
		cost = 40;
	};
	class ammo_Penetrator_Titan_AT;
	class beo_bms_sub_at: ammo_Penetrator_Titan_AT
	{
		hit = 200;
	};
	class beo_bms_sub_at_mk2: beo_bms_sub_at
	{
		hit = 300;
	};
	class beo_bms_sub_at_mk3: beo_bms_sub_at
	{
		hit = 400;
	};
	class M_Titan_AP;
	class beo_bms_ammo_ap: M_Titan_AP
	{
		cmImmunity = 0.4;
		effectsMissile = "beo_bms_missile5_black";
		hit = 50;
		indirectHit = 7;
		indirectHitRange = 10;
		submunitionAmmo = "";
		allowAgainstInfantry = 1;
		cost = 40;
		irLock = 1;
	};
	class beo_bms_ammo_ap_mk2: beo_bms_ammo_ap
	{
		cmImmunity = 0.4;
		effectsMissile = "missile5";
		hit = 60;
		indirectHit = 10;
		indirectHitRange = 10;
		submunitionAmmo = "";
		allowAgainstInfantry = 1;
		cost = 40;
	};
	class beo_bms_ammo_ap_mk3: beo_bms_ammo_ap
	{
		cmImmunity = 0.4;
		effectsMissile = "missile3";
		hit = 70;
		indirectHit = 15;
		indirectHitRange = 10;
		submunitionAmmo = "";
		allowAgainstInfantry = 1;
		cost = 40;
	};
};
class cfgMagazines
{
	class Titan_AA;
	class beo_bms_mag_aa: Titan_AA
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AA Mk.1 Missile";
		descriptionShort = "Type: Mk.1 Anti-Air<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_aa";
	};
	class beo_bms_mag_aa_mk2: Titan_AA
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AA Mk.2 Missile";
		descriptionShort = "Type: Anti-Air<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_aa_mk2";
	};
	class beo_bms_mag_aa_mk3: Titan_AA
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AA Mk.3 Missile";
		descriptionShort = "Type: Anti-Air<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_aa_mk3";
	};
	class beo_bms_mag_aa_nyan: Titan_AA
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AA NYAN Missile";
		descriptionShort = "Type: Anti-Air NYAN Missile<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_aa_nyan";
	};

// AA Missiles - Hilux/IGLA
	class beo_bms_mag_aa_2: beo_bms_mag_aa
	{
		count = 2;
	};
	class beo_bms_mag_aa_mk2_2: beo_bms_mag_aa_mk2
	{
		count = 2;
	};
	class beo_bms_mag_aa_mk3_2: beo_bms_mag_aa_mk3
	{
		count = 2;
	};
	class beo_bms_mag_aa_nyan_2: beo_bms_mag_aa_nyan
	{
		count = 2;
	};

// AT Missiles	
	class Titan_AT;
	class beo_bms_mag_at: Titan_AT
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AT Mk.1 Missile";
		descriptionShort = "Type: Anti-Tank<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_at";
	};
	class beo_bms_mag_at_mk2: Titan_AT
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AT Mk.2 Missile";
		descriptionShort = "Type: Anti-Tank<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_at_mk2";
	};
	class beo_bms_mag_at_mk3: Titan_AT
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AT Mk.3 Missile";
		descriptionShort = "Type: Anti-Tank<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_at_mk3";
	};
	class Titan_AP;
	class beo_bms_mag_ap: Titan_AP
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AP Mk.1 Missile";
		descriptionShort = "Type: Anti-Personnel<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_ap";
	};
	class beo_bms_mag_ap_mk2: Titan_AP
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AP Mk.2 Missile";
		descriptionShort = "Type: Anti-Personnel<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_ap_mk2";
	};
	class beo_bms_mag_ap_mk3: Titan_AP
	{
		scope = 2;
		author = "Walker";
		displayName = "Beowulf AP Mk.3 Missile";
		descriptionShort = "Type: Anti-Personnel<br />Rounds: 1<br />Used in: Beowulf BMS Launcher";
		ammo = "beo_bms_ammo_ap_mk3";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class launch_B_Titan_F;
	class launch_B_Titan_olive_F: launch_B_Titan_F
	{
		class Single;
	};
	class beo_bms_launcher: launch_B_Titan_olive_F
	{
		scope = 2;
		author = "Walker";
		displayName = "BMS Launcher";
		_generalMacro = "beo_bms_launcher";
		magazines[] = {"Titan_AA","Titan_AT","Titan_AP","beo_bms_mag_aa","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk3","beo_bms_mag_aa_nyan","beo_bms_mag_at","beo_bms_mag_at_mk2","beo_bms_mag_at_mk3","beo_bms_mag_ap","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk3"};
		magazineWell[] = {};
		class Single: Single
		{
			dispersion = 0.02;
			aiRateOfFire = 30;
			aiRateOfFireDispersion = 30;
			aiRateOfFireDistance = 2000;
			maxRange = 2000;
			maxRangeProbab = 0.85;
			midRange = 1000;
			midRangeProbab = 0.9;
			minRange = 10;
			minRangeProbab = 0.7;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",3.16228,1,2000};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"Launcher_Titan_Shot_SoundSet","Launcher_Titan_Tail_SoundSet"};
			};
			ace_missileGuidance_attackProfile = "";
		};
		class Library
		{
			libTextDesc = "This is not just any missile system... This is the Beowulf Missile System... Designed by top Chernarussian science, the Beowulf Missile System uses grav-arch-flux technology to connect missile from platform to target. Manufactured In the Feruz-Abad region of Takistan, the launcher platform is capable of deploying munitions to kinetic intervene targets, and dominate the anti-armour, anti-air, anti-bunker and anti-personal domain. Order now and get very good price.";
		};
	};

	class rhs_weap_stinger_Launcher;
	class uk3cb_weap_igla_launcher: rhs_weap_stinger_Launcher
	{
		magazines[] +=
		{
			"beo_bms_mag_aa","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk3","beo_bms_mag_aa_nyan","beo_bms_mag_aa_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_nyan_2"
		};

	};

	class rhs_weap_9K114_launcher;
	class rhs_weap_9K115_launcher: rhs_weap_9K114_launcher
	{
		magazines[] +=
		{
			"beo_bms_mag_at","beo_bms_mag_at_mk2","beo_bms_mag_at_mk3","beo_bms_mag_ap","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk3"
		};

	};
	
};
class cfgVehicles
{
	class B_static_AA_F;
	class B_T_Static_AA_F: B_static_AA_F
	{
		class Turrets;
		class MainTurret;
	};
	class beo_bms_launcher_static: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AA Mk1";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa","beo_bms_mag_aa"};
			};
		};
	};
	class beo_bms_launcher_static_opf: beo_bms_launcher_static
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AA Mk1";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_ind: beo_bms_launcher_static
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AA Mk1";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_mk2: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AA Mk2";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2","beo_bms_mag_aa_mk2"};
			};
		};
	};
	class beo_bms_launcher_static_mk2_opf: beo_bms_launcher_static_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AA Mk2";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_mk2_ind: beo_bms_launcher_static_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AA Mk2";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_mk3: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AA Mk3";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3","beo_bms_mag_aa_mk3"};
			};
		};
	};
	class beo_bms_launcher_static_mk3_opf: beo_bms_launcher_static_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AA Mk3";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_mk3_ind: beo_bms_launcher_static_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AA Mk3";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_AT: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AT Mk1";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at"};
			};
		};
	};
	class beo_bms_launcher_static_AT_opf: beo_bms_launcher_static_AT
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AT Mk1";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_AT_ind: beo_bms_launcher_static_AT
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AT Mk1";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_AT_mk2: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AT Mk2";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2"};
			};
		};
	};
	class beo_bms_launcher_static_AT_mk2_opf: beo_bms_launcher_static_AT_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AT Mk2";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_AT_mk2_ind: beo_bms_launcher_static_AT_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AT Mk2";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_AT_mk3: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AT Mk3";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3"};
			};
		};
	};
	class beo_bms_launcher_static_AT_mk3_opf: beo_bms_launcher_static_AT_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AT Mk3";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_AT_mk3_ind: beo_bms_launcher_static_AT_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AT Mk3";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_AP: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AP Mk1";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap","beo_bms_mag_ap"};
			};
		};
	};
	class beo_bms_launcher_static_AP_opf: beo_bms_launcher_static_AP
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AP Mk1";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_AP_ind: beo_bms_launcher_static_AP
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AP Mk1";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_AP_mk2: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AP Mk2";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2","beo_bms_mag_ap_mk2"};
			};
		};
	};
	class beo_bms_launcher_static_AP_mk2_opf: beo_bms_launcher_static_AP_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AP Mk2";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_AP_mk2_ind: beo_bms_launcher_static_AP_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AP Mk2";
		crew = "beo_ai_crew_ind";
	};
	class beo_bms_launcher_static_AP_mk3: B_T_Static_AA_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Static Launcher - AP Mk3";
		crew = "beo_ai_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxTurn = 360;
				weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3","beo_bms_mag_ap_mk3"};
			};
		};
	};
	class beo_bms_launcher_static_AP_mk3_opf: beo_bms_launcher_static_AP_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		displayName = "BMS Static Launcher - AP Mk3";
		crew = "beo_ai_crew_opf";
	};
	class beo_bms_launcher_static_AP_mk3_ind: beo_bms_launcher_static_AP_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		displayName = "BMS Static Launcher - AP Mk3";
		crew = "beo_ai_crew_ind";
	};



// BMS Offroad AA (Hilux/Igla)
	class UK3CB_Hilux_Igla_Chair;
	class UK3CB_B_G_Hilux_Igla_Chair: UK3CB_Hilux_Igla_Chair
	{
		class Turrets;
		class MainTurret;
	};
	class bso_bms_offroad_AA: UK3CB_B_G_Hilux_Igla_Chair
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Offroad Launcher - AA Mk1";
		crew = "beo_ai_crew_opf";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//maxTurn = 360;
				//weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2","beo_bms_mag_aa_2"};
			};
		};
	};
	class bso_bms_offroad_AA_opf: bso_bms_offroad_AA
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};
	class bso_bms_offroad_AA_ind: bso_bms_offroad_AA
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};


	class bso_bms_offroad_AA_mk2: bso_bms_offroad_AA
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Offroad Launcher - AA Mk2";
		crew = "beo_ai_crew_opf";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//maxTurn = 360;
				//weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2","beo_bms_mag_aa_mk2_2"};
			};
		};
	};
	class bso_bms_offroad_AA_mk2_opf: bso_bms_offroad_AA_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};
	class bso_bms_offroad_AA_mk2_ind: bso_bms_offroad_AA_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};


	class bso_bms_offroad_AA_mk3: bso_bms_offroad_AA
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Offroad Launcher - AA Mk3";
		crew = "beo_ai_crew_opf";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//maxTurn = 360;
				//weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2","beo_bms_mag_aa_mk3_2"};
			};
		};
	};
	class bso_bms_offroad_AA_mk3_opf: bso_bms_offroad_AA_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};
	class bso_bms_offroad_AA_mk3_ind: bso_bms_offroad_AA_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};





// BMS Offroad AT (Hilux/Metis)
	class UK3CB_Hilux_Metis;
	class UK3CB_B_G_Hilux_Metis: UK3CB_Hilux_Metis 
	{
		class Turrets;
		class MainTurret;
	};
	class bso_bms_offroad_AT: UK3CB_B_G_Hilux_Metis
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Offroad Launcher - AT Mk1";
		crew = "beo_ai_crew_opf";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//maxTurn = 360;
				//weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at","beo_bms_mag_at"};
			};
		};
	};
	class bso_bms_offroad_AT_opf: bso_bms_offroad_AT
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};
	class bso_bms_offroad_AT_ind: bso_bms_offroad_AT
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};


	class bso_bms_offroad_AT_mk2: bso_bms_offroad_AT
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Offroad Launcher - AT Mk2";
		crew = "beo_ai_crew_opf";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//maxTurn = 360;
				//weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2","beo_bms_mag_at_mk2"};
			};
		};
	};
	class bso_bms_offroad_AT_mk2_opf: bso_bms_offroad_AT_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};
	class bso_bms_offroad_AT_mk2_ind: bso_bms_offroad_AT_mk2
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};


	class bso_bms_offroad_AT_mk3: bso_bms_offroad_AT
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "beo_ai_blu";
		displayName = "BMS Offroad Launcher - AT Mk3";
		crew = "beo_ai_crew_opf";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//maxTurn = 360;
				//weapons[] = {"beo_bms_launcher"};
				magazines[] = {"beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3","beo_bms_mag_at_mk3"};
			};
		};
	};
	class bso_bms_offroad_AT_mk3_opf: bso_bms_offroad_AT_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
	};
	class bso_bms_offroad_AT_mk3_ind: bso_bms_offroad_AT_mk3
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
	};



};
