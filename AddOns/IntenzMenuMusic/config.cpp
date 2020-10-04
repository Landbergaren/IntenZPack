class CfgPatches
{
	class IntenZMenuMusic
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			
		};
	};
};

class CfgMods
{
	class IntenZMenuMusic
	{
		type = "mod";
		dependencies[] = { "Mission" };

		class defs
		{
			class missionScriptModule
			{
				value = "";
				files[] = { "IntenZ\IntenzMenuMusic\Scripts\5_Mission" };
			};
		};
	};
};

#include "SoundShaders\Cfg.hpp"
#include "SoundSets\Cfg.hpp"
