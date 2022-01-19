/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:19:28 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/19 17:46:17 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DEFAULT_NAME", 100, 100, 30) {
	std::cout << "[ FragTrap Default Constructor ]" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap() {
	std::cout << "[ FragTrap Copy Constructor ]" << std::endl;
	this->_name = src.getName();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
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

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20) {

}

void	FragTrap::highFivesGuys(void) const {
	std::cout << this->_name << " says \" High Fives Guys ! \"" << std::endl;

}