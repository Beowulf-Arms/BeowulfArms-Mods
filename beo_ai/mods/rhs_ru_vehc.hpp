	class PKT;
	class gatling_30mm;
	class rockets_Skyfire;
	class rhs_weap_pkt: PKT
	{
		dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		class manual: MGun
		{		
			dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 4;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class short: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 4;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 6;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 3;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};		
	};
	
	class rhs_weap_DSHKM: LMG_RCWS
	{
		dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		class manual: MGun
		{
			dispersion = 0.0055; //0.002
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			displayName = "$STR_RHS_WEAP_NSVT";
			autoFire = 1;
			reloadTime = 0.1;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 12;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 5;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 9;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class far: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};
	};

	class rhs_weap_nsvt: rhs_weap_DSHKM
	{
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		class manual: MGun
		{	
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 12;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 5;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 9;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class far: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};		
	};
	class rhs_weap_kpvt: MGun
	{
		dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		class manual: MGun
		{		
			dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class short: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 800;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1200;
			maxRangeProbab = 0.04;
		};
		class far: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 4;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};		
	};
	class rhs_weap_nsvt_effects;
	class rhs_weap_kord: rhs_weap_nsvt_effects
	{
		class manual: mgun
		{	
			dispersion = 0.0055; // 0.002	
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			displayName = "$STR_RHS_DN_KORD";
			reloadTime = 0.095;		
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 12;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 9;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class far: close
		{		
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};		
	};		
	
	
	class rhs_weap_yakB: gatling_30mm
	{
		class manual: Mode_FullAuto
		{
			aiDispersionCoefX = 10;
			aidispersioncoefy = 15;
		};
	};
	class rhs_weap_pkm_tigr: rhs_weap_pkt
	{
		aiDispersionCoefX = 20;
		aidispersioncoefy = 10;
	};
//	class rhs_weap_s5: rockets_Skyfire
//	{
//		aiDispersionCoefX = 10;
//		aidispersioncoefy = 15;
//	};
	

	class RHS_weap_Ags30: GMG_20mm
	{
		class manual: GMG_F
		{		
			aiDispersionCoefX = 20;
			aidispersioncoefy = 30;
		};
		class close: manual
		{		
			aiDispersionCoefX = 20;
			aidispersioncoefy = 30;
		};
		class short: close
		{		
			aiDispersionCoefX = 20;
			aidispersioncoefy = 30;
		};
		class medium: close
		{		
			aiDispersionCoefX = 20;
			aidispersioncoefy = 30;
		};
		class far: close
		{		
			aiDispersionCoefX = 20;
			aidispersioncoefy = 30;
		};		
	};
	
	class rhs_weap_SPG9: RocketPods
	{
		aiDispersionCoefX = 15;
		aidispersioncoefy = 20;
		
	};	
	
	class RHS_weap_AZP23: CannonCore
	{	
		aiDispersionCoefX = 4;
		aidispersioncoefy = 2;
		class manual: CannonCore
		{
			aiDispersionCoefX = 4;
			aidispersioncoefy = 2;
		};
		class close: manual
		{
			aiDispersionCoefX = 4;
			aidispersioncoefy = 2;
		};
		class short: close
		{
			aiDispersionCoefX = 4;
			aidispersioncoefy = 2;
		};
		class medium: close
		{
			aiDispersionCoefX = 4;
			aidispersioncoefy = 2;
		};
		class far: close
		{
			aiDispersionCoefX = 4;
			aidispersioncoefy = 2;
		};
	};



	