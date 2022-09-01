////////////////////////////////////////////////////////////////////
//DeRap: bso_fhq_tasktracker\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:03 2022 : 'file' last modified on Fri Feb 17 17:17:02 2017
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class FHQTaskTracker
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author = "fFiedenHG";
		authorURL = "http://friedenhq.org";
	};
};
class CfgFunctions
{
	class FHQ
	{
		class TaskTrackerInternal
		{
			tag = "FHQ";
			file = "\x\fhq_tasktracker\functions";
			class ttiInit
			{
				description = "Internal function, called automatically";
				preInit = 1;
			};
			class ttiPostInit
			{
				description = "Internal function, called automatically";
				postInit = 1;
			};
			class ttifilterUnits
			{
				description = "Internal Function";
			};
			class ttiAddBriefingEntry
			{
				description = "Internal Function";
			};
			class ttiHasBriefingEntry
			{
				description = "Internal Function";
			};
			class ttiUpdateBriefingList
			{
				description = "Internal Function";
			};
			class ttiGetTaskId
			{
				description = "Internal Function";
			};
			class ttiGetTaskDesc
			{
				description = "Internal Function";
			};
			class ttiGetTaskTitle
			{
				description = "Internal Function";
			};
			class ttiGetTaskWp
			{
				description = "Internal Function";
			};
			class ttiGetTaskTarget
			{
				description = "Internal Function";
			};
			class ttiGetTaskState
			{
				description = "Internal Function";
			};
			class ttiGetTaskName
			{
				description = "Internal Function";
			};
			class ttiGetTaskType
			{
				description = "Internal Function";
			};
			class ttiTaskExists
			{
				description = "Internal Function";
			};
			class ttiCreateOrUpdateTask
			{
				description = "Internal Function";
			};
			class ttiUpdateTaskList
			{
				description = "Internal Function";
			};
			class ttiMissionTasks
			{
				description = "Internal Function";
			};
			class ttiMissionBriefing
			{
				description = "Internal Function";
			};
			class ttiUnitTasks
			{
				description = "Internal Function";
			};
			class ttiUnitBriefing
			{
				description = "Internal Function";
			};
			class ttiIsFilter
			{
				description = "Internal Function";
			};
			class ttiIsTaskState
			{
				description = "Internal Function";
			};
		};
		class TaskTracker
		{
			tag = "FHQ";
			file = "\x\fhq_tasktracker\functions";
			class ttTaskHint
			{
				description = "This function is called for every task hint to be displayed.";
			};
			class ttAddBriefing
			{
				description = "Adds a briefing to the missing.";
			};
			class ttAddTasks
			{
				description = "Adds tasks to the mission.";
			};
			class ttGetTaskState
			{
				description = "Return the state of a task.";
			};
			class ttSetTaskState
			{
				description = "Set the new state of a task.";
			};
			class ttIsTaskCompleted
			{
				description = "Check whether a given task is completed";
			};
			class ttAreTasksCompleted
			{
				description = "Check whether a list of tasks is completed";
			};
			class ttIsTaskSuccessful
			{
				description = "Check whether a given task is successfully completed";
			};
			class ttAreTasksSuccessful
			{
				description = "Check whether a list of tasks is successfully completed";
			};
			class ttGetAllTasksWithState
			{
				description = "Return an array of all tasks with a given state";
			};
			class ttSetTaskStateAndNext
			{
				description = "Set a task's state, and select the next one";
			};
		};
	};
};
