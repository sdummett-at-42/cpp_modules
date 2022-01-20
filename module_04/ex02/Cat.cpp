/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:30:17 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 18:04:44 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : 
	AAnimal("Cat"),
	_brain(new Brain)
{
	std::cout << "[ Default Constructor Called (Cat) ]" << std::endl;
}

Cat::Cat(Cat const & src) : AAnimal() {
	std::cout << "[ Copy Constructor Called (Cat) ]" << std::endl;
	*this = src;
}

Cat& Cat::operator=(Cat const & rhs) {
	/* Equal operator overload */
	*this = rhs;
	return (*this);
}

Cat::~Cat() {
	std::cout << "[ Default Destructor Called (Cat) ]" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const {
	std::cout << this->_type << ": Meeeow!" << std::endl;
}