class CfgPatches
{
	class IntenZ_MenuMusic
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
	class IntenZ_MenuMusic
	{
		type = "mod";
		dependencies[] = {"Mission"};

		class defs
		{
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZ\MenuMusic\Scripts\5_Mission"};
			};
		};
	};
};

#include "CfgSoundShaders\Cfg.hpp"
#include "CfgSoundSets\Cfg.hpp"
