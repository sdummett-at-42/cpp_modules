/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:22:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/06 17:32:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include "Arme.hpp"

class Personnage
{
	// Methods
	public:

	Personnage();
	Personnage(std::string nomArme, int degatsArme);
	~Personnage();
	void	recevoirDegats(int nbDegats);
	void 	attaquer(Personnage &cible);
	void 	boirePotionDeVie(int quantitePotion);
	void 	changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	void	afficherEtat() const;
	bool 	estVivant() const;

	// Attributes
	private:

	int			m_vie;
	int			m_mana;
	Arme		m_arme;
};

#endif