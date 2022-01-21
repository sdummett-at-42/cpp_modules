/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:11:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 16:50:47 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {

}

AMateria::AMateria(AMateria const & src) {

}

AMateria&	AMateria::operator=(AMateria const & rhs) {

}

AMateria::~AMateria() {

}

AMateria::AMateria(std::string const & type) {

}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	/* I'll let this member function empty */
}
