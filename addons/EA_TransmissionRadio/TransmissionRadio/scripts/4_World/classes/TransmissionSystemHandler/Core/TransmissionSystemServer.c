class EA_TransmissionRadioServer
{
  void EA_TransmissionRadioServer()
  {

  }

  void  ~EA_TransmissionRadioServer()
  {

  }

  //-------------------------------------------RPC PART--------------------------------------------------------//
  void TransmissionMenuNotificationRequest(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
  {
    if (!GetGame().IsServer())
      return;

    Param1<string> data;
      if (!ctx.Read(data))
        return;

     PlayerBase player = TransmissionHelpers.GetPlayerByIdentity(sender);

     NotificationSystem.SendNotificationToPlayerIdentityExtended(NULL, GetTransmissionConfig().MessageDuration, GetTransmissionConfig().MessageTitle, data.param1, "EA_TransmissionRadio/datasets/transmissionlogo.paa");
  }
  //---------------------------------------------------------------------------------------------------------//
};
