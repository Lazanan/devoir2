#ifndef _AUTO_HPP_
#define _AUTO_HPP_

class Auto:public Vehicule
{
	public:
		Auto();
		~Auto();
		void conduire();
		void affiche();
		void setTypeTransmission(std::string t);
		std::string getTypeTransmission();
	private:
		std::string typeTransmission;
};
#endif
