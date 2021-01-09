class Mission_Container : WoodenCrate
{
	override bool CanPutIntoHands( EntityAI parent )
	{
		return false;
	}
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	override bool CanPutAsAttachment( EntityAI parent )
	{
		return false;
	}
}
