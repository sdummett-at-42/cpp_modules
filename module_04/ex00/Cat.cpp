/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:30:17 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 13:03:08 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat") {
	std::cout << "[ Default Constructor Called (Cat) ]" << std::endl;
}

Cat::Cat(Cat const & src) :
	Animal("Cat") {
	std::cout << "[ Copy Constructor Called (Cat) ]" << std::endl;
	*this = src;
}

Cat& Cat::operator=(Cat const & rhs) {
	(void)rhs;
	return (*this);
}

Cat::~Cat() {
	std::cout << "[ Default Destructor Called (Cat) ]" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "* Meeeow *" << std::endl;
}
