class Edible_Base;

class ChickenBreastMeat: Edible_Base
{
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				nutrition_properties[]={4.5,60,35,1,0,4};
			};
			class Rotten
			{
				nutrition_properties[]={4,45,26,25,1,0,"4 + 16"};
			};
			class Baked
			{
				nutrition_properties[]={3.5,120,25,1,0};
			};
			class Boiled
			{
				nutrition_properties[]={3,80,35,1,0};
			};
			class Dried
			{
				nutrition_properties[]={1.5,60,3.5,1,0};
			};
			class Burned
			{
				nutrition_properties[]={4,45,12.5,1,0,16};
			};
		};
	};
};