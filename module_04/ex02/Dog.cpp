/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:29:53 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 18:04:50 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : 
	AAnimal("Dog"),
	_brain(new Brain)
{
	std::cout << "[ Default Constructor Called (Dog) ]" << std::endl;
}

Dog::Dog(Dog const & src) : AAnimal() {
	std::cout << "[ Copy Constructor Called (Dog)]" << std::endl;
	*this = src;
}

Dog& Dog::operator=(Dog const & rhs) {
	/* Equal operator overload */
	*this = rhs;
	return (*this);
}

Dog::~Dog() {
	std::cout << "[ Default Destructor Called (Dog)]" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const {
	std::cout << this->_type << ": Waaaf!" << std::endl;
}
