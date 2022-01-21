/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:06:09 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 16:54:17 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {

}

Cure::Cure(Cure const & src) {

}

Cure&	Cure::operator=(Cure const & rhs) {

}

Cure::~Cure() {

}

AMateria* Cure::clone() const {

}

void Cure::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " \
	<< target.getName() << "*" << std::endl;
}
