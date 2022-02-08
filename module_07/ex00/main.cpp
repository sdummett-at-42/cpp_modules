/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:32:22 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/08 18:22:43 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main() {

	std::cout << std::endl;
	std::cout << "[ Testing Template Function With subject test ]" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Char ]" << std::endl;

	char c1 = 's';
	char c2 = 't';
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "min = " << ::min(c1, c2) << std::endl;
	std::cout << "max = " << ::max(c1, c2) << std::endl;
	::swap(c1, c2);
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Int ]" << std::endl;

	int i1 = 42;
	int i2 = 24;
	std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
	std::cout << "min = " << ::min(i1, i2) << std::endl;
	std::cout << "max = " << ::max(i1, i2) << std::endl;
	::swap(i1, i2);
	std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Float ]" << std::endl;

	float f1 = -42.42f;
	float f2 = -21.21f;
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min = " << ::min(f1, f2) << std::endl;
	std::cout << "max = " << ::max(f1, f2) << std::endl;
	::swap(f1, f2);
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Double ]" << std::endl;

	double d1 = 42;
	double d2 = 1337;
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min = " << ::min(d1, d2) << std::endl;
	std::cout << "max = " << ::max(d1, d2) << std::endl;
	::swap(d1, d2);
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With String ]" << std::endl;

	std::string str1 = "Hello World !";
	std::string str2 = "Bye world";
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "min = " << ::min(str1, str2) << std::endl;
	std::cout << "max = " << ::max(str1, str2) << std::endl;
	::swap(str1, str2);
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;

	return 0;
}