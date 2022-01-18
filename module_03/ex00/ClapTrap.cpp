/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/18 22:32:31 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// std::string	_name;
// int			_hitpoints;
// int			_energy;
// int			_attackDamage;

ClapTrap::ClapTrap() : _name("DEFAULT_NAME"), _hitpoints(0), _energy(0), _attackDamage(0) {

}

ClapTrap::ClapTrap(ClapTrap const & src) {
	this->_name = src.getName();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
}

ClapTrap::~ClapTrap() {

}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
	// if (this->)
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << ", taking " \
	<< amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << ", repaired " \
	<< amount << " points of health!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
	// ASSIGN ALL (this) PRIVATE MEMBERS VALUES TO  PRIVATE MEMBER'S VALUES
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
