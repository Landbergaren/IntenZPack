modded class Edible_Base
{
	int m_LastServerTime = -1;
	int m_ExposedTime = 0; // secs

	private bool IsInsideFridge(ItemBase Parent)
	{
		InventoryLocation invLocation = new InventoryLocation;
		Parent.GetInventory().GetCurrentInventoryLocation(invLocation);
		EntityAI ParentOfParentAI = invLocation.GetParent();
		ItemBase ParentOfParent = ItemBase.Cast(ParentOfParentAI);

		bool IsFridge = false;
		ItemBase Fridge = NULL;

		foreach (string FridgeClassName : PFGlobals.Get().FridgeClasses)
		{
			if (Parent.GetType() == FridgeClassName)
			{
				IsFridge = true;
				Fridge = Parent;
				break;
			}

			if (ParentOfParent && ParentOfParent.GetType() == FridgeClassName)
			{
				IsFridge = true;
				Fridge = ParentOfParent;
				break;
			}
		}

		return IsFridge && (!Fridge.HasEnergyManager() || Fridge.GetCompEM().IsWorking());
	}

	override void OnStoreSave(ParamsWriteContext ctx)
	{
		if (g_ElapsedTime > m_LastServerTime)
		{
			int ConservationMultiplier = 1;
			InventoryLocation invLocation = new InventoryLocation;
			GetInventory().GetCurrentInventoryLocation(invLocation);
			EntityAI parent = invLocation.GetParent();
			if (parent && invLocation.GetType() == InventoryLocationType.CARGO)
			{
				ItemBase parentItem = ItemBase.Cast(parent);
				if (parentItem && IsInsideFridge(parentItem))
				{
					ConservationMultiplier = PFGlobals.Get().FridgeConservationMultiplier;
				}
				else if (parentItem && parentItem.GetQuantity() >= 0.9 * parentItem.GetQuantityMax() && parentItem.GetLiquidType() == LIQUID_WATER)
				{
					CargoBase cargo = parent.GetInventory().GetCargo();
					for (int i = 0; i < cargo.GetItemCount(); i++)
					{
						ItemBase item = ItemBase.Cast(cargo.GetItem(i));
						if (item.GetType() == "SaltStone" && item.GetHealth01() > 0)
						{
							if (m_LastServerTime >= 0)
							{
								float h = item.GetHealth01() * 10000;
								float e = (g_ElapsedTime - m_LastServerTime) * PFGlobals.Get().SaltConsumption / item.GetQuantity();
								h -= e;
								h /= 10000;
								if (h < 0.001) h = 0;
								float m = item.GetMaxHealth();
								item.SetHealth("", "", m * h);
							}
							ConservationMultiplier = PFGlobals.Get().SaltConservationMultiplier;
							break;
						}
					}
				}
			}

			if (m_LastServerTime >= 0)
			{
				m_ExposedTime += (g_ElapsedTime - m_LastServerTime) / ConservationMultiplier;
			}
			m_LastServerTime = g_ElapsedTime;

			if (IsFoodRotten() || IsFoodBurned())
			{
			}
			else if ((IsFoodBaked() || IsFoodBoiled()) && m_ExposedTime > PFGlobals.Get().CookedFoodDecayTimeSecs)
			{
				ChangeFoodStage(FoodStageType.ROTTEN);
				SetHealth("", "", GetMaxHealth()*0.1);
			}
			else if (IsFoodRaw() || IsFoodDried())
			{
				if (m_ExposedTime > PFGlobals.Get().RawFoodDecayTimeSecs)
				{
					ChangeFoodStage(FoodStageType.ROTTEN);
					SetHealth("", "", GetMaxHealth()*0.1);
				}
				else if (m_ExposedTime > PFGlobals.Get().RawFoodDrieTimeSecs && GetHealth01() > 0.4)
				{
					ChangeFoodStage(FoodStageType.DRIED);
					SetHealth("", "", GetMaxHealth()*0.4);
				}
			}
		}

		super.OnStoreSave(ctx);

		ctx.Write(m_ExposedTime);
	}

	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if (!super.OnStoreLoad(ctx, version))
		{
			return false;
		}

		if (!ctx.Read(m_ExposedTime))
		{
			m_ExposedTime = 0;
		}

		return true;
	}
}
