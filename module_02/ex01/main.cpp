/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:34 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/17 18:38:21 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

// int main()
// {
	// double x = 2;
	// double y = 8;
	// std::cout << x << "^" << y << " = " << ft_pow(x, y) << std::endl;
	// std::cout << 5.375f << " * 2^" << y << " = " << 5.375f * ft_pow(x, y) << std::endl;
	// std::cout << 1376.00f << " / 2^" << y << " = " << 1376.00f / ft_pow(x, y) << std::endl;
	// std::cout << std::endl;

	// float	nb = 532494.32f;
	// int res =  nb * ft_pow(x, y);
	// std::cout << (float)nb << " * 2^" << y << " = " << res << std::endl;
	// std::cout << res << " / 2^" << y << " = " << res / ft_pow(x, y) << std::endl;

    // printf("===== Round a float\n\n");
    // float floatValue = 50.85546875f; //2.4999999f; // float stores a value close to, but not exactly equal to, the initializer below. floatValue will contain 2.5 because it is the closest single precision value
    // printf("roundf(%.1000g) is %.1000g\n", floatValue, roundf(floatValue));
    // printf("roundf(%.1000g) is %.1000g\n", -floatValue, roundf(-floatValue));

    // // double stores a value close to, but not exactly equal to, the initializer below. The closest double value is just slightly larger.
    // double doubleValue = 2.4999999;
    // printf("\n===== Round a double\n\n");
    // printf("round(%.1000g) is %.1000g\n", doubleValue, round(doubleValue));
    // printf("round(%.1000g) is %.1000g\n", -doubleValue, round(-doubleValue));

    // // long double stores a value close to, but not exactly equal to, the initializer below. The closest long double value is just slightly larger.
    // long double longDoubleValue = 2.4999999L;
    // printf("\n===== Round a long double\n\n");
    // printf("roundl(%.1000Lg) is %.1000Lg\n", longDoubleValue, roundl(longDoubleValue));
    // printf("roundl(%.1000Lg) is %.1000Lg\n", -longDoubleValue, roundl(-longDoubleValue));

    // return 0;
// }