class CfgPatches
{
	class IntenZ_Emotes
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
	class IntenZ_Emotes
	{
		type = "mod";
		name = "IntenZ Emotes";
		inputs = "IntenZ\Emotes\Inputs.xml";
		dependencies[] = {"World"};
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Emotes\Scripts\4_World"};
			};
		};
	};
};
