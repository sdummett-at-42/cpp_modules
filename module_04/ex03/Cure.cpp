/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:06:09 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 14:42:53 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "[ Default Constructor Called (Cure) ]" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria() {
	std::cout << "[ Copy Constructor Called (Cure) ]" << std::endl;
	*this = src;
}

Cure&	Cure::operator=(Cure const & rhs) {
	this->_type = rhs._type;
	return (*this);
}

Cure::~Cure() {
	std::cout << "[ Default Destructor Called (Cure) ]" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " \
	<< target.getName() << "'s wounds *" << std::endl;
}
