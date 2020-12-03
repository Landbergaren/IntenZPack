/*class Packed_PartyTent: PartyTent
{	
	protected Object	PartyTent1;
	protected Object	PartyTent2;
	protected Object	PartyTent3;
	protected Object	PartyTent4;

	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
			
		PlayerBase pb = PlayerBase.Cast( player );
		
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector newPosition = player_base.GetLocalProjectionPosition();
			vector newOrientation = player_base.GetLocalProjectionOrientation();
				
			PartyTent1 = GetGame().CreateObject("PartyTent", pb.GetLocalProjectionPosition(), false );
			PartyTent1.SetPosition( position );
			PartyTent1.SetOrientation( orientation );
		
			if ( !m_ClutterCutter )
			{
				m_ClutterCutter = GetGame().CreateObjectEx( "LargeTentClutterCutter", pb.GetLocalProjectionPosition(), ECE_PLACE_ON_SURFACE );
				m_ClutterCutter.SetOrientation( pb.GetLocalProjectionOrientation() );	
			}
		}	
	}
};

class Packed_PartyTent_Blue extends Packed_PartyTent {};
class Packed_PartyTent_Brown extends Packed_PartyTent {};
class Packed_PartyTent_Lunapark extends Packed_PartyTent {};
