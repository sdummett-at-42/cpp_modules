/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:23:57 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/06 17:34:54 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Personnage.hpp"

using namespace std;

// Personnage::Personnage()
// {
// 	m_vie = 100;
// 	m_mana = 100;
// 	m_nomArme = "Epee rouillee";
// 	m_degatsArme = 10;
// }

Personnage::Personnage() : m_vie(100), m_mana(100)
{
	
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),\
m_arme(nomArme, degatsArme)
{
	
}

Personnage::~Personnage()
{
	// No allocation in this class, so this destructor is pretty useless
}
void	Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;
	if (m_vie < 0)
		m_vie = 0;
}

void	Personnage::attaquer(Personnage &cible)
{
	cible.recevoirDegats(m_arme.getDegats());
}

void	Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;
	if (m_vie > 100)
		m_vie = 100;
}

void	Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

void	Personnage::afficherEtat() const
{
	cout << "Vie: " << m_vie << endl;
	cout << "Mana: " << m_mana << endl;
	m_arme.afficher();
}

bool	Personnage::estVivant() const
{
	if (m_vie > 0)
		return (true);
	else
		return (false);
}
