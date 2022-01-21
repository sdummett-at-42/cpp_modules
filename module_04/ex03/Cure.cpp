/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:06:09 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 18:50:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	std::cout << "[ Default Constructor Called (Cure) ]" << std::endl;
}

Cure::Cure(Cure const & src) {
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

}

void Cure::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " \
	<< target.getName() << "*" << std::endl;
}
