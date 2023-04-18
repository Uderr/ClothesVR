using Unity.Netcode;

public class ClientHandler : NetworkBehaviour
{
    private string clientName; //Client's name

    void Start()
    {
        if (!IsOwner && !IsServer)
        {
            this.gameObject.SetActive(false);
        }
    }

    public string GetPlayerName()
    {
        return clientName;
    }

    public void SetPlayerName(string name)
    {
        clientName = name;
    }
}