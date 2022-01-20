/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:21:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 18:02:11 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : 
	_type("AnonymousAAnimal")
{
	std::cout << "[ Default Constructor Called (AAnimal) ]" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) {
	std::cout << "[ Copy Constructor Called (AAnimal) ]" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const & rhs) {
	/* Equal operator overload */
	this->_type = rhs.getType();
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "[ Default Destructor Called (AAnimal) ]" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "[ Parameterized Constructor Called (AAnimal) ]" << std::endl;
}

std::string	AAnimal::getType() const {
	return (this->_type);
}
