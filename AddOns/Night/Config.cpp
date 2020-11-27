class CfgPatches
{
	class IntenZ_Night
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
	class IntenZ_Night
	{
		type = "mod";
		dependencies[] = {"Game","World"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZ\Night\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Night\Scripts\4_World"};
			};
		};
	};
};

#include "CfgWorlds\Cfg.hpp"
