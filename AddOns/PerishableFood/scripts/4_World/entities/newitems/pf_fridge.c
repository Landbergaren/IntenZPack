class PF_Fridge: Inventory_Base
{
	ref array<string> m_AllowedCargo = {"SodaCan_ColorBase", "Bottle_Base", "Edible_Base"};

	const string SOUND_HUMMING = "refrigerator_SoundSet";
	const string SOUND_TURN_ON = "spotlight_turn_on_SoundSet";
	const string SOUND_TURN_OFF = "spotlight_turn_off_SoundSet";

	protected EffectSound m_SoundHummingLoop;
	protected EffectSound m_SoundTurnOn;
	protected EffectSound m_SoundTurnOff;

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionPlugIn);
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionUnplugThisByCord);
		AddAction(ActionTurnOnWhileOnGround);
		AddAction(ActionTurnOffWhileOnGround);
		AddAction(ActionPlaceObject);
		AddAction(ActionPlugTargetIntoThis);
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

	override void OnSwitchOn()
	{
		super.OnSwitchOn();

		//sound (client only)
		PlaySoundSet(m_SoundTurnOn, SOUND_TURN_ON, 0, 0);
	}

	override void OnSwitchOff()
	{
		super.OnSwitchOff();

		//sound (client only)
		PlaySoundSet(m_SoundTurnOff, SOUND_TURN_OFF, 0, 0);
	}

	override void OnWorkStart()
	{
		//sound (client only)
		PlaySoundSetLoop(m_SoundHummingLoop, SOUND_HUMMING, 0.1, 0.3);
	}

	override void OnWorkStop()
	{
		//sound (client only)
		StopSoundSet(m_SoundHummingLoop);
	}
}
