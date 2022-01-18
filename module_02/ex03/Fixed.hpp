/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:40:56 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/17 21:37:54 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public :
	Fixed(); /* Default constructor */
	Fixed(Fixed const & src); /* Copy constructor */
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	Fixed&	operator=(Fixed const & rhs);

	// Declare prefix and postfix increment operators.
	Fixed&	 operator++();       // Prefix increment operator.
	Fixed	operator++(int);     // Postfix increment operator.

	// Declare prefix and postfix decrement operators.
	Fixed&	operator--();       // Prefix decrement operator.
	Fixed	operator--(int);     // Postfix decrement operator.
	
	/* Arithmetics operators */
	Fixed	operator+(const Fixed& lhs) const;
	Fixed	operator-(const Fixed& lhs) const;
	Fixed	operator*(const Fixed lhs) const;
	Fixed	operator/(const Fixed& lhs) const;

	bool	operator>(const Fixed& lhs) const;
	bool	operator<(const Fixed& lhs) const;
	bool	operator>=(const Fixed& lhs) const;
	bool	operator<=(const Fixed& lhs) const;
	bool	operator==(const Fixed& lhs) const;
	bool	operator!=(const Fixed& lhs) const;
	
	static const Fixed&	min(const Fixed& lhs, const Fixed& rhs);
	static const Fixed&	max(const Fixed& lhs, const Fixed& rhs);

	int		getMin(const int& lhsFixedPoint, const int& rhsFixedPoint) const;
	int		getMax(const int& lhsFixedPoint, const int& rhsFixedPoint) const;

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private :
	int					_n;
	static const int	_fractionalBits = 8;
	float				_ft_pow(float x, float y) const;
	int					_toFixedPoint(int n) const;
	int					_toFixedPoint(float n) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs);

#endif