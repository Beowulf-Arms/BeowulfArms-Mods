////////////////////////////////////////////////////////////////////
//DeRap: bso_respawn\sampleConfig.cpp
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:20 2022 : 'file' last modified on Sat Oct 31 13:25:54 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class BSORespawns
{
	class west
	{
		sideTickets = 20;
		personalTickets = 0;
		personalTicketsUnit[] = {{"jtac_0",3},{"pl_0",2}};
		onTicketsDepleted = "mission\respawnTicketsDepleted.sqf";
		class MHQ
		{
			name = "Mobile HQ";
			object = "b_mhq";
		};
		class FirstObjective
		{
			name = "First Object Respawn";
			marker = "obj_1";
			disabled = "true";
		};
		class PilotRespawn
		{
			name = "Airfield";
			marker = "airfield";
			units[] = {"pilot_1","pilot_2"};
		};
	};
	class east
	{
		class opfor_MHQ{};
	};
};
