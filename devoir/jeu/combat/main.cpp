#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Jeu.hpp"
#include "Warrior.hpp"

int main()
{
    srand(time(0)); 

    Warrior combat;
    combat.setNamePlayer1("Joueur 1");
    combat.setNamePlayer2("Joueur 2");

    combat.fight();
    combat.afficheResultat();

    return (0);
}
