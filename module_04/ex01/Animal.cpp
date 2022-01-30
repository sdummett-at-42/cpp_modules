/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:21:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 14:20:49 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : 
	_type("AnonymousAnimal") {
	std::cout << "[ Default Constructor Called (Animal) ]" << std::endl;
}

Animal::Animal(Animal const & src) {
	std::cout << "[ Copy Constructor Called (Animal) ]" << std::endl;
	*this = src;
}

Animal& Animal::operator=(Animal const & rhs) {
	this->_type = rhs.getType();
	return (*this);
}

Animal::~Animal() {
	std::cout << "[ Default Destructor Called (Animal) ]" << std::endl;
}

Animal::Animal(std::string type) :
	_type(type) {
	std::cout << "[ Parameterized (string) Constructor Called (Animal) ]" << std::endl;
}

std::string	Animal::getType() const {
	return (this->_type);
}

void	Animal::makeSound() const {}
