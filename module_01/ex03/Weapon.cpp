/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:41:20 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/11 16:41:13 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

std::string	Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
