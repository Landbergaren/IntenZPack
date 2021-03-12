class CfgPatches
{
	class IntenZ_Respawn
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
	class IntenZ_Respawn
	{
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZ\Respawn\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Respawn\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZ\Respawn\Scripts\5_mission"};
			};
		};
	};
};
