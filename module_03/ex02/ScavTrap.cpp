/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:19:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/19 17:45:43 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DEFAULT_NAME", 100, 50, 20){
	std::cout << "[ ScavTrap Default Constructor ]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap() {
	std::cout << "[ ScavTrap Copy Constructor ]" << std::endl;
	this->_name = src.getName();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {

}

// ScavTrap::ScavTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :
// 	ClapTrap(name, hitPoints, energyPoints, attackDamage)
// 	{}

void	ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
