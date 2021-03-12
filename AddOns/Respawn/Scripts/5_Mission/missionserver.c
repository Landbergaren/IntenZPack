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
		if (m_player.previousSpawn) 
		{
			if (!m_player.hasBeenKilledByPlayer && !PlayerLivedLongEnough()) 
			{
				Print("[Prevent Suicide] player has suicided");
				Print("[Prevent Suicide] m_player.hasBeenKilledByPlayer inside of OnClinetNewEvent" + m_player.hasBeenKilledByPlayer);
				Print("[Prevent Suicide] spawwn position changed from " + pos + " to " + m_player.previousSpawn);
				pos = m_player.previousSpawn;
			}
		}
		m_player.previousSpawnTimestamp = JMDate.GetTimestamp();
		if (CreateCharacter(identity, pos, ctx, characterType))
		{
			EquipCharacter(GetGame().GetMenuDefaultCharacterData());
		}
		
		return m_player;
	}
	
	private bool PlayerLivedLongEnough()  
	{
		if (!m_player.previousSpawnTimestamp) 
		{
			return true;
		}
		const int minimumTime = 10;
		int currentDateTime = JMDate.GetTimestamp(); 
		Print("[Prevent Suicide] currentDateTime inside PlayerLivedLongEnough(): " + currentDateTime);
		Print("[Prevent Suicide] m_player.previousSpawnTimestamp inside PlayerLivedLongEnough(): " + m_player.previousSpawnTimestamp);
		int minutesBetweenDeaths = 0;
		JMDate.TimestampCalculMinutes( m_player.previousSpawnTimestamp, currentDateTime, minutesBetweenDeaths );
		Print("[Prevent Suicide] minutesBetweenDeaths inside PlayerLivedLongEnough() " + minutesBetweenDeaths);
		return minutesBetweenDeaths > minimumTime;
	}
};
