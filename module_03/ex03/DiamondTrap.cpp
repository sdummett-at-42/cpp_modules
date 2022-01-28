/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:48:59 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 12:03:13 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap() {
	this->_name = "AnonymousDiamondTrap";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "[ Default Constructor Called (DiamondTrap) ]" << std::endl;
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
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "CONSTUCTOR CLAPTRAPNAME => ";
	std::cout << ClapTrap::_name << std::endl;
	std::cout << "CONSTRUCTOR THIS->NAME => ";
	std::cout << this->_name << std::endl;
	this->_name = name;
	this->_hitpoints = FragTrap::getHitPoints();
	this->_energy = ScavTrap::getEnergy();
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout << "[ Parameterized (string) Constructor Called (DiamondTrap) ]" << std::endl;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "Who am I? I think my ClapTrap name is " << ClapTrap::_name \
	<< " and my name is " << this->_name << std::endl;
}
