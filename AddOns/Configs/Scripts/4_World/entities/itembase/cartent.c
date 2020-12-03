/*class Packed_CarTent: CarTent
{
	protected Object	CarTent1;
	
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
		
		PlayerBase pb = PlayerBase.Cast( player );
		
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector newPosition = player_base.GetLocalProjectionPosition();
			vector newOrientation = player_base.GetLocalProjectionOrientation();
				
			CarTent1 = GetGame().CreateObject("CarTent", pb.GetLocalProjectionPosition(), false );
			CarTent1.SetPosition( position );
			CarTent1.SetOrientation( orientation );w
		}
	}
};
