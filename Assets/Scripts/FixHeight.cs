using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FixHeight : MonoBehaviour
{
    [SerializeField] GameObject Player;
    [SerializeField] GameObject MainPlayer;
    [SerializeField] GameObject MainPlayerRender;
    [SerializeField] GameObject plane;

    private bool isTheCorrectOne = false;
    private float time = 0f;

    void Update()
    {
        time += Time.deltaTime;
        if (!isTheCorrectOne)
        {
            if(gameObject.transform.position.y <= plane.transform.position.y)
            {
                Player.transform.localScale -= new Vector3(0.001f, 0.001f,0.001f);
            }
            else if(gameObject.transform.position.y >= plane.transform.position.y)
            {
                Player.transform.localScale += new Vector3(0.001f, 0.001f, 0.001f);
            }
        }

    }

    private void OnTriggerStay(Collider other)
    {
        if(time >= 7)
        {
            isTheCorrectOne = true;
            MainPlayer.transform.localScale = Player.transform.localScale;
            MainPlayer.SetActive(true);
            MainPlayer.GetComponent<InitPosition>().enabled = true;
            Player.SetActive(false);
        }
    }
}
