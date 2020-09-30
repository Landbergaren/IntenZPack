class CfgPatches
{
	class IntenZ_PerishableFood
	{
		units[] = 
		{
			"SaltStone",
			"SaltPack",
			"PF_Fridge"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Gear_Cooking",
			"DZ_Sounds_Effects"
		};
	};
};

class CfgMods
{
	class IntenZ_PerishableFood
	{
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZ\PerishableFood\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\PerishableFood\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZ\PerishableFood\Scripts\5_mission"};
			};
		};
	};
};

#include "CfgVehicles\Cfg.hpp"
#include "CfgSoundShaders\Cfg.hpp"
#include "CfgSoundSets\Cfg.hpp"
