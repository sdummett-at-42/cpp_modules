/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Duree.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:04:41 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/08 19:10:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUREE_HPP
#define DUREE_HPP

#include <iostream>

class	Duree
{
public :

	Duree(int heures = 0, int minutes = 0, int secondes = 0);
	bool	estEgal(Duree const& b) const;
	bool	estPlusPetitQue(Duree const& b) const;
	Duree	calculAddition(Duree const& b) const;
	int		getHeures();
	int		getMinutes();
	int		getSecondes();
	void	afficher(std::ostream &flux) const;

private :

	int m_heures;
	int	m_minutes;
	int	m_secondes;
};

bool	operator==(Duree const& a, Duree const& b);
bool	operator!=(Duree const& a, Duree const& b);
bool	operator<(Duree const& a, Duree const& b);
bool	operator>(Duree const& a, Duree const& b);

Duree	operator+(Duree const& a, Duree const& b);
Duree	operator-(Duree const& a, Duree const& b);
Duree	operator*(Duree const& a, Duree const& b);
Duree	operator/(Duree const& a, Duree const& b);
Duree	operator%(Duree const& a, Duree const& b);

std::ostream& operator<<(std::ostream &flux, Duree const& duree);

#endif