class PlayerRespawnFileHandler 
{    
	private const string basePath = "$profile:Respawn\\Respawn-";

    static PlayerRespawnModel Load(string steamID)
	{
		PlayerRespawnModel respawnModelLoad = new PlayerRespawnModel;
		string fileLocation = basePath + steamID + ".json";
	
		if (FileExist(fileLocation))
		{
			JsonFileLoader<PlayerRespawnModel>.JsonLoadFile(fileLocation, respawnModelLoad);
		}
		else
		{
			JsonFileLoader<PlayerRespawnModel>.JsonSaveFile(fileLocation, respawnModelLoad);
		}
		return respawnModelLoad;
	}
	
	static void Save(PlayerRespawnModel respawnModelSave, string steamID)
	{
		string fileLocation = basePath + steamID + ".json";
		JsonFileLoader<PlayerRespawnModel>.JsonSaveFile(fileLocation, respawnModelSave);
	}
}

class PlayerRespawnModel 
{    
	vector previousSpawn;
	int previousSpawnTimestamp;
	bool hasBeenKilledByAnotherPlayer = false;
}