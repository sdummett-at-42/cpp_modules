/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 18:45:52 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

	/* [ First Test (with default contructor)] */
	std::cout << std::endl;
	DiamondTrap	dt1;
	
	std::cout << "ClapTrap " << dt1.getName() << " has " \
	<< dt1.getHitPoints() << " hitpoints, " << dt1.getEnergy() \
	<< " energy and do " << dt1.getAttackDamage() << " attack damage." \
	<< std::endl;
	dt1.attack("Terminator");
	dt1.takeDamage(20);
	dt1.beRepaired(30);
	dt1.getState();
	dt1.takeDamage(29);
	dt1.getState();
	dt1.takeDamage(1);
	dt1.getState();
	dt1.takeDamage(1);
	dt1.getState();
	for (int i = 0; i < 100; i++) {
		dt1.beRepaired(2);
	}
	dt1.getState();
	dt1.whoAmI();

	/* [ Second Test ] */
	std::cout << std::endl;
	DiamondTrap	dt2("WALL-E");
	
	dt2.getState();
	dt2.attack("Terminator");
	dt2.takeDamage(1000);
	dt2.beRepaired(5);
	dt2.getState();
	dt2.attack("Terminator");
	dt2.attack("Terminator");
	dt2.attack("Terminator");
	dt2.attack("Terminator");
	dt2.takeDamage(5000);
	dt2.getState();
	dt2.beRepaired(1);
	dt2.beRepaired(1);
	dt2.getState();
	for (int i = 0; i < 100; i++) {
		dt2.attack("Terminator");
	}
	dt2.getState();
	dt2.whoAmI();

	/* [ Third Test ] */
	std::cout << std::endl;
	DiamondTrap	dt3("Optimus Prime");
	
	dt3.getState();
	dt3.attack("Bender");
	dt3.takeDamage(1000);
	dt3.getState();
	for (int i = 0; i < 102; i++) {
		dt3.beRepaired(1337);
	}
	dt3.getState();
	for (int i = 0; i < 4; i++) {
		dt3.attack("Bender");
	}
	dt3.getState();
	dt3.takeDamage(132363);
	dt3.getState();
	dt3.whoAmI();

	return (0);
}