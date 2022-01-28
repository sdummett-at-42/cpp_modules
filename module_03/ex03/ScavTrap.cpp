/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:19:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 17:00:15 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	ClapTrap("AnonymousScavTrap", 100, 50, 20) {
	std::cout << "[ Default Constructor Called (ScavTrap) ]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) :
	ClapTrap() {
	std::cout << "[ Copy Constructor Called (ScavTrap) ]" << std::endl;
	*this = src;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "[ Assignment Operator Called (ScavTrap) ]" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "[ Default Destructor Called (ScavTrap) ]" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20) {
	std::cout << "[ Parameterized (string) Constructor Called (ScavTrap) ]" \
	<< std::endl;
}

void	ScavTrap::attack(std::string const & target) {
	if (this->_hitpoints == 0)
		std::cout << "ScavTrap " << this->_name << " has no hitpoints left to attack." << std::endl;
	else if (this->_energy == 0)
		std::cout << "ScavTrap " << this->_name << " has no energy left to attack." << std::endl;
	else {
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " \
		<< this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
