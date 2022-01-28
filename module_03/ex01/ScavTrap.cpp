/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:19:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 11:50:39 by sdummett         ###   ########.fr       */
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
	this->_name = src.getName();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
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
	ClapTrap(name, 100, 50, 20) {}

void	ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
