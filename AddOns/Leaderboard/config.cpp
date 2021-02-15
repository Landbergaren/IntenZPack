class CfgPatches
{
	class IntenZ_Leaderboard
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
	class IntenZ_Leaderboard
	{
		type = "mod";
		dependencies[] = {"Game", "World"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZ\Leaderboard\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Leaderboard\Scripts\4_World"};
			};
		};
	};
};
