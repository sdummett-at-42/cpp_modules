/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:19:28 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/19 21:22:10 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "AnonymousFragTrap";
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "[ FragTrap Default Constructor ]" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap() {
	std::cout << "[ FragTrap Copy Constructor ]" << std::endl;
	*this = src;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs) {
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitPoints();
	this->_energy = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "[ FragTrap Default Destructor ]" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << this->_name << " says \" High Fives Guys ! \"" << std::endl;

}