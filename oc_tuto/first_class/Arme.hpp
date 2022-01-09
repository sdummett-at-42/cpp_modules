/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:51:14 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/06 17:27:55 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARME_HPP
#define ARME_HPP

#include <string>
#include <iostream>

class Arme
{
public:

	Arme();
	Arme(std::string nom, int degats);
	~Arme();
	void	changer(std::string nom, int degats);
	int		getDegats() const;
	void	afficher() const;

private:

	std::string	m_nom;
	int			m_degats;
};

#endif