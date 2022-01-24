/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:41:58 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 17:26:19 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("name") {
}

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie() {
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	Zombie::annonce(void) const {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
