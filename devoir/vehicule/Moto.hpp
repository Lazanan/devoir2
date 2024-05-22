#ifndef _MOTO_HPP_
#define _MOTO_HPP_

class Moto:public Vehicule
{
	public:
		Moto();
		~Moto();
		void conduire();
		void affiche();
		void setTypeMoteur( std::string m);
		std::string getTypeMoteur();
	private:
		std::string typeMoteur;
};
#endif
