#include <iostream>
#include "Vehicule.hpp"
#include "Auto.hpp"
#include "Moto.hpp"

using namespace std;

int main()
{
	Moto cross = Moto();
	Auto bmw = Auto();
	
	cross.getTypeMoteur();
	cross.setTypeMoteur("hahaha");
	cross.getMarque();
	cross.setMarque("hehehe");
	cross.conduire();
	cross.affiche();
	
	bmw.getTypeTransmission();
	bmw.setTypeTransmission("kakaka");
	bmw.getMarque();
	bmw.setMarque("kikiki");
	bmw.conduire();
	bmw.affiche();
	
	return (0);
}
