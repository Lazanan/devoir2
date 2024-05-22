#include <iostream>
#include "Vehicule.hpp"
#include "Moto.hpp"


std::string Moto::getTypeMoteur()
{
	return(typeMoteur);
}

void Moto::setTypeMoteur(std::string m){
	typeMoteur = m;
}

void Moto::conduire()
{
	std::cout << "En train de conduire un moto" << std::endl;
}

void Moto::affiche()
{
	std::cout << "La marque de ce moto est : "<< Vehicule::getMarque() << " et "<< " son type de moteur est : "<< typeMoteur<< std::endl; 
}

Moto::Moto()
{
}

Moto::~Moto()
{
}

