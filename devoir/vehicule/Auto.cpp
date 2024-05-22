#include <iostream>
#include "Vehicule.hpp"
#include "Auto.hpp"


std::string Auto::getTypeTransmission()
{
	return(typeTransmission);
}

void Auto::setTypeTransmission(std::string t){
	typeTransmission = t;
}

void Auto::conduire()
{
	std::cout << "En train de conduire une voiture" << std::endl;
}

void Auto::affiche()
{
	std::cout << "La marque de cette voiture est : "<< Vehicule::getMarque() << " et "<< " son type de transmission est : "<< typeTransmission<< std::endl; 
}

Auto::Auto()
{
}

Auto::~Auto()
{
}

