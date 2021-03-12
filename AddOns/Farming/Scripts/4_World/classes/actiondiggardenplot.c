modded class ActionDigGardenPlot: ActionDeployObject
{	
	override void OnFinishProgressServer( ActionData action_data )
	{
		PlaceObjectActionData poActionData;
		poActionData = PlaceObjectActionData.Cast(action_data);
		EntityAI entity_for_placing = action_data.m_MainItem;
		vector position = action_data.m_Player.GetLocalProjectionPosition();
		vector orientation = action_data.m_Player.GetLocalProjectionOrientation();
		
		if ( GetGame().IsMultiplayer() )
		{
			m_GardenPlot = GardenPlot.Cast( action_data.m_Player.GetHologramServer().PlaceEntity( entity_for_placing ));
			m_GardenPlot.SetOrientation( orientation );
			action_data.m_Player.GetHologramServer().CheckPowerSource();
			action_data.m_Player.PlacingCompleteServer();	
			
			m_GardenPlot.OnPlacementComplete( action_data.m_Player );
		}
		
		//local singleplayer
		if ( !GetGame().IsMultiplayer())
		{
			m_GardenPlot = GardenPlot.Cast( action_data.m_Player.GetHologramLocal().PlaceEntity( entity_for_placing ));
			m_GardenPlot.SetOrientation( orientation );
			action_data.m_Player.PlacingCompleteLocal();
			
			m_GardenPlot.OnPlacementComplete( action_data.m_Player );
		}
		
		GetGame().ClearJuncture( action_data.m_Player, entity_for_placing );
		action_data.m_MainItem.SetIsBeingPlaced( false );
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		poActionData.m_AlreadyPlaced = true;
		action_data.m_MainItem.SoundSynchRemoteReset();
		
		MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 150);
	}
};
