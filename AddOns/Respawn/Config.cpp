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
			"DZ_Scripts",
			
			"JM_CF_Scripts"
		};
	};
};

class CfgMods
{
	class IntenZ_Respawn
	{
		type = "mod";
		dependencies[] = {"World","Mission"};
		
		class defs
		{
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
