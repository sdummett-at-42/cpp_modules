/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:30:17 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 00:57:57 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat", "Meeeow!") {
	std::cout << "[ Default Constructor Called (Cat) ]" << std::endl;
	// std::cout << "[ Default ] : type : " << this->_type << std::endl;
}

Cat::Cat(Cat const & src) : Animal(){
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
}
