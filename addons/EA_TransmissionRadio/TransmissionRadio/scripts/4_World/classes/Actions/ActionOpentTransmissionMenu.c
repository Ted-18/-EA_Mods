class ActionOpenTransmissionMenu: ActionInteractBase
{
	void ActionOpenTransmissionMenu()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_HUDCursorIcon = CursorIcons.CloseHood;
	}

    override void CreateConditionComponents()
		{
			m_ConditionTarget = new CCTObject(8);
			m_ConditionItem = new CCINone;
		}

	override string GetText()
	{
		return "Transmission Menu";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        if ( GetGame().IsServer() )
            return true;

				BuildingBase nObject = BuildingBase.Cast( target.GetObject() );
				if (nObject && nObject.IsKindOf("EA_Channel7"))
					return true;

				return false;
    }

    override void OnStartClient(ActionData action_data)
    {
        OpenTransmissionMenu(action_data.m_Target.GetObject());
    }

	void OpenTransmissionMenu(Object obj)
	{
			if ( g_Game.GetUIManager().GetMenu() == NULL )
			{
				GetEA_TransmissionRadioCore().m_TransmissionMenu = new TransmissionMenu;
				GetEA_TransmissionRadioCore().m_TransmissionMenu.Init();
				GetGame().GetUIManager().ShowScriptedMenu( GetEA_TransmissionRadioCore().m_TransmissionMenu, NULL );
			}
	}
}
