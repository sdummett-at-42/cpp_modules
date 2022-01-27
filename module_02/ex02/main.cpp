/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:34 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/27 16:39:41 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;
	std::cout << "[ Test On Fixed Class Comparison Operators ]" << std::endl;
	std::cout << "a = " << a << " and b = " << b << std::endl;
	if (a < b)
		std::cout << "a < b" << std::endl;
	if (a > b)
		std::cout << "a > b" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	
	std::cout << std::endl;
	std::cout << "[ Test On Fixed Class Arithmetics Operators ]" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	Fixed lhs(4);
	Fixed rhs(4);
	std::cout << "lhs = " << lhs << " and rhs = " << rhs << std::endl;
	std::cout << "lhs * rhs = " << lhs * rhs << std::endl;
	lhs.setRawBits(10);
	rhs.setRawBits(2);
	std::cout << "lhs = " << lhs << " and rhs = " << rhs << std::endl;
	std::cout << "lhs / rhs = " << lhs / rhs << std::endl;

	std::cout << std::endl;
	std::cout << "[ Test On Fixed Class Overloaded Member Functions ]" << std::endl;
	Fixed c(42);
	Fixed d(42.42f);
	std::cout << "Between c ["<< c << "] and d [" << d << "], min is: " << Fixed::min(c, d) << std::endl;
	std::cout << "Between c ["<< c << "] and d [" << d << "], max is: " << Fixed::max(c, d) << std::endl;
	
	const Fixed &e = c;
	const Fixed &f = d;
	std::cout << "Between e ["<< e << "] and f [" << f << "], min is: " << Fixed::min(e, f) << std::endl;
	std::cout << "Between e ["<< e << "] and f [" << f << "], max is: " << Fixed::max(e, f) << std::endl;

	return 0;
}
