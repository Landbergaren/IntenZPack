class CfgPatches
{
	class IntenZ_Umbrella
	{
		units[] = {};
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
