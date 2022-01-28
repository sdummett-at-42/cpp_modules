/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 18:44:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	/* [ First Test (with default contructor)] */
	std::cout << std::endl;
	FragTrap	ft1;
	
	std::cout << "ClapTrap " << ft1.getName() << " has " \
	<< ft1.getHitPoints() << " hitpoints, " << ft1.getEnergy() \
	<< " energy and do " << ft1.getAttackDamage() << " attack damage." \
	<< std::endl;
	ft1.attack("Terminator");
	ft1.takeDamage(20);
	ft1.beRepaired(30);
	ft1.getState();
	ft1.takeDamage(29);
	ft1.getState();
	ft1.takeDamage(1);
	ft1.getState();
	ft1.takeDamage(1);
	ft1.getState();
	for (int i = 0; i < 100; i++) {
		ft1.beRepaired(2);
	}
	ft1.getState();

	/* [ Second Test ] */
	std::cout << std::endl;
	FragTrap	ft2("WALL-E");
	
	ft2.getState();
	ft2.attack("Terminator");
	ft2.takeDamage(1000);
	ft2.beRepaired(5);
	ft2.getState();
	ft2.attack("Terminator");
	ft2.attack("Terminator");
	ft2.attack("Terminator");
	ft2.attack("Terminator");
	ft2.takeDamage(5000);
	ft2.getState();
	ft2.beRepaired(1);
	ft2.beRepaired(1);
	ft2.getState();
	for (int i = 0; i < 100; i++) {
		ft2.attack("Terminator");
	}
	ft2.getState();

	/* [ Third Test ] */
	std::cout << std::endl;
	FragTrap	ft3("Optimus Prime");
	
	ft3.getState();
	ft3.attack("Bender");
	ft3.takeDamage(1000);
	ft3.getState();
	for (int i = 0; i < 102; i++) {
		ft3.beRepaired(1337);
	}
	ft3.getState();
	for (int i = 0; i < 4; i++) {
		ft3.attack("Bender");
	}
	ft3.getState();
	ft3.takeDamage(132363);
	ft3.getState();

	return (0);
}
