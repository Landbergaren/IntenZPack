modded class MissionServer 
{
	PlayerBase OnClientNewEvent(PlayerIdentity identity, vector pos, ParamsReadContext ctx)
	{
		string characterType;
		//m_RespawnMode = GetGame().ServerConfigGetInt("setRespawnMode"); //todo - init somewhere safe
		SyncRespawnModeInfo(identity);
		// get login data for new character
		if ( ProcessLoginData(ctx) && (m_RespawnMode == GameConstants.RESPAWN_MODE_CUSTOM) && !GetGame().GetMenuDefaultCharacterData(false).IsRandomCharacterForced() )
		{
			if (GetGame().ListAvailableCharacters().Find(GetGame().GetMenuDefaultCharacterData().GetCharacterType()) > -1)
				characterType = GetGame().GetMenuDefaultCharacterData().GetCharacterType();
			else //random type
				characterType = GetGame().CreateRandomPlayer();
		}
		else
		{
			characterType = GetGame().CreateRandomPlayer();
			GetGame().GetMenuDefaultCharacterData().GenerateRandomEquip();
		}
		// IntenZ suicide check
        JMDate currentJMDate = JMDate.Now( true );
        int currentTimeStamp = currentJMDate.GetTimestamp();
		if ( m_player.previousSpawn ) 
		{
			if ( !m_player.hasBeenKilledByPlayer && !PlayerLivedLongEnough(currentTimeStamp) ) 
			{
				Print("[Prevent Suicide] player has suicided");
				Print("[Prevent Suicide] m_player.hasBeenKilledByPlayer inside of OnClinetNewEvent" + m_player.hasBeenKilledByPlayer);
				Print("[Prevent Suicide] spawn position changed from " + pos + " to " + m_player.previousSpawn);
				pos = m_player.previousSpawn;
			}
		}
		m_player.previousSpawnTimestamp = currentTimeStamp;
		if ( CreateCharacter(identity, pos, ctx, characterType) )
		{
			EquipCharacter( GetGame().GetMenuDefaultCharacterData() );
		}
		
		return m_player;
	}
	
	private bool PlayerLivedLongEnough( int currentTimeStamp )  
	{
		if ( !m_player.previousSpawnTimestamp ) 
		{
			return true;
		}
		const int minimumTime = 10;
		Print("[Prevent Suicide] currentDateTime inside PlayerLivedLongEnough(): " + currentTimeStamp);
		Print("[Prevent Suicide] m_player.previousSpawnTimestamp inside PlayerLivedLongEnough(): " + m_player.previousSpawnTimestamp);
		int minutesBetweenDeaths = currentTimeStamp - m_player.previousSpawnTimestamp;
		Print("[Prevent Suicide] minutesBetweenDeaths inside PlayerLivedLongEnough() " + minutesBetweenDeaths);
		return minutesBetweenDeaths > minimumTime;
	}
};
