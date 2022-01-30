/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:30:17 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 13:24:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat"),
	_brain(new Brain) {
	std::cout << "[ Default Constructor Called (Cat) ]" << std::endl;
}

Cat::Cat(Cat const & src) :
	Animal("Cat"),
	_brain(new Brain) {
	std::cout << "[ Copy Constructor Called (Cat) ]" << std::endl;
	*this = src;
}

Cat& Cat::operator=(Cat const & rhs) {
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

Cat::~Cat() {
	std::cout << "[ Default Destructor Called (Cat) ]" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const {
	std::cout << "* Meeeow *" << std::endl;
}
