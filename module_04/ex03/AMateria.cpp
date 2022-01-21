/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:11:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 19:46:29 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "[ Default Constructor Called (AMateria) ]" << std::endl;
}

AMateria::AMateria(AMateria const & src) {
	std::cout << "[ Copy Constructor Called (AMateria) ]" << std::endl;
	*this = src;
}

AMateria&	AMateria::operator=(AMateria const & rhs) {
	(void)rhs;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "[ Default Destructor Called (AMateria) ]" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "[ Parameterized Constructor Called (AMateria) ]" << std::endl;
	this->_type = type;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
	/* I'll let this member function empty */
}
