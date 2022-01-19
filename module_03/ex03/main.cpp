/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/19 23:16:54 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

	ClapTrap	cp;

	// std::cout << std::endl << "< ClapTrap Class >" << std::endl << std::endl;

	// cp.attack("Magician");
	// cp.takeDamage(20);
	// cp.beRepaired(30);
	// ClapTrap cp2 = cp;
	// cp2.attack("Magician");
	// cp2.takeDamage(20);
	// cp2.beRepaired(30);

	// std::cout << std::endl << "< ScavTrap Class >" << std::endl << std::endl;
	// ScavTrap	st("Spider-Man");
	// st.attack("The Lizard");
	// st.takeDamage(20);
	// st.beRepaired(30);
	// ScavTrap st2 = st;
	// st2.attack("Mysterio");
	// st2.takeDamage(20);
	// st2.beRepaired(30);
	// st2.guardGate();
	// st2.attack("NOBODY");

	// std::cout << std::endl << "< FragTrap Class >" << std::endl << std::endl;
	// FragTrap	ft("Superman");
	// ft.attack("Lex Luthor");
	// ft.takeDamage(20);
	// ft.beRepaired(30);
	// FragTrap ft2 = ft;
	// ft2.attack("Brainiac");
	// ft2.takeDamage(20);
	// ft2.beRepaired(30);
	// ft2.highFivesGuys();
	// ft2.attack("Bizzaro");

	std::cout << std::endl << "< DiamondTrap Class >" << std::endl << std::endl;
	// DiamondTrap	dt("Superman");
	DiamondTrap	dt("Spidy");

	std::cout << "NAME        : " << dt.getName() << std::endl;
	std::cout << "HITPOINTS   : " << dt.getHitPoints() << std::endl;
	std::cout << "ENERGY      : " << dt.getEnergy() << std::endl;
	std::cout << "ATTACKDAMAGE: " << dt.getAttackDamage() << std::endl;

	dt.attack("Lex Luthor");
	dt.takeDamage(20);
	dt.beRepaired(30);
	dt.whoAmI();
	DiamondTrap dt2 = dt;
	dt2.attack("Brainiac");
	dt2.takeDamage(20);
	dt2.beRepaired(30);
	dt2.highFivesGuys();
	dt2.attack("Bizzaro");
	dt2.whoAmI();
	return (0);
}