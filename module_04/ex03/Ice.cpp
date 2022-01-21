/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:17:10 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 18:02:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	std::cout << "[ Default Constructor Called (Ice) ]" << std::endl;
}

Ice::Ice(Ice const & src) {
	std::cout << "[ Copy Constructor Called (Cure) ]" << std::endl;
}

Ice&	Ice::operator=(Ice const & rhs) {

}

Ice::~Ice() {
	std::cout << "[ Default Destructor Called (Cure) ]" << std::endl;
}

AMateria* Ice::clone() const {

}


void Ice::use(ICharacter& target) {
	std::cout << "* heals " \
	<< target.getName() << "'s wounds *" << std::endl;
}
