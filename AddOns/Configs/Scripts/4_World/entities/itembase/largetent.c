/*class Packed_LargeTent: LargeTent
{	
	protected Object	LargeTent1;

	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
			
		PlayerBase pb = PlayerBase.Cast( player );
		
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector newPosition = player_base.GetLocalProjectionPosition();
			vector newOrientation = player_base.GetLocalProjectionOrientation();
				
			LargeTent1 = GetGame().CreateObject("LargeTent", pb.GetLocalProjectionPosition(), false );
			LargeTent1.SetPosition( position );
			LargeTent1.SetOrientation( orientation );
			
			if ( !m_ClutterCutter )
			{
				m_ClutterCutter = GetGame().CreateObjectEx( "LargeTentClutterCutter", pb.GetLocalProjectionPosition(), ECE_PLACE_ON_SURFACE );
				m_ClutterCutter.SetOrientation( pb.GetLocalProjectionOrientation() );	
			}
		}	
	}
};
