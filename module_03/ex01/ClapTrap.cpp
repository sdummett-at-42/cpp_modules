/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 11:51:06 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("AnonymousClapTrap"),
	_hitpoints(0),
	_energy(0),
	_attackDamage(0) {
	std::cout << "[ Default Constructor Called (ClapTrap) ]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "[ Copy Constructor Called (ClapTrap) ]" << std::endl;
	this->_name = src.getName();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "[ Assignmnent Operator Called (ClapTrap) ]" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
	// ASSIGN ALL (this) PRIVATE MEMBERS VALUES TO RHS PRIVATE MEMBER'S VALUES
}

ClapTrap::~ClapTrap() {
	std::cout << "[ Default Destructor Called (ClapTrap) ]" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :
	_name(name),
	_hitpoints(hitPoints),
	_energy(energyPoints),
	_attackDamage(attackDamage)
	{}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << ", taking " \
	<< amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << ", repaired " \
	<< amount << " points of health!" << std::endl;
}

std::string	ClapTrap::getName() const {
	return (this->_name);
}

int			ClapTrap::getHitPoints() const {
	return (this->_hitpoints);
}

int			ClapTrap::getEnergy() const {
	return (this->_energy);
}

int			ClapTrap::getAttackDamage() const {
	return (this->_attackDamage);
}
