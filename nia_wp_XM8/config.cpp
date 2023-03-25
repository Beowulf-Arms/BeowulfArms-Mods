////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Fri Mar 24 16:52:50 2023 : 'file' last modified on Mon Oct 10 05:54:38 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgFunctions
{
	class Niarms
	{
		class Misc
		{
			class laserSwitch
			{
				description = "Adds Integrated Laser Function as accessory rail item,only when slot is free, removes if it detects the optic no longer attached; ClosedInventory EH";
				file = "\nia_wp_XM8\functions\fnc_laserSwitch.sqf";
			};
			class laserInit
			{
				description = "Adds Integrated Laser Function as accessory rail item,only when slot is free, removes if it detects the optic no longer attached; Init EH";
				file = "\nia_wp_XM8\functions\fnc_laserInit.sqf";
			};
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class nia_wp_xm8
		{
			clientInit = "_this call Niarms_fnc_laserInit";
		};
	};
};
class Extended_InventoryClosed_EventHandlers
{
	class CAManBase
	{
		class nia_wp_xm8
		{
			inventoryClosed = "_this call Niarms_fnc_laserInit";
		};
	};
};
class Extended_Take_EventHandlers
{
	class CAManBase
	{
		class nia_wp_xm8
		{
			take = "_this call Niarms_fnc_laserInit";
		};
	};
};

/*
class CfgSoundShaders
{
	class g36_MLI_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_first",1},{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36_MLI_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36_MLI_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_mid",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class g36_MLI_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class g36_MLI_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_MLI_indoor",1}};
		volume = " 1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36_MLI_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_MLI_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class g36_MLI_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_trees",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36_MLI_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36_MLI_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_forest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36_MLI_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class g36_MLI_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36_MLI_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36_MLI_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36_MLI_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36_MLI_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Close",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class g36_MLI_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_suppressed_mid",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class g36_MLI_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail",1}};
		volume = "(1-interior/1.4)*Forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36_MLI_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class g36_MLI_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail_Indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class g36_MLI_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36_MLI_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail",1}};
		volume = " (1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36c_MLI_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_first",1},{"hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36c_MLI_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36c_MLI_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_mid",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class g36c_MLI_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class g36c_MLI_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_indoor",1}};
		volume = "1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36c_MLI_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36c_MLI\g36c_MLI_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class g36c_MLI_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\G36C_MLI_trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36c_MLI_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36C_MLI\G36C_MLI_trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36c_MLI_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\G36C_MLI_forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36C_MLI_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36C_MLI\G36C_MLI_forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class g36c_MLI_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_mli_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36C_MLI_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36C_MLI\g36C_mli_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36c_MLI_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c_MLI\G36C_MLI_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36c_MLI_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36c_MLI\G36c_MLI_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_MLI_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_first",1},{"hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36k_MLI_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36k_MLI_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_mid",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class g36k_MLI_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class g36k_MLI_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_indoor",1}};
		volume = "1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36k_MLI_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36k_MLI\g36k_MLI_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class g36k_MLI_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\G36K_MLI_Trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36k_MLI_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36k_MLI\G36k_MLI_trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_MLI_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\G36K_MLI_Forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36k_MLI_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36k_MLI\G36k_MLI_forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class g36k_MLI_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36K_MLI_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36K_MLI\g36K_mli_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_MLI_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k_MLI\G36K_MLI_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36K_MLI_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36K_MLI\G36K_MLI_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_first",1},{"hlc_wp_g36\snd\soundshaders\g36\g36_first",1}};
		volume = 0.5;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36_closeShot_SoundShader
	{
		samples[] = {{"hlc_core\sound\weapon\G36\Close_1",1},{"hlc_core\sound\weapon\G36\Close_2",1},{"hlc_core\sound\weapon\G36\Close_3",1},{"hlc_core\sound\weapon\G36\Close_4",1}};
		volume = 1.5;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_mid",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class g36_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class g36_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_indoor",1}};
		volume = " 1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class G36_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36\g36_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
		limitable = 1;
	};
	class g36_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Close",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class g36_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_mid",1}};
		volume = 1;
		range = 350;
		rangeCurve[] = {{0,0.2},{50,1},{350,0}};
	};
	class g36_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail",1}};
		volume = " (1-interior/1.4)*Forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses",1}};
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class g36_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail_Indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class g36_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36c_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_first",1},{"hlc_wp_g36\snd\soundshaders\g36c\g36c_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36c_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_close",1},{"hlc_wp_g36\snd\soundshaders\g36c\g36c_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36c_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_mid",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class g36c_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class g36c_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class g36c_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36C_Forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36C_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36C\G36C_Forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class g36c_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36C_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36c_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36c_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36c_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_indoor",1}};
		volume = " 1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36c_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class g36c_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36c_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36c\g36c_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36c_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36c_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36c_Trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_first",1},{"hlc_wp_g36\snd\soundshaders\g36k\g36k_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36k_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_close",1},{"hlc_wp_g36\snd\soundshaders\g36k\g36k_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36k_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_mid",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class g36k_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class g36k_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class g36k_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36K_Forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36k_Forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class g36k_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36K_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36k_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_indoor",1}};
		volume = "1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class g36k_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36k_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36k\g36k_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36K_Trees",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36k_Trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class NIA_XM8_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_first",1},{"hlc_wp_g36\snd\soundshaders\g36\g36_first",1}};
		volume = 0.3;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class NIA_XM8_closeShot_SoundShader
	{
		samples[] = {{"hlc_core\sound\weapon\G36\Close_1",1},{"hlc_core\sound\weapon\G36\Close_2",1},{"hlc_core\sound\weapon\G36\Close_3",1},{"hlc_core\sound\weapon\G36\Close_4",1}};
		volume = 1.6;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class NIA_xm8_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_mid",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0.5},{100,1},{300,0},{2500,0}};
	};
	class NIA_xm8_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class nia_xm8_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class NIA_xm8_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_forest",1}};
		volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class NIA_xm8_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_urban",1}};
		volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class NIA_xm8_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_indoor",1}};
		volume = " 1.3*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class NIA_xm8_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_meadows",1}};
		volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class NIA_xm8_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_trees",1}};
		volume = " 1.3*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class NIA_xm8_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_Silenced_Close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class NIA_xm8_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_silenced_mid",1}};
		volume = 1.0;
		range = 350;
		rangeCurve[] = {{0,0.2},{50,1},{350,0}};
	};
	class NIA_xm8_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class NIA_xm8_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class NIA_xm8_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_suppressed_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class NIA_xm8_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\xm8\xm8_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class NIA_xm8_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class g36_MLI_Shot_SoundSet
	{
		soundShaders[] = {"g36_MLI_Closure_SoundShader","g36_MLI_closeShot_SoundShader","g36_MLI_midShot_SoundShader","g36_MLI_distShot_SoundShader"};
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class g36_MLI_Tail_SoundSet
	{
		soundShaders[] = {"g36_MLI_tailInterior_SoundShader","g36_MLI_tailTrees_SoundShader","g36_MLI_tailForest_SoundShader","g36_MLI_tailMeadows_SoundShader","g36_MLI_tailHouses_SoundShader","g36_MLI_tailInterior_mid_SoundShader","g36_MLI_tailTrees_mid_SoundShader","g36_MLI_tailForest_mid_SoundShader","g36_MLI_tailMeadows_mid_SoundShader","g36_MLI_tailHouses_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36_MLI_silencerShot_SoundSet
	{
		soundShaders[] = {"g36_MLI_silencerShot_SoundShader","g36_MLI_Closure_SoundShader","g36_MLI_silencerShot_mid_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class g36_MLI_silencerTail_SoundSet
	{
		soundShaders[] = {"g36_MLI_silencerTailTrees_SoundShader","g36_MLI_silencerTailForest_SoundShader","g36_MLI_silencerTailMeadows_SoundShader","g36_MLI_silencerTailHouses_SoundShader","g36_MLI_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36k_MLI_Shot_SoundSet
	{
		soundShaders[] = {"g36k_MLI_Closure_SoundShader","g36k_MLI_closeShot_SoundShader","g36k_MLI_midShot_SoundShader","g36k_MLI_distShot_SoundShader"};
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class g36k_MLI_Tail_SoundSet
	{
		soundShaders[] = {"g36k_MLI_tailInterior_SoundShader","g36k_MLI_tailTrees_SoundShader","g36k_MLI_tailForest_SoundShader","g36k_MLI_tailMeadows_SoundShader","g36k_MLI_tailHouses_SoundShader","g36k_MLI_tailInterior_mid_SoundShader","g36k_MLI_tailTrees_mid_SoundShader","g36k_MLI_tailForest_mid_SoundShader","g36k_MLI_tailMeadows_mid_SoundShader","g36k_MLI_tailHouses_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36c_MLI_Shot_SoundSet
	{
		soundShaders[] = {"g36c_MLI_Closure_SoundShader","g36c_MLI_closeShot_SoundShader","g36c_MLI_midShot_SoundShader","g36c_MLI_distShot_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class g36c_MLI_Tail_SoundSet
	{
		soundShaders[] = {"g36c_MLI_tailInterior_SoundShader","g36c_MLI_tailTrees_SoundShader","g36c_MLI_tailForest_SoundShader","g36c_MLI_tailMeadows_SoundShader","g36c_MLI_tailHouses_SoundShader","g36c_MLI_tailInterior_mid_SoundShader","g36c_MLI_tailTrees_mid_SoundShader","g36c_MLI_tailForest_mid_SoundShader","g36c_MLI_tailMeadows_mid_SoundShader","g36c_MLI_tailHouses_mid_SoundShader"};
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36_Shot_SoundSet
	{
		soundShaders[] = {"g36_closeShot_SoundShader","g36_midShot_SoundShader","g36_distShot_SoundShader","g36_Closure_SoundShader"};
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class g36_Tail_SoundSet
	{
		soundShaders[] = {"g36_tailDistant_SoundShader","g36_tailForest_SoundShader","g36_tailHouses_SoundShader","g36_tailInterior_SoundShader","g36_tailMeadows_SoundShader","g36_tailTrees_SoundShader","g36_tailForest_mid_SoundShader","g36_tailHouses_mid_SoundShader","g36_tailInterior_mid_SoundShader","g36_tailMeadows_mid_SoundShader","g36_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36_silencerShot_SoundSet
	{
		soundShaders[] = {"g36_silencerShot_SoundShader","g36_Closure_SoundShader","g36_silencerShot_mid_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class g36_silencerTail_SoundSet
	{
		soundShaders[] = {"g36_silencerTailTrees_SoundShader","g36_silencerTailForest_SoundShader","g36_silencerTailMeadows_SoundShader","g36_silencerTailHouses_SoundShader","g36_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36c_Shot_SoundSet
	{
		soundShaders[] = {"g36c_closeShot_SoundShader","g36c_midShot_SoundShader","g36c_distShot_SoundShader","g36c_Closure_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class g36c_Tail_SoundSet
	{
		soundShaders[] = {"g36c_tailDistant_SoundShader","g36c_tailForest_SoundShader","g36c_tailHouses_SoundShader","g36c_tailInterior_SoundShader","g36c_tailMeadows_SoundShader","g36c_tailTrees_SoundShader","g36c_tailForest_mid_SoundShader","g36c_tailHouses_mid_SoundShader","g36c_tailInterior_mid_SoundShader","g36c_tailMeadows_mid_SoundShader","g36c_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36k_Shot_SoundSet
	{
		soundShaders[] = {"g36k_closeShot_SoundShader","g36k_midShot_SoundShader","g36k_distShot_SoundShader","g36k_Closure_SoundShader"};
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class g36k_Tail_SoundSet
	{
		soundShaders[] = {"g36k_tailDistant_SoundShader","g36k_tailForest_SoundShader","g36k_tailHouses_SoundShader","g36k_tailInterior_SoundShader","g36k_tailMeadows_SoundShader","g36k_tailTrees_SoundShader","g36k_tailForest_mid_SoundShader","g36k_tailHouses_mid_SoundShader","g36k_tailInterior_mid_SoundShader","g36k_tailMeadows_mid_SoundShader","g36k_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class NIA_xm8_Shot_SoundSet
	{
		soundShaders[] = {"NIA_xm8_closeShot_SoundShader","NIA_xm8_midShot_SoundShader","NIA_xm8_distShot_SoundShader","NIA_xm8_Closure_SoundShader"};
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class NIA_xm8_tail_SoundSet
	{
		soundShaders[] = {"NIA_xm8_tailDistant_SoundShader","NIA_xm8_tailForest_SoundShader","NIA_xm8_tailHouses_SoundShader","NIA_xm8_tailInterior_SoundShader","NIA_xm8_tailMeadows_SoundShader","NIA_xm8_tailTrees_SoundShader"};
		volumeFactor = 1.0;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class NIA_xm8_silencerShot_SoundSet
	{
		soundShaders[] = {"NIA_xm8_silencerShot_SoundShader","NIA_xm8_Closure_SoundShader","NIA_xm8_silencerShot_mid_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class NIA_xm8_silencerTail_SoundSet
	{
		soundShaders[] = {"NIA_xm8_silencerTailTrees_SoundShader","NIA_xm8_silencerTailForest_SoundShader","NIA_xm8_silencerTailMeadows_SoundShader","NIA_xm8_silencerTailHouses_SoundShader","NIA_xm8_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
};

*/
class CfgPatches
{
	class hlcweapons_XM8
	{
		requiredaddons[] = {"cba_main","hlcweapons_core","uk3cb_factions_weapons","jsrs_soundmod_complete_edition"};
		units[] = {"HLC_XM8_ammobox","Weapon_HLC_rifle_XM8_Carbine","Weapon_HLC_rifle_XM8_Carbine_Green","Weapon_HLC_rifle_XM8_Carbine_OD","Weapon_HLC_rifle_XM8_Carbine_Tan","Weapon_HLC_rifle_XM8_Carbine_Fish","Weapon_HLC_rifle_XM8_Carbine_GL","Weapon_HLC_rifle_XM8_Carbine_GL_green","Weapon_HLC_rifle_XM8_Carbine_GL_OD","Weapon_HLC_rifle_XM8_Carbine_GL_Tan","Weapon_hlc_rifle_XM8_Compact","Weapon_HLC_rifle_XM8_Compact_Green","Weapon_HLC_rifle_XM8_Compact_OD","Weapon_HLC_rifle_XM8_Compact_Tan","Weapon_hlc_rifle_XM8_DMAR","Weapon_HLC_rifle_XM8_DMAR_Green","Weapon_HLC_rifle_XM8_DMAR_OD","Weapon_HLC_rifle_XM8_DMAR_Tan","Weapon_HLC_rifle_XM8_DMAR_Custom","Weapon_HLC_Rifle_XM8_Proto_Carbine","Weapon_HLC_rifle_XM8_Proto_Carbine_Green","Weapon_HLC_rifle_XM8_Proto_Carbine_OD","Weapon_HLC_rifle_XM8_Proto_Carbine_Tan","Weapon_HLC_rifle_XM8_Proto_Carbine_GL","Weapon_HLC_rifle_XM8_Proto_Carbine_GL_Green","Weapon_HLC_rifle_XM8_Proto_Carbine_GL_OD","Weapon_HLC_rifle_XM8_Proto_Carbine_GL_Tan","Weapon_hlc_rifle_XM8_Proto_Compact","Weapon_HLC_rifle_XM8_Proto_Compact_Green","Weapon_HLC_rifle_XM8_Proto_Compact_OD","Weapon_HLC_rifle_XM8_Proto_Compact_Tan","Weapon_hlc_rifle_XM8_Proto_DMAR","Weapon_HLC_rifle_XM8_Proto_DMAR_Green","Weapon_HLC_rifle_XM8_Proto_DMAR_OD","Weapon_HLC_rifle_XM8_Proto_DMAR_Tan","Weapon_HLC_Rifle_XM8_MWSF_Carbine","Weapon_HLC_rifle_XM8_MWSF_Carbine_Green","Weapon_HLC_rifle_XM8_MWSF_Carbine_OD","Weapon_HLC_rifle_XM8_MWSF_Carbine_Tan","Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL","Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL_Green","Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL_OD","Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL_Tan","Weapon_hlc_rifle_XM8_MWSF_Compact","Weapon_HLC_Rifle_XM8_MWSF_Compact_Green","Weapon_HLC_Rifle_XM8_MWSF_Compact_OD","Weapon_HLC_Rifle_XM8_MWSF_Compact_Tan","Weapon_hlc_rifle_XM8_MWSF_DMAR","Weapon_HLC_Rifle_XM8_MWSF_DMAR_Green","Weapon_HLC_Rifle_XM8_MWSF_DMAR_OD","Weapon_HLC_Rifle_XM8_MWSF_DMAR_Tan"};
		weapons[] = {"HLC_optic_RCO_PCAP_green","HLC_optic_RCO_PCAP_OD","HLC_optic_RCO_PCAP_Tan","HLC_optic_AMO_PCAP","HLC_Acc_Flashlight_PCAP","HLC_Acc_VFG_PCAP_green","HLC_Acc_VFG_PCAP_OD","HLC_Acc_VFG_PCAP_Tan","HLC_Acc_ISM_PCAP_Laser","HLC_Acc_AMO_PCAP_Laser","HLC_rifle_XM8_Carbine","HLC_rifle_XM8_Carbine_Grip","HLC_rifle_XM8_Carbine_Green","HLC_rifle_XM8_Carbine_Green_Grip","HLC_rifle_XM8_Carbine_OD","HLC_rifle_XM8_Carbine_OD_Grip","HLC_rifle_XM8_Carbine_Tan","HLC_rifle_XM8_Carbine_tan_Grip","HLC_rifle_XM8_Carbine_Fish","HLC_rifle_XM8_Carbine_fish_Grip","HLC_rifle_XM8_Carbine_GL","HLC_rifle_XM8_Carbine_GL_green","HLC_rifle_XM8_Carbine_GL_OD","HLC_rifle_XM8_Carbine_GL_Tan","hlc_rifle_XM8_Compact","HLC_rifle_XM8_Compact_Grip","HLC_rifle_XM8_Compact_Green","HLC_rifle_XM8_Compact_Green_Grip","HLC_rifle_XM8_Compact_OD","HLC_rifle_XM8_Compact_OD_Grip","HLC_rifle_XM8_Compact_Tan","HLC_rifle_XM8_Compact_Tan_Grip","hlc_rifle_XM8_DMAR","HLC_rifle_XM8_DMAR_Grip","HLC_rifle_XM8_DMAR_Green","HLC_rifle_XM8_DMAR_Green_Grip","HLC_rifle_XM8_DMAR_OD","HLC_rifle_XM8_DMAR_OD_Grip","HLC_rifle_XM8_DMAR_Tan","HLC_rifle_XM8_DMAR_Tan_Grip","HLC_rifle_XM8_DMAR_Custom","HLC_rifle_XM8_DMAR_custom_Grip","HLC_Rifle_XM8_Proto_Carbine","HLC_rifle_XM8_Proto_Carbine_Grip","HLC_rifle_XM8_Proto_Carbine_Green","HLC_rifle_XM8_Proto_Carbine_Green_Grip","HLC_rifle_XM8_Proto_Carbine_OD","HLC_rifle_XM8_Proto_Carbine_OD_Grip","HLC_rifle_XM8_Proto_Carbine_Tan","HLC_rifle_XM8_Proto_Carbine_Tan_Grip","HLC_rifle_XM8_Proto_Carbine_GL","HLC_rifle_XM8_Proto_Carbine_GL_Green","HLC_rifle_XM8_Proto_Carbine_GL_OD","HLC_rifle_XM8_Proto_Carbine_GL_Tan","hlc_rifle_XM8_Proto_Compact","HLC_rifle_XM8_Proto_Compact_Grip","HLC_rifle_XM8_Proto_Compact_Green","HLC_rifle_XM8_Proto_Compact_Green_Grip","HLC_rifle_XM8_Proto_Compact_OD","HLC_rifle_XM8_Proto_Compact_OD_Grip","HLC_rifle_XM8_Proto_Compact_Tan","HLC_rifle_XM8_Proto_Compact_Tan_Grip","hlc_rifle_XM8_Proto_DMAR","HLC_rifle_XM8_Proto_DMAR_Grip","HLC_rifle_XM8_Proto_DMAR_Green","HLC_rifle_XM8_Proto_DMAR_Green_Grip","HLC_rifle_XM8_Proto_DMAR_OD","HLC_rifle_XM8_Proto_DMAR_OD_Grip","HLC_rifle_XM8_Proto_DMAR_Tan","HLC_rifle_XM8_Proto_DMAR_Tan_Grip","HLC_Rifle_XM8_MWSF_Carbine","HLC_rifle_XM8_MWSF_Carbine_Grip","HLC_rifle_XM8_MWSF_Carbine_Green","HLC_rifle_XM8_MWSF_Carbine_Green_Grip","HLC_rifle_XM8_MWSF_Carbine_OD","HLC_rifle_XM8_MWSF_Carbine_OD_Grip","HLC_rifle_XM8_MWSF_Carbine_Tan","HLC_rifle_XM8_MWSF_Carbine_Tan_Grip","HLC_Rifle_XM8_MWSF_Carbine_GL","HLC_Rifle_XM8_MWSF_Carbine_GL_Green","HLC_Rifle_XM8_MWSF_Carbine_GL_OD","HLC_Rifle_XM8_MWSF_Carbine_GL_Tan","hlc_rifle_XM8_MWSF_Compact","HLC_rifle_XM8_MWSF_Compact_Grip","HLC_Rifle_XM8_MWSF_Compact_Green","HLC_rifle_XM8_MWSF_Compact_Green_Grip","HLC_Rifle_XM8_MWSF_Compact_OD","HLC_rifle_XM8_MWSF_Compact_OD_Grip","HLC_Rifle_XM8_MWSF_Compact_Tan","HLC_rifle_XM8_MWSF_Compact_Tan_Grip","hlc_rifle_XM8_MWSF_DMAR","HLC_rifle_XM8_MWSF_DMAR_Grip","HLC_Rifle_XM8_MWSF_DMAR_Green","HLC_rifle_XM8_MWSF_DMAR_Green_Grip","HLC_Rifle_XM8_MWSF_DMAR_OD","HLC_rifle_XM8_MWSF_DMAR_OD_Grip","HLC_Rifle_XM8_MWSF_DMAR_Tan","HLC_rifle_XM8_MWSF_DMAR_tan_Grip"};
		magazines[] = {};
		version = "v1.0";
		author = "toadie";
	};
};
class cfgMods
{
	class Niarms_XM8
	{
		name = "NIArsenal: XM8 Rifles";
		picture = "nia_wp_xm8\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "nia_wp_xm8\tex\ui\NIArms1_ca.paa";
		logoOver = "nia_wp_xm8\tex\ui\NIArms1_ca.paa";
		logoSmall = "nia_wp_xm8\tex\ui\NIArms1_ca.paa";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		HLC_optic_ISM1400A7 = 1;
	};
};
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class nia_rifle_bipodsgrips_slot;
class nia_rifle_gripod_slot;
class nia_charms_slot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class nia_rifle_grips_slot: nia_rifle_gripod_slot
{
	linkProxy = "\hlc_core\mesh\nia_grip_proxy";
	class compatibleItems{};
};
class niarms_XM8_PCAP_Optic: asdg_OpticRail
{
	class compatibleItems
	{
		HLC_optic_ISM_PCAP = 1;
		HLC_optic_RCO_PCAP = 1;
		HLC_optic_RCO_PCAP_Green = 1;
		HLC_optic_RCO_PCAP_OD = 1;
		HLC_optic_RCO_PCAP_Tan = 1;
		HLC_optic_AMO_PCAP = 1;
	};
};
class asdg_SlotInfo;
class niarms_XM8_PCAP_Accessory: asdg_SlotInfo
{
	linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
	displayName = "$STR_A3_PointerSlot0";
	iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
	class compatibleItems
	{
		HLC_Acc_Flashlight_PCAP = 1;
	};
};
class niarms_XM8_Laser_Accessory: asdg_SlotInfo
{
	linkProxy = "\nia_wp_XM8\mesh\nia_lasers_proxy";
	displayName = "$STR_A3_PointerSlot0";
	iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
	class compatibleItems
	{
		HLC_Acc_ISM_PCAP_Laser = 1;
		HLC_Acc_AMO_PCAP_Laser = 1;
	};
};
class UnderBarrelSlot;
class niarms_XM8_PCAP_Underbarrel: UnderBarrelSlot
{
	class compatibleItems
	{
		HLC_Acc_VFG_PCAP = 1;
		HLC_Acc_VFG_PCAP_Green = 1;
		HLC_Acc_VFG_PCAP_OD = 1;
		HLC_Acc_VFG_PCAP_Tan = 1;
	};
};
class CfgVehicles
{
	dlc = "Niarms_XM8";
	class B_supplyCrate_F;
	class HLC_XM8_ammobox: B_supplyCrate_F
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC XM8 Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		hiddenSelectionsTextures[] = {"hlc_core\tex\supplydrop\NIA_supplydrop_XM8_co.paa"};
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 60;
			};
			class _xx_hlc_30rnd_556x45_SOST_G36
			{
				magazine = "hlc_30rnd_556x45_SOST_G36";
				count = 60;
			};
			class _xx_hlc_30rnd_556x45_SPR_G36
			{
				magazine = "hlc_30rnd_556x45_SPR_G36";
				count = 60;
			};
			class _xx_hlc_30rnd_556x45_S_G36
			{
				magazine = "hlc_30rnd_556x45_S_G36";
				count = 60;
			};
			class _xx_hlc_30rnd_556x45_Tracers_G36
			{
				magazine = "hlc_30rnd_556x45_Tracers_G36";
				count = 60;
			};
			class _xx_hlc_30rnd_556x45_MDIM_G36
			{
				magazine = "hlc_30rnd_556x45_MDIM_G36";
				count = 60;
			};
			class _xx_hlc_30rnd_556x45_TDIM_G36
			{
				magazine = "hlc_30rnd_556x45_TDIM_G36";
				count = 60;
			};
			class _xx_hlc_100rnd_556x45_EPR_G36
			{
				magazine = "hlc_100rnd_556x45_EPR_G36";
				count = 60;
			};
			class _xx_hlc_100rnd_556x45_M_G36
			{
				magazine = "hlc_100rnd_556x45_M_G36";
				count = 60;
			};
			class _xx_hlc_100rnd_556x45_Mdim_G36
			{
				magazine = "hlc_100rnd_556x45_Mdim_G36";
				count = 60;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 60;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 60;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 60;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 60;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine = "UGL_FlareYellow_F";
				count = 60;
			};
			class _xx_UGL_FlareCIR_F
			{
				magazine = "UGL_FlareCIR_F";
				count = 60;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 60;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 60;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 60;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 60;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 60;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 60;
			};
		};
		class TransportWeapons
		{
			class _xx_HLC_rifle_XM8_Carbine
			{
				weapon = "HLC_rifle_XM8_Carbine";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_Green
			{
				weapon = "HLC_rifle_XM8_Carbine_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_OD
			{
				weapon = "HLC_rifle_XM8_Carbine_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_Tan
			{
				weapon = "HLC_rifle_XM8_Carbine_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_GL
			{
				weapon = "HLC_rifle_XM8_Carbine_GL";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_GL_Green
			{
				weapon = "HLC_rifle_XM8_Carbine_GL_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_GL_OD
			{
				weapon = "HLC_rifle_XM8_Carbine_GL_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_GL_Tan
			{
				weapon = "HLC_rifle_XM8_Carbine_GL_Tan";
				count = 10;
			};
			class _xx_hlc_rifle_XM8_Compact
			{
				weapon = "hlc_rifle_XM8_Compact";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Compact_Green
			{
				weapon = "HLC_rifle_XM8_Compact_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Compact_OD
			{
				weapon = "HLC_rifle_XM8_Compact_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Compact_Tan
			{
				weapon = "HLC_rifle_XM8_Compact_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_DMAR_OD
			{
				weapon = "HLC_rifle_XM8_DMAR_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_DMAR_Green
			{
				weapon = "HLC_rifle_XM8_DMAR_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_DMAR_Tan
			{
				weapon = "HLC_rifle_XM8_DMAR_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_DMAR_Custom
			{
				weapon = "HLC_rifle_XM8_DMAR_Custom";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Carbine_Fish
			{
				weapon = "HLC_rifle_XM8_Carbine_Fish";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine_Green
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine_OD
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine_GL
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine_GL_Green
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine_GL_OD
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Carbine_GL_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL_Tan";
				count = 10;
			};
			class _xx_hlc_rifle_XM8_Proto_Compact
			{
				weapon = "hlc_rifle_XM8_Proto_Compact";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Compact_Green
			{
				weapon = "HLC_rifle_XM8_Proto_Compact_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Compact_OD
			{
				weapon = "HLC_rifle_XM8_Proto_Compact_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_Compact_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_Compact_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_DMAR_OD
			{
				weapon = "HLC_rifle_XM8_Proto_DMAR_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_DMAR_Green
			{
				weapon = "HLC_rifle_XM8_Proto_DMAR_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_Proto_DMAR_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_DMAR_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine_Green
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine_OD
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine_Tan
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine_GL
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_GL";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine_GL_Green
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_GL_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine_GL_OD
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_GL_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Carbine_GL_Tan
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_GL_Tan";
				count = 10;
			};
			class _xx_hlc_rifle_XM8_MWSF_Compact
			{
				weapon = "hlc_rifle_XM8_MWSF_Compact";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Compact_Green
			{
				weapon = "HLC_rifle_XM8_MWSF_Compact_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Compact_OD
			{
				weapon = "HLC_rifle_XM8_MWSF_Compact_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_Compact_Tan
			{
				weapon = "HLC_rifle_XM8_MWSF_Compact_Tan";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_DMAR_OD
			{
				weapon = "HLC_rifle_XM8_MWSF_DMAR_OD";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_DMAR_Green
			{
				weapon = "HLC_rifle_XM8_MWSF_DMAR_Green";
				count = 10;
			};
			class _xx_HLC_rifle_XM8_MWSF_DMAR_Tan
			{
				weapon = "HLC_rifle_XM8_MWSF_DMAR_Tan";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_HLC_optic_ISM_PCAP
			{
				name = "HLC_optic_ISM_PCAP";
				count = 10;
			};
			class _xx_HLC_optic_RCO_PCAP
			{
				name = "HLC_optic_RCO_PCAP";
				count = 10;
			};
			class _xx_HLC_optic_RCO_PCAP_green
			{
				name = "HLC_optic_RCO_PCAP_green";
				count = 10;
			};
			class _xx_HLC_optic_RCO_PCAP_OD
			{
				name = "HLC_optic_RCO_PCAP_OD";
				count = 10;
			};
			class _xx_HLC_optic_RCO_PCAP_Tan
			{
				name = "HLC_optic_RCO_PCAP_Tan";
				count = 10;
			};
			class _xx_HLC_optic_AMO_PCAP
			{
				name = "HLC_optic_AMO_PCAP";
				count = 10;
			};
			class _xx_HLC_optic_ISM1400A7
			{
				name = "HLC_optic_ISM1400A7";
				count = 10;
			};
			class _xx_HLC_Acc_Flashlight_PCAP
			{
				name = "HLC_Acc_Flashlight_PCAP";
				count = 10;
			};
			class _xx_HLC_Acc_VFG_PCAP
			{
				name = "HLC_Acc_VFG_PCAP";
				count = 10;
			};
			class _xx_HLC_Acc_VFG_PCAP_Green
			{
				name = "HLC_Acc_VFG_PCAP_Green";
				count = 10;
			};
			class _xx_HLC_Acc_VFG_PCAP_OD
			{
				name = "HLC_Acc_VFG_PCAP_OD";
				count = 10;
			};
			class _xx_HLC_Acc_VFG_PCAP_Tan
			{
				name = "HLC_Acc_VFG_PCAP_Tan";
				count = 10;
			};
		};
	};
	class Weapon_Base_F;
	class Weapon_HLC_rifle_XM8_Carbine: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine
			{
				weapon = "HLC_rifle_XM8_Carbine";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_Green
			{
				weapon = "HLC_rifle_XM8_Carbine_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_OD
			{
				weapon = "HLC_rifle_XM8_Carbine_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_Tan
			{
				weapon = "HLC_rifle_XM8_Carbine_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_Fish: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine(Bass)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_Fish
			{
				weapon = "HLC_rifle_XM8_Carbine_Fish";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_GL: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine (GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_GL
			{
				weapon = "HLC_rifle_XM8_Carbine_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_GL_green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine (GL/Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_GL_green
			{
				weapon = "HLC_rifle_XM8_Carbine_GL_green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_GL_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine (GL/OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_GL_OD
			{
				weapon = "HLC_rifle_XM8_Carbine_GL_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Carbine_GL_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine (GL/Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Carbine_GL_Tan
			{
				weapon = "HLC_rifle_XM8_Carbine_GL_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_XM8_Compact: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_XM8_Compact
			{
				weapon = "hlc_rifle_XM8_Compact";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Compact_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Compact_Green
			{
				weapon = "HLC_rifle_XM8_Compact_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Compact_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Compact_OD
			{
				weapon = "HLC_rifle_XM8_Compact_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Compact_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Compact_Tan
			{
				weapon = "HLC_rifle_XM8_Compact_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_XM8_DMAR: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_XM8_DMAR
			{
				weapon = "hlc_rifle_XM8_DMAR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_DMAR_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_DMAR_Green
			{
				weapon = "HLC_rifle_XM8_DMAR_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_DMAR_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_DMAR_OD
			{
				weapon = "HLC_rifle_XM8_DMAR_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_DMAR_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_DMAR_Tan
			{
				weapon = "HLC_rifle_XM8_DMAR_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_DMAR_Custom: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR(Shark-nose)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_DMAR_Custom
			{
				weapon = "HLC_rifle_XM8_DMAR_Custom";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_Proto_Carbine: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_Proto_Carbine
			{
				weapon = "HLC_Rifle_XM8_Proto_Carbine";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Carbine_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Carbine_Green
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Carbine_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Carbine_OD
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Carbine_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Carbine_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Carbine_GL: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype(GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Carbine_GL
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Carbine_GL_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype(GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Carbine_GL_Green
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Carbine_GL_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype(GL/OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Carbine_GL_OD
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Carbine_GL_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Carbine Prototype(GL/Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Carbine_GL_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_Carbine_GL_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_XM8_Proto_Compact: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact Prototype";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_XM8_Proto_Compact
			{
				weapon = "hlc_rifle_XM8_Proto_Compact";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Compact_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact Prototype(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Compact_Green
			{
				weapon = "HLC_rifle_XM8_Proto_Compact_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Compact_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact Prototype(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Compact_OD
			{
				weapon = "HLC_rifle_XM8_Proto_Compact_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_Compact_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 Compact Prototype(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_Compact_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_Compact_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_XM8_Proto_DMAR: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR Prototype";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_XM8_Proto_DMAR
			{
				weapon = "hlc_rifle_XM8_Proto_DMAR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_DMAR_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR Prototype(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_DMAR_Green
			{
				weapon = "HLC_rifle_XM8_Proto_DMAR_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_DMAR_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR Prototype(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_DMAR_OD
			{
				weapon = "HLC_rifle_XM8_Proto_DMAR_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_Proto_DMAR_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 DMAR Prototype(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_Proto_DMAR_Tan
			{
				weapon = "HLC_rifle_XM8_Proto_DMAR_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Carbine: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Carbine
			{
				weapon = "HLC_Rifle_XM8_MWSF_Carbine";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_MWSF_Carbine_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_MWSF_Carbine_Green
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_MWSF_Carbine_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_MWSF_Carbine_OD
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_rifle_XM8_MWSF_Carbine_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_rifle_XM8_MWSF_Carbine_Tan
			{
				weapon = "HLC_rifle_XM8_MWSF_Carbine_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine (GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Carbine_GL
			{
				weapon = "HLC_Rifle_XM8_MWSF_Carbine_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine (GL/Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Carbine_GL_Green
			{
				weapon = "HLC_Rifle_XM8_MWSF_Carbine_GL_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine (GL/OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Carbine_GL_OD
			{
				weapon = "HLC_Rifle_XM8_MWSF_Carbine_GL_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Carbine_GL_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Carbine (GL/Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Carbine_GL_Tan
			{
				weapon = "HLC_Rifle_XM8_MWSF_Carbine_GL_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_XM8_MWSF_Compact: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Compact";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_XM8_MWSF_Compact
			{
				weapon = "hlc_rifle_XM8_MWSF_Compact";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Compact_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Compact(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Compact_Green
			{
				weapon = "HLC_Rifle_XM8_MWSF_Compact_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Compact_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Compact(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Compact_OD
			{
				weapon = "HLC_Rifle_XM8_MWSF_Compact_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_Compact_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF Compact(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_Compact_Tan
			{
				weapon = "HLC_Rifle_XM8_MWSF_Compact_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_XM8_MWSF_DMAR: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF DMAR";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_XM8_MWSF_DMAR
			{
				weapon = "hlc_rifle_XM8_MWSF_DMAR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_DMAR_Green: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF DMAR(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_DMAR_Green
			{
				weapon = "HLC_Rifle_XM8_MWSF_DMAR_Green";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_DMAR_OD: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF DMAR(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_DMAR_OD
			{
				weapon = "HLC_Rifle_XM8_MWSF_DMAR_OD";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_XM8_MWSF_DMAR_Tan: Weapon_Base_F
	{
		dlc = "Niarms_XM8";
		scope = 2;
		scopeCurator = 2;
		displayName = "XM8 MWSF DMAR(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_XM8_MWSF_DMAR_Tan
			{
				weapon = "HLC_Rifle_XM8_MWSF_DMAR_Tan";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_G36
			{
				magazine = "hlc_30rnd_556x45_EPR_G36";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class optic_Arco;
	//class hlc_G36_base: Rifle_Base_F{};
	class UK3CB_G36_base: Rifle_Base_F{};
	class HLC_optic_ISM_PCAP: optic_Arco
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		descriptionshort = "$STR_NIA_ISM_DESC";
		displayname = "$STR_NIA_optic_ISM";
		model = "NIA_WP_XM8\mesh\acc\ISM_PCAP.p3d";
		picture = "\NIA_WP_XM8\tex\UI\gear_ISM-IR_ca.paa";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6.7797995;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 0;
			class OpticsModes
			{
				class ACO
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		tmr_optics_enhanced = 0;
	};
	class HLC_optic_ISM1400A7: HLC_optic_ISM_PCAP
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		descriptionshort = "$STR_NIA_ISM_DESC";
		displayname = "$STR_NIA_optic_ISM-1400-A7";
		model = "NIA_WP_XM8\mesh\acc\ISM-1400-A7.p3d";
		picture = "\NIA_WP_XM8\tex\UI\gear_ISM_1400A7_ca.paa";
	};
	class HLC_optic_RCO_PCAP: optic_Arco
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		descriptionshort = "$STR_NIA_RCO_DESC";
		displayname = "$STR_NIA_optic_RCO";
		model = "NIA_WP_XM8\mesh\acc\RCO_PCAP.p3d";
		picture = "\NIA_WP_XM8\tex\UI\gear_RCO_ca.paa";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6.54;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 0;
			class OpticsModes
			{
				class ACO
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		tmr_optics_enhanced = 0;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Prototype_RCO_co.paa"};
	};
	class HLC_optic_RCO_PCAP_green: HLC_optic_RCO_PCAP
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_optic_RCO_green";
		picture = "\NIA_WP_XM8\tex\UI\gear_RCO_green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Prototype_RCO_green_co.paa"};
		model = "NIA_WP_XM8\mesh\acc\RCO_PCAP_green.p3d";
	};
	class HLC_optic_RCO_PCAP_OD: HLC_optic_RCO_PCAP
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_optic_RCO_OD";
		picture = "\NIA_WP_XM8\tex\UI\gear_RCO-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Prototype_RCO_OD_co.paa"};
		model = "NIA_WP_XM8\mesh\acc\RCO_PCAP_OD.p3d";
	};
	class HLC_optic_RCO_PCAP_Tan: HLC_optic_RCO_PCAP
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_optic_RCO_Tan";
		picture = "\NIA_WP_XM8\tex\UI\gear_RCO-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Prototype_RCO_Tan_co.paa"};
		model = "NIA_WP_XM8\mesh\acc\RCO_PCAP_Tan.p3d";
	};
	class HLC_optic_AMO_PCAP: ItemCore
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		descriptionshort = "$STR_NIA_AMO_DESC";
		displayname = "$STR_NIA_optic_AMO";
		model = "NIA_WP_XM8\mesh\acc\AMO_PCAP.p3d";
		picture = "\NIA_WP_XM8\tex\UI\gear_AMO_ca.paa";
		class CBA_ScriptedOptic
		{
			reticleTexture = "nia_wp_XM8\tex\AMO_Reticle_ca.paa";
			reticleTextureSize = 0.5;
			bodyTexture = "nia_wp_XM8\tex\AMO_Scopebody_ca.paa";
			bodyTextureNight = "nia_wp_XM8\tex\AMO_Scopebody_Night_ca.paa";
			bodyTextureSize = 1.5;
			hideRedDotMagnification = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8.72;
			opticType = 1;
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					memorypointcamera = "opticview";
					cameradir = "look_dir";
					opticsid = 1;
					visionmode[] = {"Normal"};
				};
				class Iron: Snip
				{
					cameradir = "";
					distancezoommax = 100;
					distancezoommin = 100;
					memorypointcamera = "AOTT";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 2;
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
	};
	class InventoryFlashLightItem_Base_F;
	class HLC_Acc_Flashlight_PCAP: ItemCore
	{
		dlc = "hlcweapons_XM8";
		author = "Toadie";
		_generalMacro = "acc_flashlight";
		scope = 2;
		displayName = "$STR_NIA_acc_flashlight_PCAP";
		descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
		picture = "\NIA_WP_XM8\tex\UI\gear_Flashlight_ca.paa";
		model = "nia_wp_XM8\mesh\acc\Flashlight_PCAP.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.6705;
			class FlashLight
			{
				position = "flash";
				direction = "flashdir";
				color[] = {25,22,20};
				ambient[] = {0.001,0.001,0.001};
				size = 1;
				innerAngle = 50;
				outerAngle = 120;
				coneFadeCoef = 10;
				intensity = 330;
				useFlare = 1;
				dayLight = 1;
				FlareSize = 0.7;
				onlyInNvg = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 1;
					quadratic = 75;
				};
				scale[] = {0};
			};
		};
		inertia = 0.05;
	};
	class bipod_01_F_snd: ItemCore
	{
		class ItemInfo;
	};
	class HLC_Acc_VFG_PCAP: bipod_01_F_snd
	{
		dlc = "Niarms_Core";
		author = "Toadie";
		displayName = "$STR_NIA_acc_VFG_PCAP";
		descriptionShort = "$STR_NIA_bipod_VFG";
		weaponInfoType = "NIArms_Rsc_Grip";
		model = "nia_wp_XM8\mesh\acc\VFG_PCAP.p3d";
		picture = "\NIA_WP_XM8\tex\UI\gear_VFG_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 1.5957599;
			hasBipod = 0;
		};
		NIA_grip_type = "VFG";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_PCAP_VFG_co.paa"};
	};
	class HLC_Acc_VFG_PCAP_green: HLC_Acc_VFG_PCAP
	{
		scope = 2;
		displayName = "$STR_NIA_acc_VFG_PCAP_green";
		picture = "\NIA_WP_XM8\tex\UI\gear_VFG_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_PCAP_VFG_green_co.paa"};
		model = "nia_wp_XM8\mesh\acc\VFG_PCAP_green.p3d";
	};
	class HLC_Acc_VFG_PCAP_OD: HLC_Acc_VFG_PCAP
	{
		scope = 2;
		displayName = "$STR_NIA_acc_VFG_PCAP_OD";
		picture = "\NIA_WP_XM8\tex\UI\gear_VFG-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_PCAP_VFG_OD_co.paa"};
		model = "nia_wp_XM8\mesh\acc\VFG_PCAP_OD.p3d";
	};
	class HLC_Acc_VFG_PCAP_Tan: HLC_Acc_VFG_PCAP
	{
		scope = 2;
		displayName = "$STR_NIA_acc_VFG_PCAP_Tan";
		picture = "\NIA_WP_XM8\tex\UI\gear_VFG-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_PCAP_VFG_Tan_co.paa"};
		model = "nia_wp_XM8\mesh\acc\VFG_PCAP_Tan.p3d";
	};
	class HLC_Acc_ISM_PCAP_Laser: ItemCore
	{
		dlc = "hlcweapons_XM8";
		author = "Toadie";
		_generalMacro = "acc_flashlight";
		scope = 2;
		scopeArsenal = 0;
		displayName = "$STR_NIA_acc_ILASER";
		descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
		picture = "\NIA_WP_XM8\tex\UI\gear_ISMILM_ca.paa";
		model = "nia_wp_XM8\mesh\acc\ISM_PCAP_Laser.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.1799997e-06;
			class Pointer
			{
				irLaserPos = "flash";
				irLaserEnd = "flash dir";
				irDistance = 5;
			};
		};
	};
	class HLC_Acc_AMO_PCAP_Laser: HLC_Acc_ISM_PCAP_Laser
	{
		scope = 2;
		scopeArsenal = 0;
		picture = "\NIA_WP_XM8\tex\UI\gear_AMOILM_ca.paa";
		model = "nia_wp_XM8\mesh\acc\AMO_PCAP_Laser.p3d";
	};
	class hlc_XM8_base: UK3CB_G36_base
	{
		scope = 1;
		recoil = "recoil_mk20";
		maxZeroing = 1600;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		magazineReloadSwitchPhase = 0.5;
		magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_SOST_G36","hlc_100rnd_556x45_EPR_G36","hlc_30rnd_556x45_SPR_G36","hlc_30rnd_556x45_Tracers_G36","hlc_30rnd_556x45_M_G36","hlc_30rnd_556x45_MDIM_G36","hlc_30rnd_556x45_TDIM_G36","hlc_30rnd_556x45_S_G36","hlc_100rnd_556x45_EPR_G36","hlc_100rnd_556x45_M_G36","hlc_100rnd_556x45_Mdim_G36"};
		magazineWell[] = {"CBA_556x45_G36"};
		class Library
		{
			libTextDesc = "H&K XM8";
		};
		reloadAction = "NIA_GestureReloadG36V";
		reloadmagazinesound[] = {"nia_wp_xm8\snd\G36EV_reload",0.9,1,35};
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 8;
		cameraDir = "";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		//drysound[] = {"hlc_wp_g36\snd\g36_dryfire",1.01,1,10};
		drysound[]=
				{
					"UK3CB_Factions\addons\UK3CB_Factions_Weapons\G36\sounds\g36_dryfire",
					1.01,
					1,
					10
				};		
		//changeFiremodeSound[] = {"\hlc_wp_g36\snd\g36_switch",1,1,8};
		changeFiremodeSound[]=
		{
			"\UK3CB_Factions\addons\UK3CB_Factions_Weapons\G36\sounds\g36_switch",
			1,
			1,
			8
		};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class hlc_GL_XM8_XM320: UGL_F
		{
			cameradir = "gl_look";
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
			discreteDistanceInitIndex = 1;
			displayname = "XM320";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			cursoraim = "gl";
			magazinereloadtime = 0;
			reloadtime = 0.1;
			reloadAction = "NIA_GestureReload_XM320";
			reloadMagazineSound[] = {"hlc_core\sound\GL\agc_reload",1.0,1,10};
			drySound[] = {"hlc_core\sound\GL\GL_drystrike",1,1,10};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = {"hlc_core\sound\GL\GL_striker",1,1,10};
					closure2[] = {"hlc_core\sound\GL\GL_striker",1,1,10};
					soundClosure[] = {"closure1",0.5,"closure2",0.5};
					soundSetShot[] = {"NIA_GL_Shot_SoundSet","NIA_GL_Tail_SoundSet"};
				};
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				aiRateOfFire = 4;
				aiRateOfFireDistance = 50;
				aiRateOfFireDispersion = 4;
				minRange = 60;
				minRangeProbab = 0.45;
				midRange = 200;
				midRangeProbab = 0.65;
				maxRange = 400;
				maxRangeProbab = 0.01;
			};
		};
		soundbullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","AI_Burst_close"};
		class Single: Mode_SemiAuto
		{
			/*
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","g36_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};			
			dispersion = 0.000744704;
			reloadtime = "(60/720)";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class Burst: Mode_Burst
		{
			/*
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","g36_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};			
			dispersion = 0.000744704;
			reloadtime = "(60/720)";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			/*
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","g36_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};	

			dispersion = 0.000744704;
			reloadtime = "(60/755)";
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class Burst2rnd: Burst
		{
			burst = 2;
			textureType = "dual";
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
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
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
	};
	class HLC_rifle_XM8_Carbine: hlc_XM8_base
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		reloadAction = "NIA_GestureReloadG36V";
		reloadmagazinesound[] = {"nia_wp_xm8\snd\G36EV_reload",0.9,1,35};
		handanim[] = {"OFP2_ManSkeleton","nia_wp_xm8\anim\handgesture_XM8_STD.rtm"};
		initspeed = -0.8367556;
		ACE_barrelTwist = 178;
		ACE_barrelLength = 318;
		displayName = "$STR_NIA_rifle_XM8_Baseline";
		descriptionShort = "$STR_NIA_G36_Carbine_DESC";
		discretedistance[] = {100};
		discretedistanceinitindex = 0;
		model = "nia_wp_xm8\mesh\XM8\XM8_Carbine.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_ca.paa";
		mass = 63.22;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 63.22;
			class CowsSlot: niarms_XM8_PCAP_Optic{};
			class UnderBarrelSlot: niarms_XM8_PCAP_Underbarrel{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
			class LaserSlot: niarms_XM8_Laser_Accessory{};
		};
		inertia = 0.29;
		dexterity = 1.6926577;
		aimTransitionSpeed = 1.1848603;
		class Single: Single
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			dispersion = 0.0008727;
			
			sounds[] = {"standardsound","silencedsound"};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};			
		};
		class Burst: Burst
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};		
			dispersion = 0.0008727;
		};
		class FullAuto: FullAuto
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			dispersion = 0.0008727;
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};	

		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
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
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Carbine_Grip";
			default = "HLC_rifle_XM8_Carbine";
		};
		baseWeapon = "HLC_rifle_XM8_Carbine";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_ISM_PCAP";
			};
		};
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_xm320_co.paa"};
	};
	class HLC_rifle_XM8_Carbine_Grip: HLC_rifle_XM8_Carbine
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Carbine_Green: HLC_rifle_XM8_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_Carbine_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Baseline_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Green_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Carbine_Green_Grip";
			default = "HLC_rifle_XM8_Carbine_Green";
		};
	};
	class HLC_rifle_XM8_Carbine_Green_Grip: HLC_rifle_XM8_Carbine_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Carbine_OD: HLC_rifle_XM8_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_Carbine_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Baseline_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_OD_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Carbine_OD_Grip";
			default = "HLC_rifle_XM8_Carbine_OD";
		};
	};
	class HLC_rifle_XM8_Carbine_OD_Grip: HLC_rifle_XM8_Carbine_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Carbine_Tan: HLC_rifle_XM8_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_Carbine_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Baseline_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Tan_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Carbine_tan_Grip";
			default = "HLC_rifle_XM8_Carbine_tan";
		};
	};
	class HLC_rifle_XM8_Carbine_tan_Grip: HLC_rifle_XM8_Carbine_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Carbine_Fish: HLC_rifle_XM8_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_Carbine_Fish";
		displayName = "$STR_NIA_rifle_XM8_Baseline_Fish";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_Fish_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Fish_co.paa",""};
		HiddenSelectionsMaterials[] = {"nia_wp_XM8\mat\XM8_Common.rvmat","nia_wp_XM8\mat\XM8_reciever.rvmat","nia_wp_XM8\mat\XM8_Stocks.rvmat","nia_wp_XM8\mat\XM8_Foregrip_STD_Fish.rvmat",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Carbine_fish_Grip";
			default = "HLC_rifle_XM8_Carbine_fish";
		};
	};
	class HLC_rifle_XM8_Carbine_fish_Grip: HLC_rifle_XM8_Carbine_fish
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Carbine_GL: HLC_rifle_XM8_Carbine
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Baseline_GL";
		descriptionShort = "$STR_NIA_G36_Carbine_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_Carbine_GL.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine-GL_ca.paa";
		handanim[] = {"OFP2_ManSkeleton","nia_wp_xm8\anim\handgesture_XM8_XM320.rtm"};
		muzzles[] = {"this","hlc_GL_XM8_XM320"};
		baseWeapon = "HLC_rifle_XM8_Carbine_GL";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_ISM_PCAP";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95.92;
			class CowsSlot: niarms_XM8_PCAP_Optic{};
			class UnderBarrelSlot{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
		};
		inertia = "(0.29+0.15)";
		dexterity = 1.2520791;
		aimTransitionSpeed = 0.87645537;
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_co.paa",""};
	};
	class HLC_rifle_XM8_Carbine_GL_green: HLC_rifle_XM8_Carbine_GL
	{
		baseWeapon = "HLC_rifle_XM8_Carbine_GL_green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Baseline_GL_green";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_GL_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_green_co.paa",""};
	};
	class HLC_rifle_XM8_Carbine_GL_OD: HLC_rifle_XM8_Carbine_GL
	{
		baseWeapon = "HLC_rifle_XM8_Carbine_GL_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Baseline_GL_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_GL-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_OD_co.paa",""};
	};
	class HLC_rifle_XM8_Carbine_GL_Tan: HLC_rifle_XM8_Carbine_GL
	{
		baseWeapon = "HLC_rifle_XM8_Carbine_GL_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Baseline_GL_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_GL-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_Tan_co.paa",""};
	};
	class hlc_rifle_XM8_Compact: hlc_XM8_base
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		ACE_barrelTwist = 178;
		ACE_barrelLength = 229;
		initspeed = -0.7392197;
		scope = 2;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		displayName = "$STR_NIA_rifle_XM8_Compact";
		descriptionShort = "$STR_NIA_G36_Compact_DESC";
		handanim[] = {"OFP2_ManSkeleton","nia_wp_xm8\anim\handgesture_XM8_STD.rtm"};
		discretedistance[] = {100};
		discretedistanceinitindex = 1;
		mass = 57.115997;
		model = "nia_wp_xm8\mesh\XM8\XM8_Compact.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_Compact_ca.paa";
		memoryPointCamera = "eye";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 57.115997;
			class CowsSlot: niarms_XM8_PCAP_Optic{};
			class UnderBarrelSlot: niarms_XM8_PCAP_Underbarrel{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
			class LaserSlot: niarms_XM8_Laser_Accessory{};
		};
		inertia = 0.262;
		dexterity = 1.8307517;
		aimTransitionSpeed = 1.2815261;
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36C_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			dispersion = 0.0010763301;

			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};			
			
		};
		class Burst: Burst
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36C_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			dispersion = 0.0010763301;

			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};	
		};
		class FullAuto: FullAuto
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36C_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};			
			dispersion = 0.0010763301;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
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
		};
		baseWeapon = "hlc_rifle_XM8_Compact";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_ISM_PCAP";
			};
		};
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Compact_Grip";
			default = "HLC_rifle_XM8_Compact";
		};
	};
	class HLC_rifle_XM8_Compact_Grip: hlc_rifle_XM8_Compact
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Compact_Green: HLC_rifle_XM8_Compact
	{
		baseWeapon = "HLC_rifle_XM8_Compact_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Compact_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_Compact_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_Green_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Compact_Green_Grip";
			default = "HLC_rifle_XM8_Compact_Green";
		};
	};
	class HLC_rifle_XM8_Compact_Green_Grip: HLC_rifle_XM8_Compact_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Compact_OD: HLC_rifle_XM8_Compact
	{
		baseWeapon = "HLC_rifle_XM8_Compact_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Compact_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_Compact-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_OD_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Compact_OD_Grip";
			default = "HLC_rifle_XM8_Compact_OD";
		};
	};
	class HLC_rifle_XM8_Compact_OD_Grip: HLC_rifle_XM8_Compact_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Compact_Tan: HLC_rifle_XM8_Compact
	{
		baseWeapon = "HLC_rifle_XM8_Compact_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Compact_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_Compact-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_Tan_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Compact_Tan_Grip";
			default = "HLC_rifle_XM8_Compact_Tan";
		};
	};
	class HLC_rifle_XM8_Compact_Tan_Grip: HLC_rifle_XM8_Compact_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class hlc_rifle_XM8_DMAR: hlc_XM8_base
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		ACE_barrelTwist = 178;
		ACE_barrelLength = 508;
		initspeed = -1;
		scope = 2;
		deployedpivot = "deploypivot";
		hasBipod = 1;
		displayName = "$STR_NIA_rifle_XM8_Marksman";
		descriptionShort = "$STR_NIA_MG36_DESC";
		handanim[] = {"OFP2_ManSkeleton","nia_wp_xm8\anim\handgesture_XM8_STD.rtm"};
		discretedistance[] = {100};
		discretedistanceinitindex = 1;
		mass = 69.76;
		model = "nia_wp_xm8\mesh\XM8\XM8_DMAR.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_DMAR_ca.paa";
		memoryPointCamera = "eye";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 69.76;
			class CowsSlot: niarms_XM8_PCAP_Optic{};
			class UnderBarrelSlot: niarms_XM8_PCAP_Underbarrel{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
			class LaserSlot: niarms_XM8_Laser_Accessory{};
		};
		inertia = 0.32;
		dexterity = 1.5715089;
		aimTransitionSpeed = 1.1000562;
		modes[] = {"Single","FullAuto","close","short","medium","medium_burst","far","veryfar","far_optic1","toofar_optic1","far_optic2","toofar_optic2"};
		class Single: Single
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};	
			dispersion = 0.000450895;
		};
		class Burst: Burst
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};			
			dispersion = 0.000450895;
		};
		class FullAuto: FullAuto
		{
			/*
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_G36_NEW_Shot_SoundSet","NIA_xm8_tail_SoundSet"};
			};
			*/
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};			
			dispersion = 0.000450895;
		};
		class close: FullAuto
		{
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
			showToPlayer = 0;
		};
		class short: close
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
		};
		class medium: close
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
		};
		class medium_burst: close
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
		};
		class far: close
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
		};
		class veryfar: close
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
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
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
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class toofar_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
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
		};
		class toofar_optic2: far_optic2
		{
			requiredOpticType = 2;
			showToPlayer = 0;
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
		};
		baseWeapon = "hlc_rifle_XM8_DMAR";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_AMO_PCAP";
			};
		};
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_DMAR_Grip";
			default = "HLC_rifle_XM8_DMAR";
		};
	};
	class HLC_rifle_XM8_DMAR_Grip: HLC_rifle_XM8_DMAR
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_DMAR_Green: HLC_rifle_XM8_DMAR
	{
		baseWeapon = "HLC_rifle_XM8_DMAR_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Marksman_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_DMAR_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Green_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_DMAR_Green_Grip";
			default = "HLC_rifle_XM8_DMAR_Green";
		};
	};
	class HLC_rifle_XM8_DMAR_Green_Grip: HLC_rifle_XM8_DMAR_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_DMAR_OD: HLC_rifle_XM8_DMAR
	{
		baseWeapon = "HLC_rifle_XM8_DMAR_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Marksman_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_DMAR-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_OD_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_DMAR_OD_Grip";
			default = "HLC_rifle_XM8_DMAR_OD";
		};
	};
	class HLC_rifle_XM8_DMAR_OD_Grip: HLC_rifle_XM8_DMAR_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_DMAR_Tan: HLC_rifle_XM8_DMAR
	{
		baseWeapon = "HLC_rifle_XM8_DMAR_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Marksman_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_DMAR-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Tan_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_DMAR_Tan_Grip";
			default = "HLC_rifle_XM8_DMAR_Tan";
		};
	};
	class HLC_rifle_XM8_DMAR_Tan_Grip: HLC_rifle_XM8_DMAR_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_DMAR_Custom: HLC_rifle_XM8_DMAR
	{
		baseWeapon = "HLC_rifle_XM8_DMAR_Custom";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Marksman_Custom";
		picture = "\nia_wp_xm8\tex\ui\XM8_DMAR_Custom_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Custom_co.paa",""};
		HiddenSelectionsMaterials[] = {"nia_wp_XM8\mat\XM8_Common.rvmat","nia_wp_XM8\mat\XM8_reciever.rvmat","nia_wp_XM8\mat\XM8_Stocks.rvmat","nia_wp_XM8\mat\XM8_Foregrip_DMAR_Custom.rvmat",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_DMAR_custom_Grip";
			default = "HLC_rifle_XM8_DMAR_Custom";
		};
	};
	class HLC_rifle_XM8_DMAR_custom_Grip: HLC_rifle_XM8_DMAR_Custom
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_Proto_Carbine: HLC_rifle_XM8_Carbine
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline";
		descriptionShort = "$STR_NIA_G36_Carbine_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_Proto_Carbine.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Carbine_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Early_co.paa",""};
		baseWeapon = "HLC_Rifle_XM8_Proto_Carbine";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Carbine_Grip";
			default = "HLC_rifle_XM8_Proto_Carbine";
		};
	};
	class HLC_rifle_XM8_Proto_Carbine_Grip: HLC_rifle_XM8_Proto_Carbine
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_Carbine_Green: HLC_rifle_XM8_Proto_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Carbine_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Carbine_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Early_Green_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Green";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Carbine_Green_Grip";
			default = "HLC_rifle_XM8_Proto_Carbine_Green";
		};
	};
	class HLC_rifle_XM8_Proto_Carbine_Green_Grip: HLC_rifle_XM8_Proto_Carbine_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_Carbine_OD: HLC_rifle_XM8_Proto_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Carbine_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Carbine-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Early_OD_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_OD";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Carbine_OD_Grip";
			default = "HLC_rifle_XM8_Proto_Carbine_OD";
		};
	};
	class HLC_rifle_XM8_Proto_Carbine_OD_Grip: HLC_rifle_XM8_Proto_Carbine_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_Carbine_Tan: HLC_rifle_XM8_Proto_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Carbine_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Carbine-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Early_Tan_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Tan";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Carbine_Tan_Grip";
			default = "HLC_rifle_XM8_Proto_Carbine_Tan";
		};
	};
	class HLC_rifle_XM8_Proto_Carbine_Tan_Grip: HLC_rifle_XM8_Proto_Carbine_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_Carbine_GL: HLC_Rifle_XM8_Proto_Carbine
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline_GL";
		descriptionShort = "$STR_NIA_G36_Carbine_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_Proto_Carbine_GL.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_GL_Carbine_ca.paa";
		handanim[] = {"OFP2_ManSkeleton","nia_wp_xm8\anim\handgesture_XM8_XM320.rtm"};
		muzzles[] = {"this","hlc_GL_XM8_XM320"};
		baseWeapon = "HLC_rifle_XM8_Proto_Carbine_GL";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95.92;
			class CowsSlot: niarms_XM8_PCAP_Optic{};
			class UnderBarrelSlot{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
		};
		inertia = "(0.29 + 0.15)";
		dexterity = 1.2520791;
		aimTransitionSpeed = 0.87645537;
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_co.paa",""};
	};
	class HLC_rifle_XM8_Proto_Carbine_GL_Green: HLC_rifle_XM8_Proto_Carbine_GL
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Carbine_GL_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline_GL_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_GL_Carbine_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_Green_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Green";
			};
		};
	};
	class HLC_rifle_XM8_Proto_Carbine_GL_OD: HLC_rifle_XM8_Proto_Carbine_GL
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Carbine_GL_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline_GL_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_GL_Carbine-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_OD_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_OD";
			};
		};
	};
	class HLC_rifle_XM8_Proto_Carbine_GL_Tan: HLC_rifle_XM8_Proto_Carbine_GL
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Carbine_GL_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Baseline_GL_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_GL_Carbine-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_tan_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Tan";
			};
		};
	};
	class hlc_rifle_XM8_Proto_Compact: hlc_rifle_XM8_Compact
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Compact";
		descriptionShort = "$STR_NIA_G36_Compact_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_Proto_Compact.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Compact_ca.paa";
		baseWeapon = "hlc_rifle_XM8_Proto_Compact";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_common_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compat_Early_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Compact_Grip";
			default = "HLC_rifle_XM8_Proto_Compact";
		};
	};
	class HLC_rifle_XM8_Proto_Compact_Grip: HLC_rifle_XM8_Proto_Compact
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_Compact_Green: HLC_rifle_XM8_Proto_Compact
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Compact_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Compact_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Compact_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_common_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compat_Early_Green_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Green";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Compact_Green_Grip";
			default = "HLC_rifle_XM8_Proto_Compact_Green";
		};
	};
	class HLC_rifle_XM8_Proto_Compact_Green_Grip: HLC_rifle_XM8_Proto_Compact_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_Compact_OD: HLC_rifle_XM8_Proto_Compact
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Compact_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Compact_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Compact-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_common_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compat_Early_OD_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_OD";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Compact_OD_Grip";
			default = "HLC_rifle_XM8_Proto_Compact_OD";
		};
	};
	class HLC_rifle_XM8_Proto_Compact_OD_Grip: HLC_rifle_XM8_Proto_Compact_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_Compact_Tan: HLC_rifle_XM8_Proto_Compact
	{
		baseWeapon = "HLC_rifle_XM8_Proto_Compact_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Compact_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_Compact-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compat_Early_Tan_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Tan";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_Compact_Tan_Grip";
			default = "HLC_rifle_XM8_Proto_Compact_Tan";
		};
	};
	class HLC_rifle_XM8_Proto_Compact_Tan_Grip: HLC_rifle_XM8_Proto_Compact_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class hlc_rifle_XM8_Proto_DMAR: hlc_rifle_XM8_DMAR
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Marksman";
		descriptionShort = "$STR_NIA_MG36_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_Proto_DMAR.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_DMAR_ca.paa";
		baseWeapon = "hlc_rifle_XM8_Proto_DMAR";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Early_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_AMO_PCAP";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_DMAR_Grip";
			default = "HLC_rifle_XM8_Proto_DMAR";
		};
	};
	class HLC_rifle_XM8_Proto_DMAR_Grip: HLC_rifle_XM8_Proto_DMAR
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_DMAR_Green: HLC_rifle_XM8_Proto_DMAR
	{
		baseWeapon = "HLC_rifle_XM8_Proto_DMAR_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Marksman_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_DMAR_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Early_Green_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Green";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_DMAR_Green_Grip";
			default = "HLC_rifle_XM8_Proto_DMAR_Green";
		};
	};
	class HLC_rifle_XM8_Proto_DMAR_Green_Grip: HLC_rifle_XM8_Proto_DMAR_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_DMAR_OD: HLC_rifle_XM8_Proto_DMAR
	{
		baseWeapon = "HLC_rifle_XM8_Proto_DMAR_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Marksman_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_DMAR-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Early_OD_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_OD";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_DMAR_OD_Grip";
			default = "HLC_rifle_XM8_Proto_DMAR_OD";
		};
	};
	class HLC_rifle_XM8_Proto_DMAR_OD_Grip: HLC_rifle_XM8_Proto_DMAR_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_Proto_DMAR_Tan: HLC_rifle_XM8_Proto_DMAR
	{
		baseWeapon = "HLC_rifle_XM8_Proto_DMAR_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_Proto_Marksman_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_Prototype_DMAR-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_proto_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Early_Tan_co.paa",""};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "CowsSlot";
				item = "HLC_optic_RCO_PCAP_Tan";
			};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_Proto_DMAR_Tan_Grip";
			default = "HLC_rifle_XM8_Proto_DMAR_Tan";
		};
	};
	class HLC_rifle_XM8_Proto_DMAR_Tan_Grip: HLC_rifle_XM8_Proto_DMAR_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_Carbine: HLC_rifle_XM8_Carbine
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF";
		descriptionShort = "$STR_NIA_G36_Carbine_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_MWSF_Carbine.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Carbine_ca.paa";
		mass = 65.399994;
		baseWeapon = "HLC_Rifle_XM8_MWSF_Carbine";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 65.399994;
			class CowsSlot: asdg_OpticRail1913{};
			class UnderBarrelSlot: niarms_XM8_PCAP_Underbarrel{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
			class LaserSlot{};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Carbine_Grip";
			default = "HLC_rifle_XM8_MWSF_Carbine";
		};
	};
	class HLC_rifle_XM8_MWSF_Carbine_Grip: HLC_rifle_XM8_MWSF_Carbine
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_MWSF_Carbine_Green: HLC_rifle_XM8_MWSF_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_MWSF_Carbine_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Baseline_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Carbine_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Green_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Carbine_Green_Grip";
			default = "HLC_rifle_XM8_MWSF_Carbine_Green";
		};
	};
	class HLC_rifle_XM8_MWSF_Carbine_Green_Grip: HLC_rifle_XM8_MWSF_Carbine_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_MWSF_Carbine_OD: HLC_rifle_XM8_MWSF_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_MWSF_Carbine_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Baseline_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Carbine-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_OD_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Carbine_OD_Grip";
			default = "HLC_rifle_XM8_MWSF_Carbine_OD";
		};
	};
	class HLC_rifle_XM8_MWSF_Carbine_OD_Grip: HLC_rifle_XM8_MWSF_Carbine_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_rifle_XM8_MWSF_Carbine_Tan: HLC_rifle_XM8_MWSF_Carbine
	{
		baseWeapon = "HLC_rifle_XM8_MWSF_Carbine_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Baseline_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Carbine-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_Tan_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Carbine_Tan_Grip";
			default = "HLC_rifle_XM8_MWSF_Carbine_Tan";
		};
	};
	class HLC_rifle_XM8_MWSF_Carbine_Tan_Grip: HLC_rifle_XM8_MWSF_Carbine_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_Carbine_GL: HLC_Rifle_XM8_MWSF_Carbine
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_GL";
		descriptionShort = "$STR_NIA_G36_Carbine_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_MWSF_Carbine_GL.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_GL_Carbine_ca.paa";
		muzzles[] = {"this","hlc_GL_XM8_XM320"};
		handanim[] = {"OFP2_ManSkeleton","nia_wp_xm8\anim\handgesture_XM8_XM320.rtm"};
		baseWeapon = "HLC_Rifle_XM8_MWSF_Carbine_GL";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 98.1;
			class UnderBarrelSlot{};
		};
		inertia = "(0.3 + 0.15)";
		dexterity = 1.2331482;
		aimTransitionSpeed = 0.86320376;
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_co.paa",""};
	};
	class HLC_Rifle_XM8_MWSF_Carbine_GL_Green: HLC_Rifle_XM8_MWSF_Carbine_GL
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_Carbine_GL_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Baseline_GL_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_GL_Carbine_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_Green_co.paa",""};
	};
	class HLC_Rifle_XM8_MWSF_Carbine_GL_OD: HLC_Rifle_XM8_MWSF_Carbine_GL
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_Carbine_GL_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Baseline_GL_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_GL_Carbine-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_OD_co.paa",""};
	};
	class HLC_Rifle_XM8_MWSF_Carbine_GL_Tan: HLC_Rifle_XM8_MWSF_Carbine_GL
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_Carbine_GL_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Baseline_GL_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_GL_Carbine-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_XM320_Tan_co.paa",""};
	};
	class hlc_rifle_XM8_MWSF_Compact: hlc_rifle_XM8_Compact
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Compact";
		descriptionShort = "$STR_NIA_G36_Compact_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_MWSF_Compact.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Compact_ca.paa";
		mass = 61.475998;
		baseWeapon = "hlc_rifle_XM8_MWSF_Compact";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61.475998;
			class CowsSlot: asdg_OpticRail1913{};
			class UnderBarrelSlot: niarms_XM8_PCAP_Underbarrel{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
			class LaserSlot{};
		};
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Compact_Grip";
			default = "HLC_rifle_XM8_MWSF_Compact";
		};
	};
	class HLC_rifle_XM8_MWSF_Compact_Grip: HLC_rifle_XM8_MWSF_Compact
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_Compact_Green: HLC_Rifle_XM8_MWSF_Compact
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_Compact_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Compact_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Compact_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_Green_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Compact_Green_Grip";
			default = "HLC_rifle_XM8_MWSF_Compact_Green";
		};
	};
	class HLC_rifle_XM8_MWSF_Compact_Green_Grip: HLC_rifle_XM8_MWSF_Compact_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_Compact_OD: HLC_Rifle_XM8_MWSF_Compact
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_Compact_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Compact_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Compact-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_OD_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Compact_OD_Grip";
			default = "HLC_rifle_XM8_MWSF_Compact_OD";
		};
	};
	class HLC_rifle_XM8_MWSF_Compact_OD_Grip: HLC_rifle_XM8_MWSF_Compact_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_Compact_Tan: HLC_Rifle_XM8_MWSF_Compact
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_Compact_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Compact_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_Compact-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Stock_Compact_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_Compact_Tan_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_Compact_Tan_Grip";
			default = "HLC_rifle_XM8_MWSF_Compact_Tan";
		};
	};
	class HLC_rifle_XM8_MWSF_Compact_Tan_Grip: HLC_Rifle_XM8_MWSF_Compact_Tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_Compact_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class hlc_rifle_XM8_MWSF_DMAR: hlc_rifle_XM8_DMAR
	{
		dlc = "Niarms_XM8";
		author = "Toadie";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Marksman";
		descriptionShort = "$STR_NIA_MG36_DESC";
		model = "nia_wp_xm8\mesh\XM8\XM8_MWSF_DMAR.p3d";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_DMAR_ca.paa";
		mass = 72.593994;
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_co.paa",""};
		baseWeapon = "hlc_rifle_XM8_MWSF_DMAR";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72.593994;
			class CowsSlot: asdg_OpticRail1913{};
			class UnderBarrelSlot: niarms_XM8_PCAP_Underbarrel{};
			class PointerSlot: niarms_XM8_PCAP_Accessory{};
			class LaserSlot{};
		};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_DMAR_Grip";
			default = "HLC_rifle_XM8_MWSF_DMAR";
		};
	};
	class HLC_rifle_XM8_MWSF_DMAR_Grip: HLC_rifle_XM8_MWSF_DMAR
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_DMAR_Green: HLC_Rifle_XM8_MWSF_DMAR
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_DMAR_Green";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Marksman_Green";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_DMAR_Green_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Green_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_DMAR_Green_Grip";
			default = "HLC_rifle_XM8_MWSF_DMAR_Green";
		};
	};
	class HLC_rifle_XM8_MWSF_DMAR_Green_Grip: HLC_rifle_XM8_MWSF_DMAR_Green
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_DMAR_OD: HLC_Rifle_XM8_MWSF_DMAR
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_DMAR_OD";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Marksman_OD";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_DMAR-OD_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_OD_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_OD_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_DMAR_OD_Grip";
			default = "HLC_rifle_XM8_MWSF_DMAR_OD";
		};
	};
	class HLC_rifle_XM8_MWSF_DMAR_OD_Grip: HLC_rifle_XM8_MWSF_DMAR_OD
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
	class HLC_Rifle_XM8_MWSF_DMAR_Tan: HLC_Rifle_XM8_MWSF_DMAR
	{
		baseWeapon = "HLC_Rifle_XM8_MWSF_DMAR_Tan";
		scope = 2;
		displayName = "$STR_NIA_rifle_XM8_MWSF_Marksman_Tan";
		picture = "\nia_wp_xm8\tex\ui\XM8_MWSF_DMAR-Tan_ca.paa";
		hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Tan_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Tan_co.paa",""};
		class nia_gripSwitch
		{
			VFG = "HLC_rifle_XM8_MWSF_DMAR_tan_Grip";
			default = "HLC_rifle_XM8_MWSF_DMAR_tan";
		};
	};
	class HLC_rifle_XM8_MWSF_DMAR_tan_Grip: HLC_rifle_XM8_MWSF_DMAR_tan
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\nia_wp_xm8\anim\handgesture_XM8_VFG.rtm"};
		inertia = "0.029 + 0.038";
		dexterity = 1.6429442;
		aimTransitionSpeed = 1.1500609;
	};
};
