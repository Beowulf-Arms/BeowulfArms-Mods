#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class beo_vehcs
	{
		requiredAddons[] = {"A3_Weapons_F_EPB",
		"rhs_c_weapons",
		"rhsusf_c_weapons",
		"uk3cb_factions_weapons",
		"CLV_Aml90",
		"CLV_AmlHS30",
		"CLV_Aml20",
		"CLV_T62"
		};
		version = "1";
		requiredVersion = "1";
		versionDesc = "Beowulf Vehicles";
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

class cfgVehicles
{
// Wiesel varients
	//class LT_01_base_F;
	class LT_01_AT_base_F;
	class I_LT_01_AT_F: LT_01_AT_base_F
	{
		class Components;
		class Turrets;
		class MainTurret;	
		class TextureSources;
		class AnimationSources;
		class Indep_01;
		class Indep_02;
		class Indep_03;
		class Indep_Olive;
		class SensorsManagerComponent;
		class Missiles_reloadMagazine;
		class Missiles_revolving;
	};	

	class beo_wiesel_firefist: I_LT_01_AT_F
	{
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		
		laserScanner = 1;
		canUseScanners = 1;
		allowTabLock = 1;
		driverCanSee = "31+32";
		gunnerCanSee = "31+32";
		
		author = "BEO Walker";
		displayName = "[BEO] Wiesel AWC (FireFist)";
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines{};
		textureList[] = {"Indep_Olive",1};
		class TextureSources: TextureSources
		{
			class Indep_01: Indep_01
			{
				factions[] = {};
			};
			class Indep_02: Indep_02
			{
				factions[] = {};
				
			};
			class Indep_03: Indep_03
			{
				factions[] = {};
				
			};
			class Indep_Olive: Indep_Olive
			{
				factions[] = {};
				
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"SmokeLauncherMag","beo_mag_2rnd_firefist","beo_mag_2rnd_firefist","beo_mag_2rnd_firefist","beo_mag_2rnd_firefist","beo_mag_2rnd_firefist","beo_mag_2rnd_firefist","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red"};
				weapons[] = {"SmokeLauncher","HMG_127","missiles_Firefist"};
			};				
		};	
		hiddenSelectionsTextures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};			
		
		
			class Components: Components
			{
				class SensorsManagerComponent: SensorsManagerComponent
				{
					class Components: Components
					{
						class LaserSensorComponent: SensorTemplateLaser 
						{
							class AirTarget
							{
								minRange = 100;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget
							{
								minRange = 100;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
						
						};
						
					};			
				};
			};				
		
		
		
	};	
	
	
	class beo_wiesel_TOW: I_LT_01_AT_F
	{
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		author = "BEO Walker";
		displayName = "[BEO] Wiesel AWC (TOW)";
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines{};
		textureList[] = {"Indep_Olive",1};
		class TextureSources: TextureSources
		{
			class Indep_01: Indep_01
			{
				factions[] = {};
			};
			class Indep_02: Indep_02
			{
				factions[] = {};
				
			};
			class Indep_03: Indep_03
			{
				factions[] = {};
				
			};
			class Indep_Olive: Indep_Olive
			{
				factions[] = {};
				
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"SmokeLauncherMag","beo_mag_2rnd_TOW2b","beo_mag_2rnd_TOW2b","beo_mag_2rnd_TOW2b","beo_mag_2rnd_TOW2b","beo_mag_2rnd_TOW2bb","beo_mag_2rnd_TOW2bb","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red"};
				weapons[] = {"SmokeLauncher","HMG_127","Rhs_weap_TOW_Launcher_static"};	
			};				
		};	
		hiddenSelectionsTextures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};		
		class AnimationSources: AnimationSources
		{
			class Missiles_reloadMagazine: Missiles_reloadMagazine
			{
				weapon = "Rhs_weap_TOW_Launcher_static";
			};
			class Missiles_revolving: Missiles_revolving
			{
				weapon = "Rhs_weap_TOW_Launcher_static";
			};
		};	
	};		









