class CfgPatches
{
	class IntenZ_Assets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class IntenZ_Assets
	{
		type = "mod";
		dependencies[] = {"gui"};
		
		class defs
		{	
			class imageSets
			{
				files[] = {"IntenZ\Assets\imagesets\IntenZ_gui.imageset"};
			};
		};
	};
};
