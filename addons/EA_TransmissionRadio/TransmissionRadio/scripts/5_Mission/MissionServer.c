modded class MissionServer extends MissionBase
{
	void MissionServer()
	{
		//we create the core class on server in order to have it working on server side
		m_EA_TransmissionRadioCore = NULL;
		GetEA_TransmissionRadioCore();
	}

	void ~MissionServer() {
	}

	override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
	{
		/*I usually send config data from server to client here when the player join*/
		super.InvokeOnConnect(player,identity);
		//GetEA_TransmissionRadioCore().SendConfigToClient(player);
	}

	override void InvokeOnDisconnect( PlayerBase player )
	{
		/*I usually send config data from server to client here when the player join*/
		super.InvokeOnDisconnect(player);
	}
};
