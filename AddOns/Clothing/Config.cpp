class CfgPatches
{
	class IntenZ_Clothing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			
			"DZ_Characters",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Characters_Headgear"
		};
	};
};

class CfgMods
{
	class IntenZ_Clothing
	{
		type = "mod";
		dependencies[] = {"World"};
		
		class defs
		{	
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Clothing\Scripts\4_World"};
			};
		};
	};
};

#include "CfgVehicles\Cfg.hpp"
