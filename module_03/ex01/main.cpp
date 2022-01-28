/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 18:44:29 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	/* [ First Test (with default contructor)] */
	std::cout << std::endl;
	ScavTrap	st1;
	
	std::cout << "ClapTrap " << st1.getName() << " has " \
	<< st1.getHitPoints() << " hitpoints, " << st1.getEnergy() \
	<< " energy and do " << st1.getAttackDamage() << " attack damage." \
	<< std::endl;
	st1.attack("Terminator");
	st1.takeDamage(20);
	st1.beRepaired(30);
	st1.getState();
	st1.takeDamage(29);
	st1.getState();
	st1.guardGate();
	st1.takeDamage(1);
	st1.getState();
	st1.takeDamage(1);
	st1.getState();
	for (int i = 0; i < 50; i++) {
		st1.beRepaired(2);
	}
	st1.getState();

	/* [ Second Test ] */
	std::cout << std::endl;
	ScavTrap	st2("WALL-E");
	
	st2.getState();
	st2.attack("Terminator");
	st2.takeDamage(1000);
	st2.beRepaired(5);
	st2.getState();
	st2.attack("Terminator");
	st2.attack("Terminator");
	st2.attack("Terminator");
	st2.attack("Terminator");
	st2.takeDamage(5000);
	st2.getState();
	st2.beRepaired(1);
	st2.beRepaired(1);
	st2.getState();
	for (int i = 0; i < 50; i++) {
		st2.attack("Terminator");
	}
	st2.guardGate();
	st2.getState();

	/* [ Third Test ] */
	std::cout << std::endl;
	ScavTrap	st3("Optimus Prime");
	
	st3.getState();
	st3.guardGate();
	st3.attack("Bender");
	st3.takeDamage(1000);
	st3.getState();
	for (int i = 0; i < 52; i++) {
		st3.beRepaired(1337);
	}
	st3.getState();
	for (int i = 0; i < 4; i++) {
		st3.attack("Bender");
	}
	st3.getState();
	st3.takeDamage(65513);
	st3.getState();

	return (0);
}
