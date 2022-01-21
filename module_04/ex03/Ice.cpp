/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:17:10 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 16:54:06 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {

}

Ice::Ice(Ice const & src) {

}

Ice&	Ice::operator=(Ice const & rhs) {

}

Ice::~Ice() {

}

AMateria* Ice::clone() const {

}


void Ice::use(ICharacter& target) {
	std::cout << "* heals " \
	<< target.getName() << "'s wounds *" << std::endl;
}
