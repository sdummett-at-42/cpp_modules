/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:33:29 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 16:47:26 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :
	_type("AnonymousAnimal")
{
	std::cout << "[ Default Constructor Called (WrongAnimal) ]" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout << "[ Copy Constructor Called (WrongAnimal) ]" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rhs) {
	/* Equal operator overload */
	this->_type = rhs.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[ Default Destructor Called (WrongAnimal) ]" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "[ Parameterized Constructor Called (WrongAnimal) ]" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->_type);
}


void	WrongAnimal::makeSound() const {
	std::cout << this->_type << ": Meeoaffaououdsfs!" << std::endl;
}
