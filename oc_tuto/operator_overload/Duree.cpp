/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Duree.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:07:26 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/08 19:10:16 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duree.hpp"

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), \
m_minutes(minutes), m_secondes(secondes)
{

}

bool	Duree::estEgal(Duree const& b) const{
	if (m_heures == b.m_heures && m_minutes == b.m_minutes && \
		m_secondes == b.m_secondes)
		return (true);
	return (false);
}

bool	operator==(Duree const& a, Duree const& b)
{
	return (a.estEgal(b));
}

bool	operator!=(Duree const& a, Duree const& b)
{
	if (a == b)
		return (false);
	return (true);
}

bool	Duree::estPlusPetitQue(Duree const& b) const{
	if (m_heures < b.m_heures)
		return (true);
	else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
		return (true);
	else if (m_heures == b.m_heures && m_minutes == b.m_minutes && \
		m_secondes < b.m_secondes)
		return (true);
	return (false);
}

bool	operator<(Duree const& a, Duree const& b)
{
	return (a.estPlusPetitQue(b));
}

bool	operator>(Duree const& a, Duree const& b)
{
	return (!(a.estPlusPetitQue(b)));
}

Duree	Duree::calculAddition(Duree const& b) const{
	Duree	resultat(m_heures + b.m_heures, m_minutes + b.m_minutes, m_secondes + b.m_secondes);
	return (resultat);
}

Duree	operator+(Duree const& a, Duree const& b)
{
	return (a.calculAddition(b));
}

int		Duree::getHeures()
{
	return (m_heures);
}

int		Duree::getMinutes()
{
	return (m_minutes);
}

int		Duree::getSecondes()
{
	return (m_secondes);
}

void	Duree::afficher(std::ostream &flux) const
{
	std::cout << m_heures << ":" << m_minutes << ":" << m_secondes;
}

std::ostream& operator<<(std::ostream &flux, Duree const& duree)
{
	duree.afficher(flux);
	return (flux);
}
