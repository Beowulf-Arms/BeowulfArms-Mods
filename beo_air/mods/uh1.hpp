class rhs_uh1h_base;
class rhs_uh1h_hidf: rhs_uh1h_base
{
	class Components;
	class AnimationSources;
	class HitPoints;
};

class rhs_uh1h_hidf_unarmed: rhs_uh1h_hidf
{
	class AnimationSources;		
	class HitPoints: HitPoints
	{
		class HitVRotor;
		class HitHRotor;
	};	
	class textureSources;
	
};
class rhs_uh1h_hidf_gunship: rhs_uh1h_hidf
{
	class AnimationSources;
	class Components: Components
	{
		class TransportPylonsComponent
		{
			class pylons // Pylons are indexed to aircraft model's proxies IDs in the order they are written in class Pylons
			{
				class pylon1;
				class pylon2;
			};	
		};
	};
};

class beo_uh1h: rhs_uh1h_hidf_unarmed
{
	scope = 2;
	side = 1;
	vehicleClass = "Air";
	faction = "BLU_F";
	crew = "B_helipilot_F";
	editorSubcategory = "EdSubcat_Helicopters";
	displayName = "[BEO] UH-1H";
	
	class textureSources:textureSources
	{
		class hidf_grey
		{
			displayName = "HIDF Grey";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
			factions[] = {};
		};
		class hidf_summer: hidf_grey
		{
			displayName = "HIDF MERDC (Summer verdant)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		};
		class hidf_tropical: hidf_grey
		{
			displayName = "HIDF MERDC (Tropical verdant)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		};
		class hidf_olv: hidf_grey
		{
			displayName = "HIDF Olive";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
		};
		class hidf_tan: hidf_grey
		{
			displayName = "HIDF Tan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
		};
		class un
		{
			displayName = "UN";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"};
			factions[] = {};
		};
		class idap
		{
			displayName = "IDAP";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"};
			factions[] = {};
		};
		class us_army
		{
			displayName = "US Army";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
			factions[] = {};
		};
		class us_army_med: us_army
		{
			displayName = "US Army (Medevac)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
		};
		class od
		{
			displayName = "OD Green";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};		
		class od_med
		{
			displayName = "OD Green (Medical)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};	
		class tan
		{
			displayName = "Tan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};				
		class black
		{
			displayName = "Black";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class iraq
		{
			displayName = "Iraqi Air Force";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_iaf_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class takistan
		{
			displayName = "Takistan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tka_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_tka_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tka_co","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class guerilla
		{
			displayName = "Guerilla";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};	
	};
	textureList[] = {};
	class AnimationSources: AnimationSources
	{	
		class Hide_mid_doors
		{
			displayName = "Hide Middle Doors";
			source = "user";
			animPeriod = 1e-006;
			initPhase = 1;
		};
		class Hide_guns
		{
			displayName = "Hide Door Guns";
			source = "user";
			animPeriod = 1e-006;
			initPhase = 1;
		};
	};		
	animationList[] =
	{
		"Hide_mid_doors",1,
		"Hide_guns", 1
	};
	
	hiddenSelectionsTextures[] = 
	{
		"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
		"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa" // Hides text along tail 
	};
	// Edit to Uh1 rotor armour, see T838
	class HitPoints: HitPoints
	{
		class HitVRotor: HitVRotor
		{
			armor = -40;
			minimalHit = -0.1;
			passThrough = 0.5;
		};
		class HitHRotor: HitHRotor
		{
			armor = -40;
			minimalHit = -0.1;
			passThrough = 0;
		};
	};	
	
	
};

class beo_uh1h_mg: rhs_uh1h_hidf
{
	scope = 2;
	side = 1;
	vehicleClass = "Air";
	faction = "BLU_F";
	crew = "B_helipilot_F";
	editorSubcategory = "EdSubcat_Helicopters";
	displayName = "[BEO] UH-1H (MGs)";
	class textureSources
	{
		class hidf_grey
		{
			displayName = "HIDF Grey";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
			factions[] = {};
		};
		class hidf_summer: hidf_grey
		{
			displayName = "HIDF MERDC (Summer verdant)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		};
		class hidf_tropical: hidf_grey
		{
			displayName = "HIDF MERDC (Tropical verdant)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		};
		class hidf_olv: hidf_grey
		{
			displayName = "HIDF Olive";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
		};
		class hidf_tan: hidf_grey
		{
			displayName = "HIDF Tan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
		};
		class un
		{
			displayName = "UN";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"};
			factions[] = {};
		};
		class idap
		{
			displayName = "IDAP";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"};
			factions[] = {};
		};
		class us_army
		{
			displayName = "US Army";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
			factions[] = {};
		};
		class us_army_med: us_army
		{
			displayName = "US Army (Medevac)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
		};
		class od
		{
			displayName = "OD Green";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};	
		class od_med
		{
			displayName = "OD Green (Medical)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};	
		class tan
		{
			displayName = "Tan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};				
		class black
		{
			displayName = "Black";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class iraq
		{
			displayName = "Iraqi Air Force";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_iaf_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class takistan
		{
			displayName = "Takistan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tka_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_tka_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tka_co","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class guerilla
		{
			displayName = "Guerilla";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};	
	};
	textureList[] = {};
	class AnimationSources: AnimationSources
	{	
		class Hide_mid_doors
		{
			displayName = "Hide Middle Doors";
			source = "user";
			animPeriod = 1e-007;
			initPhase = 1;
		};
		class Hide_guns
		{
			displayName = "Hide Door Guns";
			source = "user";
			animPeriod = 1e-007;
			initPhase = 0;
		};
	};			
	animationList[] =
	{
		"Hide_mid_doors",1,
		"Hide_guns", 0
	};	
	hiddenSelectionsTextures[] = 
	{
		"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
		"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa" // Hides text along tail 
	};
};	



class beo_uh1h_gunship: rhs_uh1h_hidf_gunship
{
	scope = 2;
	side = 1;
	vehicleClass = "Air";
	faction = "BLU_F";
	crew = "B_helipilot_F";
	editorSubcategory = "EdSubcat_Helicopters";
	displayName = "[BEO] UH-1H Gunship";
	