// CLV Edits

/*

 The TAM2IP change seems to create an animation bug on the commander's MG ??

  The T-62 disabling the thermal doesn't seem to work...


	class Tank_F;
	class clv_base_Tam2ip: Tank_F
	{
		class Turrets;
		class MainTurret;
	};
	class clv_Tam2ip: clv_base_Tam2ip
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"UK3CB_105mm_M68E1",
					"Coax"
				};
				magazines[]=
				{
					"UK3CB_20_HE",
					"UK3CB_20_HE",
					"UK3CB_20_HEAT",
					"UK3CB_20_HEAT",
					"2000Rnd_762x51_Belt_Red",
					"2000Rnd_762x51_Belt_Red"
				};

			};
		};		
	};




	class clv_base_T62: Tank_F
	{
		class Turrets;
		class MainTurret;
		class CommanderOptics;
	};
	class clv_T62: clv_base_T62
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						thermalMode[]={};
					};
				};
			};		
		};
	};	

*/

	class Wheeled_APC_F;
	class clv_base_Aml90: Wheeled_APC_F
	{
		class Turrets;
		class MainTurret;
	};
	class clv_Aml90: clv_base_Aml90
	{		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"beo_weap_90mm",
					"Coax"
				};
				magazines[]=
				{
					"beo_mag_90mm_HE",
					"beo_mag_90mm_HE",
					"beo_mag_90mm_HEAT",
					"beo_mag_90mm_HEAT",
					"2000Rnd_762x51_Belt_Red",
					"2000Rnd_762x51_Belt_Red"
				};

			};
		};

		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getout",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_int",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_ext",
			0.56234133,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_int",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_ext",
			0.56234133,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext",
					0.31622776,
					1,
					100
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext",
					0.39810717,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext",
					0.50118721,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext",
					0.63095737,
					1,
					250
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext_exhaust",
					0.56234133,
					1,
					150
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext_exhaust",
					0.63095737,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext_exhaust",
					0.70794576,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext_exhaust",
					1.1220185,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int",
					0.2238721,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int",
					0.25118864,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int",
					0.44668359,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int_exhaust",
					0.39810717,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int_exhaust",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int_exhaust",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int_exhaust",
					0.89125091,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.5848932,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};



	};


	class clv_base_AmlHS30; //Wheeled_APC_F
	class clv_AmlHS30: clv_base_AmlHS30
	{	

		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getout",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_int",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_ext",
			0.56234133,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_int",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_ext",
			0.56234133,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext",
					0.31622776,
					1,
					100
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext",
					0.39810717,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext",
					0.50118721,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext",
					0.63095737,
					1,
					250
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext_exhaust",
					0.56234133,
					1,
					150
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext_exhaust",
					0.63095737,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext_exhaust",
					0.70794576,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext_exhaust",
					1.1220185,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int",
					0.2238721,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int",
					0.25118864,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int",
					0.44668359,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int_exhaust",
					0.39810717,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int_exhaust",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int_exhaust",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int_exhaust",
					0.89125091,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.5848932,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
	};






	class clv_base_Aml20; //Wheeled_APC_F
	class clv_Aml20: clv_base_Aml20
	{	

		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getout",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_int",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_ext",
			0.56234133,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_int",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_ext",
			0.56234133,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext",
					0.31622776,
					1,
					100
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext",
					0.39810717,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext",
					0.50118721,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext",
					0.63095737,
					1,
					250
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext_exhaust",
					0.56234133,
					1,
					150
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext_exhaust",
					0.63095737,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext_exhaust",
					0.70794576,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext_exhaust",
					1.1220185,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int",
					0.2238721,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int",
					0.25118864,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int",
					0.44668359,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int_exhaust",
					0.39810717,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int_exhaust",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int_exhaust",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int_exhaust",
					0.89125091,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.5848932,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};



	};











};