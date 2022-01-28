/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:19:28 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 12:03:21 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "AnonymousFragTrap";
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "[ Default Constructor Called (FragTrap) ]" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap() {
	std::cout << "[ Copy Constructor Called (FragTrap) ]" << std::endl;
	*this = src;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "[ Assignment Operator Called (FragTrap) ]" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "[ Default Destructor Called (FragTrap) ]" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << this->_name << " says \" High Fives Guys ! \"" << std::endl;

}
