/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:48:59 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 18:37:01 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap("AnonymousDiamondTrap_clap_name") {
	std::cout << "[ Default Constructor Called (DiamondTrap) ]" << std::endl;
	this->_name = "AnonymousDiamondTrap";
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "[ Copy Constructor Called (DiamondTrap) ]" << std::endl;
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs) {
	std::cout << "[ Assignment Operator Called (DiamondTrap) ]" << std::endl;
	this->ClapTrap::_name = rhs.ClapTrap::_name;
	this->_name = rhs.DiamondTrap::_name;
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[ Default Destructor Called (DiamondTrap) ]" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name") {
	std::cout << "[ Parameterized (string) Constructor Called (DiamondTrap) ]" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "Who am I? I think my ClapTrap name is " << ClapTrap::_name \
	<< " and my DiamondTrap name is " << this->_name << std::endl;
}
