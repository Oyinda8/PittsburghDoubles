#define FOREVER while(true)//for an indefinite loop


bool Game()
{

    int raw_server_score = 0, raw_receivers_score = 0;//score for each side during the game

    bool serverWin;// true if server wins volley, false if receivers win volley

    

    FOREVER
    {

        serverWin=volley();

        if(serverWin)
        {
            raw_server_score++;
            if (raw_server_score>=4 && raw_server_score >= raw_receivers_score+2)
            {
                return true;//end game and return that server won
            }
        }else{
            raw_receivers_score++;
            if (raw_receivers_score>=4 && raw_double_score >= raw_server_score+2)
            {
                return false;//end game and return that receivers players won
            }
        }
        
        SwitchServingSide();//server switches serving side after each point

        //receivers switch receiving hand after every 2 points
        if ((raw_server_score+raw_receivers_score)%2)
        {
            SwitchReceveivingSide;
        }
    }

}

void main()
{
    Player *player1 = new Player(1), *player2 = new Player(2), *player3 = new Player(3);
    

}

class Player
{
public:
    Player(int i):playerNumber(i) {}
    int playerNumber;
    int gamesWon=0;
    int gamesServed=0;

};


