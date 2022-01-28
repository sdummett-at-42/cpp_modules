/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 15:47:34 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CREATE AN ORTHODOX FORM OF CLASS CLAPTRAP

int main() {

	/* [ First Test (with default contructor)] */
	std::cout << std::endl;
	ClapTrap	cp1;
	
	std::cout << "ClapTrap " << cp1.getName() << " has " \
	<< cp1.getHitPoints() << " hitpoints, " << cp1.getEnergy() \
	<< " energy and do " << cp1.getAttackDamage() << " attack damage." \
	<< std::endl;
	cp1.attack("Terminator");
	cp1.takeDamage(20);
	cp1.beRepaired(30);
	cp1.getState();
	cp1.takeDamage(29);
	cp1.getState();
	cp1.takeDamage(1);
	cp1.getState();
	cp1.takeDamage(1);
	cp1.getState();
	for (int i = 0; i < 10; i++) {
		cp1.beRepaired(2);
	}
	cp1.getState();
	

	/* [ Second Test ] */
	std::cout << std::endl;
	ClapTrap	cp2("WALL-E");
	
	cp2.getState();
	cp2.attack("Terminator");
	cp2.takeDamage(1000);
	cp2.beRepaired(5);
	cp2.getState();
	cp2.attack("Terminator");
	cp2.attack("Terminator");
	cp2.attack("Terminator");
	cp2.attack("Terminator");
	cp2.takeDamage(5000);
	cp2.getState();
	cp2.beRepaired(1);
	cp2.beRepaired(1);
	cp2.getState();
	for (int i = 0; i < 10; i++) {
		cp2.attack("Terminator");
	}

	/* [ Third Test ] */
	std::cout << std::endl;
	ClapTrap	cp3("Optimus Prime");
	
	cp3.getState();
	cp3.attack("Bender");
	cp3.takeDamage(1000);
	cp3.getState();
	for (int i = 0; i < 11; i++) {
		cp3.beRepaired(1337);
	}
	cp3.getState();
	for (int i = 0; i < 4; i++) {
		cp3.attack("Bender");
	}
	cp3.getState();
	cp3.takeDamage(12033);
	cp3.getState();

	return (0);
}
