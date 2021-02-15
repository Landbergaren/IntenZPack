class CfgPatches
{
	class IntenZ_Map
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			
			"DZ_Gear_Navigation",
			"DZ_Worlds_Chernarusplus_World"
		};
	};
};

class CfgMods
{
	class IntenZ_Map
	{
		type = "mod";
		dependencies[] = {"World"};
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Map\Scripts\4_World"};
			};
		};
	};
};

#include "CfgVehicles\Cfg.hpp"
#include "CfgWorlds\Cfg.hpp"
