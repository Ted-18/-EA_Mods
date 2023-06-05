//Function with 4 parameters

class funcNotifications
{
    static void SendClue(PlayerBase player, string message)
    {
        string titleNotification = "Vous réfléchissez...";
        string imageNotification = "EA_Cooking/images/clue.paa";

        NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, message, imageNotification);
    }
}