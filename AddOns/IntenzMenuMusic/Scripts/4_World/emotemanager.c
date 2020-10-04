/*modded class EmoteManager
{
	//! Checks if the Umbrella in hand is open 
	bool IsUmbrellaOpen()
	{
		Umbrella_ColorBase umbrella = IsHoldingUmbrella();
		
		if(umbrella && umbrella.IsOpen() )
		{
			return true;
		}
			
		return false;
	}
	
	//! Checks if the Player is holding an Umbrella
	Umbrella_ColorBase IsHoldingUmbrella()
	{
		PlayerBase player = GetGame().GetPlayer();
		
		if (player)
		{
			Umbrella_ColorBase umbrella;
			umbrella = player.GetHumanInventory().GetEntityInHands();
			
			if(umbrella && umbrella.IsInherited(Umbrella_ColorBase))
			{
				return umbrella;
			}
		}
		
		return null;
	}
	
	override bool PlayEmote( int id )
	{
		if (!CanPlayEmote(id))
		{
			m_Player.SetInventorySoftLock(false);
			return false;
		}
		
		actionDebugPrint("[emote] " + Object.GetDebugName(m_Player) + " play emote id=" + id + " IH=" + Object.GetDebugName(m_Player.GetItemInHands()));
		
		m_PreviousGestureID = m_CurrentGestureID;
		m_CurrentGestureID = id;
		if( id > 0)
		{
			switch ( id )
			{
				case ID_EMOTE_GREETING :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_GREETING,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_GREETING,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_SOS :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE)) 	CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SOS,DayZPlayerConstants.STANCEMASK_ERECT,true);
					HideItemInHands();
				break;
			
				case ID_EMOTE_HEART :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_HEART,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_HEART,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
					HideItemInHands();
				break;
			
				case ID_EMOTE_TAUNT :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNT,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TAUNT,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_LYINGDOWN :
					vector water_info = HumanCommandSwim.WaterLevelCheck( m_Player, m_Player.GetPosition() - (m_Player.GetDirection() * 0.9) );
					if ( water_info[0] < WATER_DEPTH ) //is player able to lay down without "drowning"?
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN,DayZPlayerConstants.STANCEMASK_CROUCH,true);
						HideItemInHands();
					}
				break;
			
				case ID_EMOTE_TAUNTKISS :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNTKISS,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TAUNTKISS,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_POINT :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_POINT,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_POINT,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_TAUNTELBOW :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNTELBOW,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					HideItemInHands();
				break;
				
				case ID_EMOTE_THUMB :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_THUMB,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_THUMB,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_THUMBDOWN :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_THUMBDOWN,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_THUMBDOWN,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_THROAT :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_THROAT,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_THROAT,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_SUICIDE :
					int suicideID = DayZPlayerConstants.CMD_SUICIDEFB_UNARMED;
					int m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
					string suicideStr;
					ItemBase weapon;
					weapon = m_Player.GetItemInHands();
					//suicideID = DayZPlayerConstants.CMD_SUICIDEFB_UNARMED; //unarmed suicide...optional?
					if (weapon)
					{
						if (weapon.ConfigIsExisting("suicideAnim"))
						{
							suicideStr = weapon.ConfigGetString("suicideAnim");
						}
						
						if (weapon.IsKindOf("Pistol_Base"))
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_PISTOL;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
							m_Player.OverrideShootFromCamera(false);
						}

						else if (weapon.IsKindOf("Rifle_Base"))
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_RIFLE;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
							m_Player.OverrideShootFromCamera(false);
						}
						
						else if (suicideStr == "onehanded")
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_1HD;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
						}
						
						else if (suicideStr == "fireaxe")
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_FIREAXE;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "pitchfork")
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_PITCHFORK;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "sword" && !IsUmbrellaOpen())
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_SWORD;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "spear")
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_SPEAR;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "woodaxe")
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_WOODAXE;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
					
						else
							suicideID = -1;
					}
			
					if (suicideID > -1)
					{
						CreateEmoteCallback(EmoteCB, suicideID, m_StanceMask, true);
					}
					else
						m_Player.SetInventorySoftLock(false);
				break;
			
				case ID_EMOTE_DANCE:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_DANCE,DayZPlayerConstants.STANCEMASK_ERECT,true);
					HideItemInHands();
				break;
				
				case ID_EMOTE_SALUTE:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SALUTE,DayZPlayerConstants.STANCEMASK_ERECT,true);
					HideItemInHands();
				break;
				
				case ID_EMOTE_TIMEOUT:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TIMEOUT,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
						HideItemInHands();
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TIMEOUT,DayZPlayerConstants.STANCEMASK_PRONE,true);
						HideItemInHands();
					}
					
				break;
				
				case ID_EMOTE_DABBING:
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_DABBING,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
					HideItemInHands();
				break;
				
				case ID_EMOTE_FACEPALM:
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_FACEPALM,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
					//HideItemInHands();
				break;
				
				case ID_EMOTE_CLAP:
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_CLAP,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
					HideItemInHands();
				break;
				
				case ID_EMOTE_SILENT:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_SILENCE,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
						//HideItemInHands();
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SILENCE,DayZPlayerConstants.STANCEMASK_PRONE,true);
						//HideItemInHands();
					}
				break;
				
				case ID_EMOTE_WATCHING:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_WATCHING,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_WATCHING,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_HOLD:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_HOLD,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_HOLD,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_LISTENING:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_LISTENING,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_LISTENING,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_POINTSELF:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_POINTSELF,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_POINTSELF,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_LOOKATME:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_LOOKATME,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_LOOKATME,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_TAUNTTHINK :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNTTHINK,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TAUNTTHINK,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_MOVE :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_MOVE,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_MOVE,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_DOWN :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_DOWN,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_DOWN,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_COME :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_COME,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_COME,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_SURRENDER :
					if ( !m_IsSurrendered )
					{
						PlaySurrenderInOut(true);
					}
					else if ( m_IsSurrendered )
					{
						if ( m_Player.GetItemInHands() )
							m_Player.GetItemInHands().Delete();
					}
				break;
				
				case ID_EMOTE_CAMPFIRE :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_CAMPFIRE,DayZPlayerConstants.STANCEMASK_CROUCH,true);
					HideItemInHands();
				break;
				
				case ID_EMOTE_SITA :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SITA,DayZPlayerConstants.STANCEMASK_CROUCH,true);
				break;
				
				case ID_EMOTE_SITB :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SITB,DayZPlayerConstants.STANCEMASK_CROUCH,true);
				break;
				
				case ID_EMOTE_RPS :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_RPS_R :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_RPS_P :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_RPS_S :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_NOD :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_NODHEAD,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_SHAKE :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_SHAKEHEAD,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SHAKEHEAD,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_SHRUG :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_SHRUG,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SHRUG,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_VOMIT :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
					{
						ref SymptomBase symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
	        			
			            if ( symptom )
			            { 
			                symptom.SetDuration(Math.RandomIntInclusive(4,8));
			            }
					}
				break;
				
				default :
					Print("EmoteManager.c | PlayEmote | WRONG ID");
					m_bEmoteIsPlaying = false;
					return false;
				break;
			}
		}
		if ( m_bEmoteIsPlaying )
		{
			m_Player.SetInventorySoftLock(true);
			if(m_Callback.m_IsFullbody)
			{
				SetEmoteLockState(true);
			}
		}
		
		return true;
	}
};
