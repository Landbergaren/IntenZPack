modded class PlayerBase 
{	
	override void EEKilled( Object killer ) 
	{
		super.EEKilled(killer);
		Man killerMan = Man.Cast(killer);
		playerSteamId = this.GetIdentity().GetPlainId();
		PlayerRespawnModel playerRespawn = RespawnFileHandler.Load(playerSteamId);
		if (killerMan) 
		{
			playerRespawn.hasBeenKilledByAnotherPlayer = playerSteamId != killerMan.GetIdentity().GetPlainId();
			
			Print("[Prevent Suicide] hasBeenKilledByPlayer " + hasBeenKilledByAnotherPlayer);
		}
		else 
		{
			playerRespawn.hasBeenKilledByAnotherPlayer = false;
			Print("[Prevent Suicide] Player did not get killed by a player");
		}
		RespawnFileHandler.Save(playerRespawn, playerSteamId)
	}
};
