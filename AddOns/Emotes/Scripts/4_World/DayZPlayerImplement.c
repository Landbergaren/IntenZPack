modded class DayZPlayerImplement extends DayZPlayer
{
	protected const int EMOTES_COUNT = 40;

	protected static string m_EmotesBindUA[EMOTES_COUNT] = 
	{
		"UAEmoteBind_ID_EMOTE_GREETING",
		"UAEmoteBind_ID_EMOTE_SOS",
		"UAEmoteBind_ID_EMOTE_HEART",
		"UAEmoteBind_ID_EMOTE_TAUNT",
		"UAEmoteBind_ID_EMOTE_LYINGDOWN",
		"UAEmoteBind_ID_EMOTE_TAUNTKISS",
		"UAEmoteBind_ID_EMOTE_FACEPALM",
		"UAEmoteBind_ID_EMOTE_TAUNTELBOW",
		"UAEmoteBind_ID_EMOTE_THUMB",
		"UAEmoteBind_ID_EMOTE_THROAT",
		"UAEmoteBind_ID_EMOTE_SUICIDE",
		"UAEmoteBind_ID_EMOTE_DANCE",
		"UAEmoteBind_ID_EMOTE_CAMPFIRE",
		"UAEmoteBind_ID_EMOTE_SITA",
		"UAEmoteBind_ID_EMOTE_SITB",
		"UAEmoteBind_ID_EMOTE_THUMBDOWN",
		"UAEmoteBind_ID_EMOTE_DABBING",
		"UAEmoteBind_ID_EMOTE_TIMEOUT",
		"UAEmoteBind_ID_EMOTE_CLAP",
		"UAEmoteBind_ID_EMOTE_POINT",
		"UAEmoteBind_ID_EMOTE_SILENT",
		"UAEmoteBind_ID_EMOTE_SALUTE",
		"UAEmoteBind_ID_EMOTE_RPS",
		"UAEmoteBind_ID_EMOTE_WATCHING",
		"UAEmoteBind_ID_EMOTE_HOLD",
		"UAEmoteBind_ID_EMOTE_LISTENING",
		"UAEmoteBind_ID_EMOTE_POINTSELF",
		"UAEmoteBind_ID_EMOTE_LOOKATME",
		"UAEmoteBind_ID_EMOTE_TAUNTTHINK",
		"UAEmoteBind_ID_EMOTE_MOVE",
		"UAEmoteBind_ID_EMOTE_DOWN",
		"UAEmoteBind_ID_EMOTE_COME",
		"UAEmoteBind_ID_EMOTE_RPS_R",
		"UAEmoteBind_ID_EMOTE_RPS_P",
		"UAEmoteBind_ID_EMOTE_RPS_S",
		"UAEmoteBind_ID_EMOTE_NOD",
		"UAEmoteBind_ID_EMOTE_SHAKE",
		"UAEmoteBind_ID_EMOTE_SHRUG",
		"UAEmoteBind_ID_EMOTE_SURRENDER",
		"UAEmoteBind_ID_EMOTE_VOMIT",
	};

	protected static int m_EmotesBindID[EMOTES_COUNT] = 
	{
		EmoteConstants.ID_EMOTE_GREETING,
		EmoteConstants.ID_EMOTE_SOS,
		EmoteConstants.ID_EMOTE_HEART,
		EmoteConstants.ID_EMOTE_TAUNT,
		EmoteConstants.ID_EMOTE_LYINGDOWN,
		EmoteConstants.ID_EMOTE_TAUNTKISS,
		EmoteConstants.ID_EMOTE_FACEPALM,
		EmoteConstants.ID_EMOTE_TAUNTELBOW,
		EmoteConstants.ID_EMOTE_THUMB,
		EmoteConstants.ID_EMOTE_THROAT,
		EmoteConstants.ID_EMOTE_SUICIDE,
		EmoteConstants.ID_EMOTE_DANCE,
		EmoteConstants.ID_EMOTE_CAMPFIRE,
		EmoteConstants.ID_EMOTE_SITA,
		EmoteConstants.ID_EMOTE_SITB,
		EmoteConstants.ID_EMOTE_THUMBDOWN,
		EmoteConstants.ID_EMOTE_DABBING,
		EmoteConstants.ID_EMOTE_TIMEOUT,
		EmoteConstants.ID_EMOTE_CLAP,
		EmoteConstants.ID_EMOTE_POINT,
		EmoteConstants.ID_EMOTE_SILENT,
		EmoteConstants.ID_EMOTE_SALUTE,
		EmoteConstants.ID_EMOTE_RPS,
		EmoteConstants.ID_EMOTE_WATCHING,
		EmoteConstants.ID_EMOTE_HOLD,
		EmoteConstants.ID_EMOTE_LISTENING,
		EmoteConstants.ID_EMOTE_POINTSELF,
		EmoteConstants.ID_EMOTE_LOOKATME,
		EmoteConstants.ID_EMOTE_TAUNTTHINK,
		EmoteConstants.ID_EMOTE_MOVE,
		EmoteConstants.ID_EMOTE_DOWN,
		EmoteConstants.ID_EMOTE_COME,
		EmoteConstants.ID_EMOTE_RPS_R,
		EmoteConstants.ID_EMOTE_RPS_P,
		EmoteConstants.ID_EMOTE_RPS_S,
		EmoteConstants.ID_EMOTE_NOD,
		EmoteConstants.ID_EMOTE_SHAKE,
		EmoteConstants.ID_EMOTE_SHRUG,
		EmoteConstants.ID_EMOTE_SURRENDER,
		EmoteConstants.ID_EMOTE_VOMIT,
	};

	void HandleEmotesBind()
	{
		// Just make extra sure!
		if (GetGame().IsMultiplayer() && !GetGame().IsClient())
			return;
		
		PlayerBase player = PlayerBase.Cast(this);
		if (!player || player.IsRestrained() || player.IsUnconscious())
			return;
		
		EmoteManager em = player.GetEmoteManager();
		if (!em)
			return;
		
		UAInputAPI uapi = GetUApi();
		if (!uapi)
			return;
		
		// Cycle through the custom user actions
		for (int i = 0; i < EMOTES_COUNT; ++i)
		{
			if (uapi.GetInputByName(m_EmotesBindUA[i]).LocalPress())
			{
				em.CreateEmoteCBFromMenu(m_EmotesBindID[i]);
				break;
			}
		}
	};

	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)
	{
		super.CommandHandler(pDt, pCurrentCommandID, pCurrentCommandFinished);
	
		HandleEmotesBind();
	};
};
