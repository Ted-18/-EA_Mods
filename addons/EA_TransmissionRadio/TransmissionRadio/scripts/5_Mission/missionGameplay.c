modded class MissionGameplay extends MissionBase
{
	void MissionGameplay()
	{
		/*we create the core function on client in order to have the client side working*/
		m_EA_TransmissionRadioCore = NULL;
		GetEA_TransmissionRadioCore();
	}

	override void OnKeyRelease(int key)
	{
		super.OnKeyRelease(key);

		if ( key == KeyCode.KC_ESCAPE )
				if (GetEA_TransmissionRadioCore() && GetEA_TransmissionRadioCore().m_TransmissionMenu)
		  		GetEA_TransmissionRadioCore().m_TransmissionMenu.OnHide();
	}
};
