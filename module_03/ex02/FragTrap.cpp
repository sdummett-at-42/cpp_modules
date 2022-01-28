/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:19:28 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 17:01:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
	ClapTrap("AnonymousFragTrap", 100, 100, 30) {
	std::cout << "[ Default Constructor Called (FragTrap) ]" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) :
	ClapTrap() {
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

FragTrap::FragTrap(std::string name) :
	ClapTrap(name, 100, 100, 30) {
	std::cout << "[ Parameterized Constructor Called (FragTrap) ]" << std::endl;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << this->_name << " says \" High Fives Guys ! \"" << std::endl;
}
