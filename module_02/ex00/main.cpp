/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:34 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/27 15:30:02 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	std::cout << "Raw bits value (a) = " << a.getRawBits() << std::endl;
	std::cout << "Raw bits value (b) = " <<  b.getRawBits() << std::endl;
	std::cout << "Raw bits value (c) = " << c.getRawBits() << std::endl;
	return 0;
}
