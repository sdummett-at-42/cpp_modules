/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:41:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/17 21:37:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor and destructors */
Fixed::Fixed() : _n(0) {
	// std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(Fixed const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int n) : _n(_toFixedPoint(n)) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float n) : _n(_toFixedPoint(n)) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

/* Operator overload */
Fixed&	Fixed::operator=(Fixed const & rhs) {
	// std::cout << "Assignation operator called" << std::endl;
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

int		Fixed::_toFixedPoint(int n) const {
	return (roundf(n * _ft_pow(2, this->_fractionalBits)));
}

int		Fixed::_toFixedPoint(float n) const {
	return (roundf(n * _ft_pow(2, this->_fractionalBits)));
}

float	Fixed::_ft_pow(float x, float y) const {
	float res = 1;
	while (y > 0) {
		res = res * x;
		y--;
	}
	return (res);
}

// prefix increment
Fixed&	Fixed::operator++()
{
	this->_n++;
	return *this; // return new value by reference
}

// postfix increment
Fixed	Fixed::operator++(int)
{
	Fixed old = *this; // copy old value
	operator++();  // prefix increment
	return old;    // return old value
}

// prefix decrement
Fixed&	Fixed::operator--()
{
	this->_n--;
	return *this; // return new value by reference
}

// postfix decrement
Fixed	Fixed::operator--(int)
{
	Fixed old = *this; // copy old value
	operator--();  // prefix decrement
	return old;    // return old value
}

Fixed	Fixed::operator+(const Fixed& lhs) const {
	Fixed newFixed(toFloat() + lhs.toFloat());
	return (newFixed);
}

Fixed	Fixed::operator-(const Fixed& lhs) const {
	Fixed newFixed(toFloat() - lhs.toFloat());
	return (newFixed);
}
Fixed	Fixed::operator*(const Fixed lhs) const {
	Fixed newFixed(toFloat() * lhs.toFloat());
	return (newFixed);
}
Fixed	Fixed::operator/(const Fixed& lhs) const {
	Fixed newFixed(toFloat() / lhs.toFloat());
	return (newFixed);
}

bool	Fixed::operator>(const Fixed& lhs) const {
	return (toFloat() > lhs.toFloat());
}
bool	Fixed::operator<(const Fixed& lhs) const {
	return (toFloat() < lhs.toFloat());
}

bool	Fixed::operator>=(const Fixed& lhs) const {
	return (toFloat() >= lhs.toFloat());
}

bool	Fixed::operator<=(const Fixed& lhs) const {
	return (toFloat() <= lhs.toFloat());
}

bool	Fixed::operator==(const Fixed& lhs) const {
	return (toFloat() == lhs.toFloat());
}

bool	Fixed::operator!=(const Fixed& lhs) const {
	return (toFloat() != lhs.toFloat());
}

const Fixed&	Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	return (rhs);
}

const Fixed&	Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs.toFloat() > rhs.toFloat())
		return (lhs);
	return (rhs);
}

int		Fixed::getMin(const int& lhsFixedPoint, const int& rhsFixedPoint) const {
	Fixed	lhs(lhsFixedPoint), rhs(rhsFixedPoint);
	if (lhs.toFloat() < rhs.toFloat())
		return (lhsFixedPoint);
	return (rhsFixedPoint);
}
int		Fixed::getMax(const int& lhsFixedPoint, const int& rhsFixedPoint) const {
	Fixed	lhs(lhsFixedPoint), rhs(rhsFixedPoint);
	if (lhs.toFloat() > rhs.toFloat())
		return (lhsFixedPoint);
	return (rhsFixedPoint);
}

