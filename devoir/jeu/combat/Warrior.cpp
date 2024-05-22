    #include <iostream>
    #include <cstdlib>
    #include <ctime> 
    #include "Jeu.hpp"
    #include "Warrior.hpp"

    void Warrior::start()
    {
        
	std::cout << "Entrez start pour commencé le jeu" << std::endl;
	std::string tmp;
	std::cin >> tmp;
	if (tmp == "start")
	{
		gameStatus = 1;
		std::cout << "Le combat commence !" << std::endl;
	}
	else
	{
		std::cout << "commande non reconnue" << std::endl;
	}
        
    }

    void Warrior::restart()
    {
        viePlayer1 = 2000;
        viePlayer2 = 2000;
        gameStatus = 1;
        std::cout << "Les joueurs se préparent pour un nouveau combat !" << std::endl;
    }

    void Warrior::pause()
    {
        gameStatus = -1;
        std::cout << "Le combat est en pause." << std::endl;
    }

    void Warrior::quit()
    {
        gameStatus = 0;
        std::cout << "Le combat est terminé !" << std::endl;
    }

    void Warrior::afficheResultat()
    {
        if (viePlayer1 <= 0 && viePlayer2 <= 0)
            std::cout << "Match nul !" << std::endl;
        else if (viePlayer1 <= 0)
            std::cout << namePlayer2 << " remporte la victoire !" << std::endl;
        else if (viePlayer2 <= 0)
            std::cout << namePlayer1 << " remporte la victoire !" << std::endl;
        else
            std::cout << "Le combat continue..." << std::endl;
    }

    void Warrior::fight()
    {
	start();
        while (gameStatus != 0 && (viePlayer1 > 0 && viePlayer2 > 0))
        {
            std::string action;
            std::cout << "Entrez 'pause' pour mettre le jeu en pause, 'restart' pour recommencer, 'quit' pour quitter, ou 'continue' pour continuer : ";
            std::cin >> action;

            if (action == "pause")
                pause();
            else if (action == "restart")
                restart();
            else if (action == "quit")
                quit();
            else if (action == "continue")
            {
                int degats1 = rand() % 500; // dégats aléatoires entre 0 et 50
                int degats2 = rand() % 500;

                viePlayer1 -= degats2;
                viePlayer2 -= degats1;

                std::cout << namePlayer1 << " subit " << degats2 << " dégâts. Il lui reste " << viePlayer1 << " points de vie." << std::endl;
                std::cout << namePlayer2 << " subit " << degats1 << " dégâts. Il lui reste " << viePlayer2 << " points de vie." << std::endl;

                if (viePlayer1 <= 0 || viePlayer2 <= 0)
                    break;
            }
            else
                std::cout << "Commande non reconnue. Veuillez réessayer." << std::endl;
        }
    }
    void Warrior::setNamePlayer1(std::string p1)
    {
	namePlayer1 = p1;
    }
    void Warrior::setNamePlayer2(std::string p2)
    {
	namePlayer2 = p2;
    }
    std::string Warrior::getNamePlayer1()
    {
	return (namePlayer1);
    }
    std::string Warrior::getNamePlayer2()
    {
	return (namePlayer2);
    }