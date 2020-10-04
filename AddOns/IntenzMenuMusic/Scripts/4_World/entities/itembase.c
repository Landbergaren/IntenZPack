modded class ItemBase extends InventoryItem
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
};
