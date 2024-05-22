#include <iostream>
#include "Vehicule.hpp"

Vehicule::Vehicule()
{
}

Vehicule::~Vehicule()
{
}

std::string Vehicule::getMarque()
{
	return(marque);
}

void Vehicule::setMarque(std::string ma)
{
	marque = ma;
}

void Vehicule::conduire()
{
	std::cout << "En train de conduire" << std::endl;
}
