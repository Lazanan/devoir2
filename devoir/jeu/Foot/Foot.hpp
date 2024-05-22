#ifndef _FOOT_HPP_
#define _FOOT_HPP_

class Foot: public Jeu
{
    private:
        string namePlayer1;
        string namePlayer2;
        int scorePlayer1;
        int scorePlayer2;
        int matchDuration;
    public:
        void setNamePlayer1(string p1);
        void setNamePlayer2(string p2);
        string getNamePlayer1();
        string getNamePlayer2();
        void setMatchDuration(int m);
        int getMatchDuration();
        void match();
        void afficheResultat();
        void start();
        void pause();
        void restart();
        void quit();
};

#endif