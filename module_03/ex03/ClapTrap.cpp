/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/19 20:42:11 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("AnonymousClapTrap"), _hitpoints(0), _energy(0), _attackDamage(0) {
	std::cout << "[ ClapTrap Default Constructor ]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "[ ClapTrap Copy Constructor ]" << std::endl;
	this->_name = src.getName();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
	// ASSIGN ALL (this) PRIVATE MEMBERS VALUES TO RHS PRIVATE MEMBER'S VALUES
}

ClapTrap::~ClapTrap() {
	std::cout << "[ ClapTrap Default Destructor ]" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :
	_name(name),
	_hitpoints(hitPoints),
	_energy(energyPoints),
	_attackDamage(attackDamage)
	{}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitpoints(0),
	_energy(0),
	_attackDamage(0)
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
