/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:29:53 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 13:24:42 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog"),
	_brain(new Brain) {
	std::cout << "[ Default Constructor Called (Dog) ]" << std::endl;
}

Dog::Dog(Dog const & src) :
	Animal(),
	_brain(new Brain) {
	std::cout << "[ Copy Constructor Called (Dog)]" << std::endl;
	*this = src;
}

Dog& Dog::operator=(Dog const & rhs) {
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

Dog::~Dog() {
	std::cout << "[ Default Destructor Called (Dog)]" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const {
	std::cout << "* Waaaf *" << std::endl;
}
