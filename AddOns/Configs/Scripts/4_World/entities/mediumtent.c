/*class Packed_MediumTent: MediumTent
{	
	protected Object	MediumTent1;
	protected Object	MediumTent2;
	protected Object	MediumTent3;

	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
		
		PlayerBase pb = PlayerBase.Cast( player );
				
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector newPosition = player_base.GetLocalProjectionPosition();
			vector newOrientation = player_base.GetLocalProjectionOrientation();
				
			MediumTent1 = GetGame().CreateObject("MediumTent", pb.GetLocalProjectionPosition(), false );
			MediumTent1.SetPosition( position );
			MediumTent1.SetOrientation( orientation );
		
			if ( !m_ClutterCutter )
			{
				m_ClutterCutter = GetGame().CreateObjectEx( "MediumTentClutterCutter", pb.GetLocalProjectionPosition(), ECE_PLACE_ON_SURFACE );	
				m_ClutterCutter.SetOrientation( pb.GetLocalProjectionOrientation() );
			}
		}	
	}
};

class Packed_MediumTent_Green extends Packed_MediumTent {};
class Packed_MediumTent_Orange extends Packed_MediumTent {};
