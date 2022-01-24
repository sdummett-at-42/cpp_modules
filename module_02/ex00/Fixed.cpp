/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:41:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 20:20:42 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :
	_fixedPoint(0) {
	std::cout << "[ Default constructor Called (Fixed)]" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "[ Default Destructor Called (Fixed)]" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "[ Copy Constructor Called (Fixed) ]" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	std::cout << "[ Assignment Operator Called (Fixed) ]" << std::endl;
	this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}
