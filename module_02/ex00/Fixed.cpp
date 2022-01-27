/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:41:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/27 17:09:19 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

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
	this->_fixedPoint = roundf(raw * _ft_pow(2, this->_fractionalBits));
}

float	Fixed::_ft_pow(float x, float y) const {
	float res = 1;
	while (y > 0) {
		res = res * x;
		y--;
	}
	return (res);
}
