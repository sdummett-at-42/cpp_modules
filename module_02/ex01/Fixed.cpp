/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:41:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/17 19:01:30 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor and destructors */
Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_n = roundf(n * _ft_pow(2, this->_fractionalBits));
}

Fixed::Fixed(float n) {
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(n * _ft_pow(2, this->_fractionalBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* Operator overload */
Fixed&	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}

/* Accessors */
int	Fixed::getRawBits(void) const {
	return (this->_n);
}

void	Fixed::setRawBits(int const raw) {
	this->_n = raw;
}

float	Fixed::toFloat(void) const {
	return (this->_n / _ft_pow(2, this->_fractionalBits));
}

int		Fixed::toInt(void) const {
	return (roundf(toFloat()));
}

float	Fixed::_ft_pow(float x, float y) const {
	float res = 1;
	while (y > 0) {
		res = res * x;
		y--;
	}
	return (res);
}
