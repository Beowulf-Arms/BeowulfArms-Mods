	class rhs_weap_M320_Base_F: Pistol_Base_F
	{

		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;

	};	
	
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{	
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 30;
		modes[] = {"Single","Burst","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
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
		class Burst: Mode_Burst
		{
			reloadTime = 0.075;
			dispersion = 0.0022;
			minRange = 1;
			minRangeProbab = 0.7;
			midRange = 60;
			midRangeProbab = 0.8;
			maxRange = 120;
			maxRangeProbab = 0.2;
			magazineReloadSwitchPhase = 0.56;
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
			aiDispersionCoefY = 5;
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
			////textureType = "dual";
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
	
	class rhs_weap_m4a1: rhs_weap_m4_Base
	{	
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 30;
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
	};
	
	
	class rhs_weap_M249_base: LMG_Mk200_F
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 30;
		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			reloadTime = 0.075;
			dispersion = 0.00101;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
		};
		class close: FullAuto
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.69;
			maxRange = 50;
			maxRangeProbab = 0.039;
			showToPlayer = 0;
		};
		class short: close
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.69;
			maxRange = 300;
			maxRangeProbab = 0.039;
		};
		class medium: close
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far_optic1: close
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 9;
			aiRateOfFireDistance = 900;
			minRange = 350;
			minRangeProbab = 0.039;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.0098;
		};
		class far_optic2: far_optic1
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			requiredOpticType = 2;
			autoFire = 0;
			burst = 1;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.0098;
		};		
	};
	
	
	
	class rhs_weap_saw_base: Rifle_Base_F
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 30;
		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.075;
			dispersion = 0.000261799;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
			airateoffire = 4;
		};
		class close: FullAuto
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.69;
			maxRange = 50;
			maxRangeProbab = 0.039;
			showToPlayer = 0;
		};
		class short: close
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.69;
			maxRange = 300;
			maxRangeProbab = 0.039;
		};
		class medium: close
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far_optic1: close
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 9;
			aiRateOfFireDistance = 900;
			minRange = 350;
			minRangeProbab = 0.039;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.0098;
		};
		class far_optic2: far_optic1
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
			requiredOpticType = 2;
			autoFire = 0;
			burst = 1;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.0098;
		};
	};
	
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 30;
		modes[] = {"manual","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar"};
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
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 16;
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
	};	
	
	class rhs_weap_M590_5RD: Rifle_Base_F
	{	
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		class Single: Mode_SemiAuto
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	
	class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
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
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};	
	};		