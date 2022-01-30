/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:17:10 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 16:17:45 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "[ Default Constructor Called (Ice) ]" << std::endl;
	/* Init equippedMaterias and materiasOnFloor */
}

Ice::Ice(Ice const & src) :AMateria() {
	std::cout << "[ Copy Constructor Called (Cure) ]" << std::endl;
	*this = src;
}

Ice&	Ice::operator=(Ice const & rhs) {
	this->_type = rhs._type;
	return (*this);
}

Ice::~Ice() {
	std::cout << "[ Default Destructor Called (Cure) ]" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " \
	<< target.getName() << " *" << std::endl;
}
