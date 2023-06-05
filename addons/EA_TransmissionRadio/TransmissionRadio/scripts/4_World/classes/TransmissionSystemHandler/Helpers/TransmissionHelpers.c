/*Class that deals with my core class, where config, client and server part of my code are created*/
static ref EA_TransmissionRadioCore m_EA_TransmissionRadioCore;
static EA_TransmissionRadioCore GetEA_TransmissionRadioCore() {
	if ( !m_EA_TransmissionRadioCore ) {
		m_EA_TransmissionRadioCore = new EA_TransmissionRadioCore;
	}
	return m_EA_TransmissionRadioCore;
}

static EA_TransmissionRadioServer GetEA_TransmissionRadioServer() {
	return m_EA_TransmissionRadioCore.m_EA_TransmissionRadioServer;
}

/*clas that allows me to access the client class */
static ref EA_TransmissionRadioSettings GetTransmissionConfig()	{
	return GetEA_TransmissionRadioCore().m_EA_TransmissionRadioSettings;
}

class TransmissionHelpers
{
	/*Function that allows to get the player variable from its identity => used for RPC*/
	static PlayerBase GetPlayerByIdentity(PlayerIdentity sender)
	{
		int	low	 =	0;
		int	high =	0;
		GetGame().GetPlayerNetworkIDByIdentityID( sender.GetPlayerId(), low, high );
		return PlayerBase.Cast( GetGame().GetObjectByNetworkId(low, high ));
	}
}
