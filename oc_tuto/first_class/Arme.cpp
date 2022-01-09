/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:51:24 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/06 17:27:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Arme.hpp"

using namespace std;

Arme::Arme() : m_nom("Epee rouille"), m_degats(10)
{
}

Arme::Arme(std::string nom, int degats) : m_nom(nom), m_degats(degats)
{
}

Arme::~Arme()
{
}

void	Arme::changer(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}
int		Arme::getDegats() const
{
	return (m_degats);
}

void	Arme::afficher() const
{
	cout << "L'arme est " << m_nom << " et possede " << m_degats << " points de degats." << endl;
}