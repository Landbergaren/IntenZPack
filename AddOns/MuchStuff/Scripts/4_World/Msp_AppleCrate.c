modded class Msp_AppleCrate : Msp_Storage_Base 
{
	static Msp_ItemRecipeValues GetRecipeValues()
	{
		Msp_ItemRecipeValues recipeVals = new Msp_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(100);
		recipeVals.Set_minQuantityIngredientTwo(12);
		recipeVals.Set_addHealthOne(-5);
		recipeVals.Set_addQuantOne(-100);
		recipeVals.Set_addQuantTwo(-12);
		array<string> ingredientsOne = {"Nail"};
		recipeVals.SetIngredientItemOne(ingredientsOne);
		array<string> ingredientsTwo = {"WoodenPlank"};
		recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Apple Crate");
		recipeVals.SetResult("Msp_AppleCrate");
		return recipeVals;
	}
};
