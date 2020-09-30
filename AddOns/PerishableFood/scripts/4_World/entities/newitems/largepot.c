class LargePot: Pot
{
	ref array<string> m_AllowedCargo = {"SodaCan_ColorBase", "Bottle_Base", "Edible_Base", "SaltStone"};

	override void SetActions()
	{
		super.SetActions();

		RemoveAction(ActionForceDrink);
		RemoveAction(ActionDrink);
		RemoveAction(ActionDrinkCookingPot);
	}

	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}

		foreach (string allowedCargo : m_AllowedCargo)
		{
			if (item.IsKindOf(allowedCargo))
			{
				return true;
			}
		}

		return false;
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
		{
			return false;
		}

		foreach (string allowedCargo : m_AllowedCargo)
		{
			if (new_entity.IsKindOf(allowedCargo))
			{
				return true;
			}
		}

		return false;
	}
}
