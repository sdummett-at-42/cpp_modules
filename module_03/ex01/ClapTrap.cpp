/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 16:58:51 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("AnonymousClapTrap"),
	_hitpoints(10),
	_energy(10),
	_attackDamage(0) {
	std::cout << "[ Default Constructor Called (ClapTrap) ]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "[ Copy Constructor Called (ClapTrap) ]" << std::endl;
	*this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "[ Assignment Operator Called (ClapTrap) ]" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "[ Default Destructor Called (ClapTrap) ]" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitpoints(10),
	_energy(10),
	_attackDamage(0) {
	std::cout << "[ Parameterized (string) Constructor Called (ClapTrap) ]" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :
	_name(name),
	_hitpoints(hitPoints),
	_energy(energyPoints),
	_attackDamage(attackDamage) {
	std::cout << "[ Parameterized (string, int, int, int) Constructor Called (ClapTrap) ]" \
	<< std::endl;
}

void	ClapTrap::attack(std::string const & target) {
	if (this->_hitpoints == 0)
		std::cout << "ClapTrap " << this->_name << " has no hitpoints left to attack." << std::endl;
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " has no energy left to attack." << std::endl;
	else {
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " \
		<< this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitpoints == 0)
		std::cout << "ClapTrap " << this->_name << " is already out of service." << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << ", taking " \
		<< amount << " points of damage!" << std::endl;
		this->_hitpoints -= amount;
		if (this->_hitpoints <= 0) {
			this->_hitpoints = 0;
			std::cout << "ClapTrap " << this->_name << " is now out of service." << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " has no energy left to be repaired." << std::endl;
	else {
		this->_hitpoints += amount;
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << ", repaired " \
		<< amount << " points of health!" << std::endl;
	}
}

std::string	ClapTrap::getName() const {
	return (this->_name);
}

int	ClapTrap::getHitPoints() const {
	return (this->_hitpoints);
}

int	ClapTrap::getEnergy() const {
	return (this->_energy);
}

int	ClapTrap::getAttackDamage() const {
	return (this->_attackDamage);
}

void	ClapTrap::getState() const {
	std::cout << "ClapTrap " << getName() << " has " \
	<< getHitPoints() << " hitpoints, " << getEnergy() \
	<< " energy and do " << getAttackDamage() << " attack damage." \
	<< std::endl;
}
