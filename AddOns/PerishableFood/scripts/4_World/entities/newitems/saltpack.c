class SaltPack: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionUnpackBox);
	}
}
