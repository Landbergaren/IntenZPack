class CfgPatches
{
	class IntenZ_Menu
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
	class IntenZ_Menu
	{
		type = "mod";
		dependencies[] = {"gui","Mission"};

		class defs
		{
			class imageSets
			{
				files[] = {"IntenZ\Menu\Assets\Imagesets\IntenZ_gui.imageset"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZ\Menu\Scripts\5_Mission"};
			};
		};
	};
};

#include "CfgSoundShaders\Cfg.hpp"
#include "CfgSoundSets\Cfg.hpp"
