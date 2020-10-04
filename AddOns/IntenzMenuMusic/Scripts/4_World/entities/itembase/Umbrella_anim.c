class Umbrella_ColorBase: Inventory_Base
{
	protected ref OpenableBehaviour m_Openable;
//----------------------------------
	void Umbrella_ColorBase()
	{
		m_Openable = new OpenableBehaviour(false);
		
		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");
		
		UpdateVisualState();
	}
//----------------------------------
	override void Open()
	{
		m_Openable.Open();
		SetSynchDirty();
		
		UpdateVisualState();
	}
	override void Close()
	{
		m_Openable.Close();
		SetSynchDirty();
		
		UpdateVisualState();
	}
//----------------------------------
	override bool IsOpen()
	{
		return m_Openable.IsOpened();
	}
//----------------------------------
	protected void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("State_Open",0);
			SetAnimationPhase("State_Closed",1);
		}
		else
		{
			SetAnimationPhase("State_Open",1);
			SetAnimationPhase("State_Closed",0);
		}
	}
//----------------------------------
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		UpdateVisualState();
	}
//----------------------------------
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !super.CanPutInCargo(parent) ) 
		{
			return false;
		}		
		if ( !IsOpen() )
		{
			return true;
		}
		return false;
	}
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !IsRuined() && !IsOpen() )
		{
			return true;
		}
		return false;
	}
//----------------------------------
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionOpen);
		AddAction(ActionClose);
	}
};
