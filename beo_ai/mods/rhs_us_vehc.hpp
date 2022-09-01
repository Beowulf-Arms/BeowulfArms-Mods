	class autocannon_30mm_CTWS;
	class RHS_weap_M242BC: autocannon_30mm_CTWS
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;	
	};
	
	
	class rhs_weap_m240veh: LMG_M200
	{
		dispersion = 0.0055;
			aiDispersionCoefX = 5;
			aidispersioncoefy = 3;
		modes[] = {"manual","close","short","medium","far"};
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