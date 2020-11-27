class CfgPatches
{
	class IntenZ_Umbrella
	{
		units[] = 
		{
			"Umbrella_Closed",
			"Umbrella_Opened",
			
			"Umbrella_Black",
			"Umbrella_Blue",
			"Umbrella_Green",
			"Umbrella_Rainbow",
			"Umbrella_Yellow"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class IntenZ_Umbrella
	{
		type = "mod";
		dependencies[] = {"World"};
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Umbrella\Scripts\4_World"};
			};
		};
	};
};

#include "CfgVehicles\Cfg.hpp"
