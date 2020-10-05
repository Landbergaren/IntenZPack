class Umbrella_Base extends ItemBase
{
	void ReplaceItemWithNew (string typeName)
	{
		PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		if (player)
		{
			ReplaceItemWithNewLambda lambda = new ReplaceItemWithNewLambda(this, typeName, player);
			player.ServerReplaceItemInHandsWithNew(lambda);
		}
		else Error("ReplaceItemWithNew - cannot use item without player");
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionOpen);
		AddAction(ActionClose);
	}
};
class Umbrella_Closed: Umbrella_Base
{
	override void Open()
	{
		ReplaceItemWithNew("Umbrella_Opened");
	}
	override bool IsOpen() 
	{
		return false;
	}
};
class Umbrella_Opened: Umbrella_Base
{
	override void Close()
	{
		ReplaceItemWithNew("Umbrella_Closed");
	}
	override bool IsOpen() 
	{
		return true;
	}
};
