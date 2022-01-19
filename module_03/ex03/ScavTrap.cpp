/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:19:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/19 21:22:58 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "AnonymousScavTrap";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "[ ScavTrap Default Constructor ]" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap() {
	std::cout << "[ ScavTrap Copy Constructor ]" << std::endl;
	*this = src;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs) {
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "[ ScavTrap Default Destructor ]" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : 
	ClapTrap(name) {
		this->_hitpoints = 100;
		this->_energy = 50;
		this->_attackDamage = 20;
	}

void	ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
