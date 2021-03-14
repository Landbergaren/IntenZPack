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
        int currentTimestamp = currentJMDate.GetTimestamp();
		string playerSteamId = identity.GetPlainId()
		PlayerRespawnModel playerRespawn = RespawnFileHandler.Load(playerSteamId);
		if ( playerRespawn.previousSpawn ) 
		{
			if ( !playerRespawn.hasBeenKilledByAnotherPlayer && !PlayerLivedLongEnough(currentTimestamp, playerRespawn) ) 
			{
				Print("[Prevent Suicide] player has suicided");
				Print("[Prevent Suicide] spawn position changed from " + pos + " to " + playerRespawn.previousSpawn);
				pos = playerRespawn.previousSpawn;
			}
		}
		playerRespawn.previousSpawn = pos;
		playerRespawn.previousSpawnTimestamp = currentTimestamp;
		RespawnFileHandler.Save(playerRespawn, playerSteamId)
		if ( CreateCharacter(identity, pos, ctx, characterType) )
		{
			EquipCharacter( GetGame().GetMenuDefaultCharacterData() );
		}
		
		return m_player;
	}
	
	private bool PlayerLivedLongEnough( int currentTimestamp, PlayerBase playerRespawn )  
	{
		if ( !playerRespawn.previousSpawnTimestamp ) 
		{
			return true;
		}
		const int minimumTime = 600;
		Print("[Prevent Suicide] currentTimestamp inside PlayerLivedLongEnough(): " + currentTimestamp);
		Print("[Prevent Suicide] playerRespawn.previousSpawnTimestamp inside PlayerLivedLongEnough(): " + playerRespawn.previousSpawnTimestamp);
		int minutesBetweenDeaths = currentTimestamp - currentPlayer.previousSpawnTimestamp;
		Print("[Prevent Suicide] minutesBetweenDeaths inside PlayerLivedLongEnough() " + minutesBetweenDeaths);
		return minutesBetweenDeaths > minimumTime;
	}
};
