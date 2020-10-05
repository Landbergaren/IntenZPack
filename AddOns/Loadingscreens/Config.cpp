class CfgPatches
{
	class IntenZ_Loadingscreens
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
	class IntenZ_Loadingscreens
	{
		type = "mod";
		dependencies[] = {"Game"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZ\Loadingscreens\Scripts\3_Game"};
			};
		};
	};
};
