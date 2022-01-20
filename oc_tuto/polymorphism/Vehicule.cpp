/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vehicule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:49:08 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 15:44:53 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vehicule.hpp"
using namespace std;

void Vehicule::affiche() const
{
    cout << "Ceci est un vehicule au prix de " << m_prix << " euros." << endl;
}

Vehicule::~Vehicule() {}

Vehicule::Vehicule(int prix) : 
	m_prix(prix) {}

void Voiture::affiche() const
{
    cout << "Ceci est une voiture au prix de " << m_prix << " euros et ayant " \
	<< m_portes << " portes." << endl;
}

Voiture::Voiture(int prix, int portes) :
	Vehicule(prix),
	m_portes(portes) {}

Voiture::~Voiture() {}

void Moto::affiche() const
{
    cout << "Ceci est une moto au prix de " << m_prix << " euros et ayant un vitesse max de " \
	<< m_vitesse << " km/h." << endl;
}

Moto::~Moto() {
	
}

Moto::Moto(int prix, double vitesseMax) :
	Vehicule(prix),
	m_vitesse(vitesseMax) {}

int	Voiture::nbRoues() const {
	return (4);
}

int	Moto::nbRoues() const {
	return (2);
}