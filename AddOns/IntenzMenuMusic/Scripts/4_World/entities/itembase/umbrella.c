/*class Umbrella_Base extends ItemBase
{
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
