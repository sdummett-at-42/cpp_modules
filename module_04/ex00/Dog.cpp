/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:29:53 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 00:58:09 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog", "Waaaf!") {
	std::cout << "[ Default Constructor Called (Dog) ]" << std::endl;
}

Dog::Dog(Dog const & src) : Animal() {
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
}
