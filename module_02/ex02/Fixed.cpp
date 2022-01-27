/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:41:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/27 16:35:43 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor and destructors */
Fixed::Fixed() : 
	_fixedPoint(0) {
	// std::cout << "[ Default constructor Called (Fixed)]" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	// std::cout << "[ Copy Constructor Called (Fixed) ]" << std::endl;
	*this = src;
}

Fixed::Fixed(int n) :
	_fixedPoint(_toFixedPoint(n)) {
	// std::cout << "[ Parameterized (int) Constructor Called (Fixed) ]" << std::endl;
}

Fixed::Fixed(float n) :
	_fixedPoint(_toFixedPoint(n)) {
	// std::cout << "[ Parameterized (float) Constructor Called (Fixed) ]" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "[ Default Destructor Called (Fixed)]" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	// std::cout << "[ Assignment Operator Called (Fixed) ]" << std::endl;
	this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}

/* Accessors */
int	Fixed::getRawBits(void) const {
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = _toFixedPoint(raw);
}

float	Fixed::toFloat(void) const {
	return (this->_fixedPoint / _ft_pow(2, this->_fractionalBits));
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
	this->_fixedPoint++;
	return *this;
}

// postfix increment
Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return old;
}

// prefix decrement
Fixed&	Fixed::operator--()
{
	this->_fixedPoint--;
	return *this;
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

const Fixed	Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	return (rhs);
}

const Fixed	Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs.toFloat() > rhs.toFloat())
		return (lhs);
	return (rhs);
}

Fixed	Fixed::min(Fixed& lhs, Fixed& rhs) {
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	return (rhs);
}

Fixed	Fixed::max(Fixed& lhs, Fixed& rhs) {
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
