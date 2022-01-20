/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:40:26 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 16:41:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "[ Default Constructor Called (WrongCat) ]" << std::endl;
	// std::cout << "[ Default ] : type : " << this->_type << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal() {
	std::cout << "[ Copy Constructor Called (WrongCat) ]" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const & rhs) {
	/* Equal operator overload */
	*this = rhs;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "[ Default Destructor Called (WrongCat) ]" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << this->_type << ": Meeeow!" << std::endl;
}