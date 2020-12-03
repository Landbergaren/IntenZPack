class CfgPatches
{
	class IntenZ_Farming
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
	class IntenZ_Farming
	{
		type = "mod";
		dependencies[] = {"World"};
		
		class defs
		{	
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Farming\Scripts\4_World"};
			};
		};
	};
};
