#ifndef _VEHICULE_HPP
#define _VEHICULE_HPP
class Vehicule
{
	public:
		Vehicule();
		~Vehicule();
		virtual void conduire() = 0;
		std::string getMarque();
		void setMarque(std::string ma);
	protected:
		std::string marque;
};
#endif
