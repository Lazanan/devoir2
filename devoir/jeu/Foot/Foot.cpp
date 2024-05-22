#include <iostream>
#include <time.h>
#include "Jeu.hpp"
#include "Foot.hpp"

void Foot::start()
{
    scorePlayer1 = 0;
    scorePlayer2 = 0;
    matchDuration = 5;
    Jeu::gameStatus = 1;
    cout << "Debut du match" << endl;
}

void Foot::restart()
{
    matchDuration = 5;
    scorePlayer1 = 0;
    scorePlayer2 = 0;
    Jeu::gameStatus = 1;
    cout << "Match recommencé" << endl;
}

void Foot::pause()
{
    Jeu::gameStatus = -1;
}

void Foot::quit()
{
    Jeu::gameStatus = 0;
    matchDuration = 0;
    cout << "Vous avez quittez le jeu" << endl;
}

void Foot::match()
{
    string tmp;
    cout << "Entrer start si vous voulez commencer" << endl;
    cin >> tmp;
    if (tmp == "start")
    {
        start();
    }
    else
    {
        quit();
    }
    while(Jeu::gameStatus!=0 and matchDuration>0)
    {
        string s;
        cout << "Entrez pause ou quit ou bien entrez continue si vous voulez continuer le jeu" << endl;
        cin >> s;
        if (s!="continue")
        {
            if (s == "pause")
            {
                pause();
                continue;
            }
            else if (s == "restart")
            {
                start();
            }
            else
            {
                quit();
            }
        }
        else
        {
            srand(time(0));
            matchDuration--;
            double tmp1 = rand();
            double tmp2 = rand();
            if (tmp1 > tmp2)
            {
                scorePlayer1++;
                cout << "Le joueur 1 marque un but" << endl;
            }
            else if (tmp1 < tmp2)
            {
                scorePlayer2++;
                cout << "Le joueur 2 marque un but" << endl;
            }
        }
    }
}

void Foot::setNamePlayer1(string n1)
{
    namePlayer1 = n1;
}

void Foot::setNamePlayer2(string n2)
{
    namePlayer2 = n2;
}

string Foot::getNamePlayer1()
{
    return (namePlayer1);
}

string Foot::getNamePlayer2()
{
    return (namePlayer2);
}

void Foot::setMatchDuration(int m)
{
    matchDuration = m;
}

int Foot::getMatchDuration()
{
    return (matchDuration);
}

void Foot::afficheResultat()
{
    if (scorePlayer1 > scorePlayer2)
    {
        cout << "Le joueur 1 gagne" << endl;
        cout << "Joueur 1 : "<<scorePlayer1 <<" - "<< " Joueur 2 : "<<scorePlayer2 <<endl;
    }
    else if (scorePlayer2 > scorePlayer1)
    {
        cout << "Le joueur 2 gagne" << endl;
        cout << "Joueur 1 : "<<scorePlayer1 <<" - "<< " Joueur 2 : "<<scorePlayer2 <<endl;
    }
    else
    {
        cout << "Match Nul"<< endl;
        cout << "Joueur 1 : "<<scorePlayer1 <<" - "<< " Joueur 2 : "<<scorePlayer2 <<endl;
    }
}
