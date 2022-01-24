/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:41:16 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 18:13:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : 
	_name(name), 
	_weapon(weapon) {}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon) {
	this->_weapon = weapon;
}
