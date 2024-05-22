#ifndef _WARRIOR_HPP
#define _WARRIOR_HPP

class Warrior : public Jeu
{
	private:
    		std::string namePlayer1;
    		std::string namePlayer2;
    		int viePlayer1;
    		int viePlayer2;

	public:
    		Warrior();
		~Warrior();
    		void setNamePlayer1(std::string p1) { namePlayer1 = p1; }
    		void setNamePlayer2(std::string p2) { namePlayer2 = p2; }
    		std::string getNamePlayer1() { return namePlayer1; }
    		std::string getNamePlayer2() { return namePlayer2; }
		void start();
		void restart();
		void pause();
		void quit();
		void afficheResultat();
		void fight();
};

#endif