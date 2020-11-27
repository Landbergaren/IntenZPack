class CfgPatches
{
	class IntenZ_Autorun
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
	class IntenZ_Autorun
	{
		type = "mod";
		name = "IntenZ Autorun";
		inputs = "IntenZ\Autorun\Inputs.xml";
		dependencies[] = {"Mission"};
		
		class defs
		{
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZ\Autorun\Scripts\5_mission"};
			};
		};
	};
};