	laserScanner = 1;
	canUseScanners = 1;
	allowTabLock = 1;
	driverCanSee = "31+32";
	gunnerCanSee = "31+32";
	
	textureList[] =
	{
		"black", 1,
		"guerilla", 1,
		"hidf_grey", 1,
		"hidf_olv", 1,
		"hidf_summer", 1,
		"hidf_tan", 1,
		"hidf_tropical", 1,
		"idap", 1,
		"iraq", 1,
		"takistan", 1,
		"us_army", 1,
		"us_army_med", 1,
		"un", 1
	};
	hiddenSelectionsTextures[] = 
	{
		"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
		"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa" // Hides text along tail 
	};	
	class textureSources
	{
		class hidf_grey
		{
			displayName = "HIDF Grey";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
			factions[] = {};
		};
		class hidf_summer: hidf_grey
		{
			displayName = "HIDF MERDC (Summer verdant)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		};
		class hidf_tropical: hidf_grey
		{
			displayName = "HIDF MERDC (Tropical verdant)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		};
		class hidf_olv: hidf_grey
		{
			displayName = "HIDF Olive";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
		};
		class hidf_tan: hidf_grey
		{
			displayName = "HIDF Tan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
		};
		class un
		{
			displayName = "UN";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"};
			factions[] = {};
		};
		class idap
		{
			displayName = "IDAP";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"};
			factions[] = {};
		};
		class us_army
		{
			displayName = "US Army";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
			factions[] = {};
		};
		class us_army_med: us_army
		{
			displayName = "US Army (Medevac)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
		};
		class od
		{
			displayName = "OD Green";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};		
		class od_med
		{
			displayName = "OD Green (Medical)";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};	
		class tan
		{
			displayName = "Tan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};				
		class black
		{
			displayName = "Black";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class iraq
		{
			displayName = "Iraqi Air Force";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_iaf_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class takistan
		{
			displayName = "Takistan";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tka_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_tka_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_tka_co","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};
		class guerilla
		{
			displayName = "Guerilla";
			textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			factions[] = {};
		};	
	};
	

	
	class AnimationSources: AnimationSources
	{	
		class Hide_guns
		{
			displayName = "Hide Door Guns";
			source = "user";
			animPeriod = 1e-007;
			initPhase = 1;
		};
		class hide_crosshair
		{
			source = "user";
			animPeriod = 1e-006;
			initPhase = 0;
		};
		class Hide_mid_doors
		{
			displayName = "Hide Middle Doors";
			source = "user";
			animPeriod = 1e-006;
			initPhase = 1;
		};
		class hide_gunmount
		{
			source = "user";
			animPeriod = 1e-006;
			initPhase = 0;
		};
	};	
	animationList[] =
	{
		"Hide_mid_doors",1,
		"Hide_guns",1 
	};			
	class Components: Components
	{
		class TransportPylonsComponent
		{
			UIPicture = "\rhsgref\addons\rhsgref_air\uh1h\ui\RHS_UH1H_EDEN_CA.paa";
			class pylons // Pylons are indexed to aircraft model's proxies IDs in the order they are written in class Pylons
			{
				class pylon1 // left wingtip
				{
					attachment = "rhs_mag_M151_19";
					bay = -1;
					priority = 1;
					UIposition[] = {0.573,0.44};
					maxweight    = 20000; //800kg
					hardpoints[] = {"RHS_HP_MELB","RHS_HP_MELB_L","RHS_HP_MELB_M134","RHS_HP_FFAR_ARMY","DAR","DAGR","B_MISSILE_PYLON","B_BOMB_PYLON","20MM_TWIN_CANNON","B_ASRRAM_EJECTOR","RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2","RHS_HP_B13L1","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32","RHS_HP_UPK23"};                             // default owner of pylon/weapon, empty for driver
				};
				class pylon2:pylon1
				{
					attachment = "rhs_mag_M151_19";
					bay = -1;
					priority = 1;
					mirroredMissilePos = 1;
					UIposition[] = {0.1,0.44};
					maxweight    = 20000; //800kg
					hardpoints[] = {"RHS_HP_MELB","RHS_HP_MELB_R","RHS_HP_MELB_M134","RHS_HP_FFAR_ARMY","DAR","DAGR","B_MISSILE_PYLON","B_BOMB_PYLON","20MM_TWIN_CANNON","B_ASRRAM_EJECTOR","RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2","RHS_HP_B13L1","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32","RHS_HP_UPK23","I_ORCA_RIGHT_PYLON"};  
				};

			};
		};
	};
};	

class beo_uh1h_gunship_mg: beo_uh1h_gunship
	{
		scope = 2;
		side = 1;
		vehicleClass = "Air";
		faction = "BLU_F";
		crew = "B_helipilot_F";
		editorSubcategory = "EdSubcat_Helicopters";
		displayName = "[BEO] UH-1H Gunship (MGs)";
		class AnimationSources: AnimationSources
		{	
			class Hide_guns
			{
				displayName = "Hide Door Guns";
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class hide_crosshair
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Hide_mid_doors
			{
				displayName = "Hide Middle Doors";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class hide_gunmount
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
		};	
		animationList[] =
		{
			"Hide_mid_doors",1,
			"Hide_guns",0 
		};				

	};	
	
	
class beo_uh1h_gunship_m: beo_uh1h_gunship
{
	scope = 2;
	side = 1;
	vehicleClass = "Air";
	faction = "BLU_F";
	crew = "B_helipilot_F";
	editorSubcategory = "EdSubcat_Helicopters";
	displayName = "[BEO] UH-1H Gunship (Sensors)";		
	
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
						maxRange = 4000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 100;
						maxRange = 4000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					
				};
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
				class VisualSensorComponent: SensorTemplateVisual {};
				
			};			
		};
	};		
};			
