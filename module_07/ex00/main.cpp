/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:32:22 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/04 10:43:05 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main() {

	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Char ]" << std::endl;

	char c1 = 's';
	char c2 = 't';
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "min = " << templates::min(c1, c2) << std::endl;
	std::cout << "max = " << templates::max(c1, c2) << std::endl;
	templates::swap(c1, c2);
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Int ]" << std::endl;

	int i1 = 42;
	int i2 = 24;
	std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
	std::cout << "min = " << templates::min(i1, i2) << std::endl;
	std::cout << "max = " << templates::max(i1, i2) << std::endl;
	templates::swap(i1, i2);
	std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Float ]" << std::endl;

	float f1 = -42.42f;
	float f2 = -21.21f;
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min = " << templates::min(f1, f2) << std::endl;
	std::cout << "max = " << templates::max(f1, f2) << std::endl;
	templates::swap(f1, f2);
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With Double ]" << std::endl;

	double d1 = 42;
	double d2 = 1337;
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min = " << templates::min(d1, d2) << std::endl;
	std::cout << "max = " << templates::max(d1, d2) << std::endl;
	templates::swap(d1, d2);
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;


	std::cout << std::endl;
	std::cout << "[ Testing Template Function With String ]" << std::endl;

	std::string str1 = "Hello World !";
	std::string str2 = "Bye world";
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "min = " << templates::min(str1, str2) << std::endl;
	std::cout << "max = " << templates::max(str1, str2) << std::endl;
	templates::swap(str1, str2);
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;

	return 0;
}