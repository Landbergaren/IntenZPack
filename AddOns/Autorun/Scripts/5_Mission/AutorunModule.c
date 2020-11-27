enum SimpleAutorunRPCType
{
	Unknown = 8888888,
	UpdateMovement,
	Count
};

class AutorunModule : JMModuleBase
{
	protected int m_MovementMode = DayZPlayerConstants.MOVEMENTIDX_IDLE;
	protected bool m_ShouldSprint = false;
	protected bool m_IsDirty = false;

	protected ref array<string> m_InterruptInputs;

	override void OnInit()
	{
		super.OnInit();

		m_InterruptInputs = new array<string>;
		m_InterruptInputs.Insert("UAMoveForward");
		m_InterruptInputs.Insert("UAMoveBack");
		m_InterruptInputs.Insert("UAMoveLeft");
		m_InterruptInputs.Insert("UAMoveRight");
		m_InterruptInputs.Insert("UAFire");
		m_InterruptInputs.Insert("UATempRaiseWeapon");
		m_InterruptInputs.Insert("UAGetOver");
		m_InterruptInputs.Insert("UAStance");
	}

	protected bool CheckInput(string inputName)
	{
		UAInputAPI inputAPI = GetUApi();
		if (inputAPI)
		{
			UAInput input = inputAPI.GetInputByName(inputName);
			if (input)
			{
				if (input.LocalPress())
				{
					return true;
				}
			}
		}
		return false;
	}

	protected bool CheckInputHold(string inputName)
	{
		UAInputAPI inputAPI = GetUApi();
		if (inputAPI)
		{
			UAInput input = inputAPI.GetInputByName(inputName);
			if (input)
			{
				if (input.LocalHold())
				{
					return true;
				}
			}
		}
		return false;
	}

	protected bool ShouldInterruptAutorun(PlayerBase player)
	{
		if (player.IsInVehicle() || player.IsUnconscious() || player.IsRestrained() || !player.IsAlive())
		{
			return true;
		}

		for (int i = 0; i < m_InterruptInputs.Count(); i++)
		{
			string inputName = m_InterruptInputs[i];
			if (CheckInput(inputName))
			{
				return true;
			}
		}
		return false;
	}

	protected bool IsSprinting()
	{
		return CheckInputHold("UATurbo");
	}

	protected bool CanSprint(PlayerBase player)
	{
		if (!IsMissionHost())
		{
			if (GetGame().GetUIManager().FindMenu(MENU_INVENTORY))
			{
				return false;
			}
		}
		return !(player.GetInputController().LimitsIsSprintDisabled());
	}

	protected void UpdateMovement(PlayerIdentity sender, Object target, ref ParamsReadContext ctx)
	{
		if (!IsMissionHost())
		{
			return;
		}

		int movementMode;
		if (!ctx.Read(movementMode))
		{
			return;
		}

		bool shouldSprint;
		if (!ctx.Read(shouldSprint))
		{
			return;
		}

		PlayerBase player;
		if (!Class.CastTo(player, target))
		{
			return;
		}

		m_MovementMode = movementMode;
		m_ShouldSprint = shouldSprint;
		ApllyMovement(player, m_MovementMode);
	}

	protected void ApllyMovement(PlayerBase player, int movementMode)
	{
		auto controller = player.GetInputController();
		if (movementMode > DayZPlayerConstants.MOVEMENTIDX_IDLE)
		{
			controller.OverrideMovementSpeed(true, movementMode);
			controller.OverrideMovementAngle(true, 1);
		}
		else
		{
			controller.OverrideMovementSpeed(false, 0);
			controller.OverrideMovementAngle(false, 0);
		}
	}

	protected void SetMovementMode(int movementMode, bool shouldSprint = false)
	{
		m_MovementMode = movementMode;
		m_ShouldSprint = shouldSprint;
		m_IsDirty = true;
	}

	protected void ToggleAutorun(bool forceSprint, bool ignoreSprint)
	{
		if (m_MovementMode > DayZPlayerConstants.MOVEMENTIDX_IDLE)
		{
			SetMovementMode(DayZPlayerConstants.MOVEMENTIDX_IDLE);
		}
		else if (m_MovementMode == DayZPlayerConstants.MOVEMENTIDX_IDLE)
		{
			if ((IsSprinting() || forceSprint) && !ignoreSprint)
			{
				SetMovementMode(DayZPlayerConstants.MOVEMENTIDX_SPRINT, true);
			}
			else
			{
				SetMovementMode(DayZPlayerConstants.MOVEMENTIDX_RUN);
			}
		}
	}

	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);

		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		if (!player)
		{
			return;
		}

		Input input = GetGame().GetInput();
		if (!input)
		{
			return;
		}

		if (input.LocalPress("UASimpleAutorunToggleSmart", false))
		{
			ToggleAutorun(false, false);
		}
		else if (input.LocalPress("UASimpleAutorunToggleSprint", false))
		{
			ToggleAutorun(true, false);
		}
		else if (input.LocalPress("UASimpleAutorunToggleRun", false))
		{
			ToggleAutorun(false, true);
		}

		if (m_MovementMode > DayZPlayerConstants.MOVEMENTIDX_IDLE)
		{
			if (ShouldInterruptAutorun(player))
			{
				SetMovementMode(DayZPlayerConstants.MOVEMENTIDX_IDLE);
			}
			else
			{
				if ((m_MovementMode != DayZPlayerConstants.MOVEMENTIDX_SPRINT) && m_ShouldSprint && CanSprint(player))
				{
					SetMovementMode(DayZPlayerConstants.MOVEMENTIDX_SPRINT, m_ShouldSprint);
				}
				if ((m_MovementMode == DayZPlayerConstants.MOVEMENTIDX_SPRINT) && m_ShouldSprint && !CanSprint(player))
				{
					SetMovementMode(DayZPlayerConstants.MOVEMENTIDX_RUN, m_ShouldSprint);
				}
			}
		}

		if (m_IsDirty)
		{
			m_IsDirty = false;
			ApllyMovement(player, m_MovementMode);
			ScriptRPC rpc = new ScriptRPC;
			rpc.Write(m_MovementMode);
			rpc.Write(m_ShouldSprint);
			rpc.Send(player, SimpleAutorunRPCType.UpdateMovement, true);
		}
	}

	override int GetRPCMin()
	{
		return SimpleAutorunRPCType.Unknown;
	}

	override int GetRPCMax()
	{
		return SimpleAutorunRPCType.Count;
	}
	
	override void OnRPC(PlayerIdentity sender, Object target, int rpc_type, ref ParamsReadContext ctx)
	{
		switch (rpc_type)
		{
		case SimpleAutorunRPCType.UpdateMovement:
			UpdateMovement(sender, target, ctx);
			break;
		default:
			break;
		}
	}
};
