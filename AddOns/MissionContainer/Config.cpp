class CfgPatches
{
	class IntenZ_MissionContainer
	{
		units[] = 
		{
			"Mission_Container",
			"Mission_Tent",
			"Mission_Shelter"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{			
			"DZ_Data",
			"DZ_Scripts",
			
			"DZ_Characters_Backpacks",
			"DZ_Gear_Camping"
		};
	};
};

class CfgMods
{
	class IntenZ_MissionContainer
	{
		type = "mod";
		dependencies[] = {"World"};
		
		class defs
		{	
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\MissionContainer\Scripts\4_World"};
			};
		};
	};
};

#include "CfgVehicles\Cfg.hpp"
