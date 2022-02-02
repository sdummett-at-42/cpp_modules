/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:34:48 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/02 18:23:38 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

int main(int ac, char **av) {
	(void)ac;
	(void)av;

	std::cout << std::endl;
	std::cout << ">>>[ Testing char ]<<<" << std::endl;
	char c = 'c';

	std::cout << "Char = " << c << std::endl;
	std::cout << std::endl;
	std::cout << "=> Char to int      : ";
	int i = static_cast<int>(c);
	std::cout << i << std::endl;

	std::cout << "=> Char to float    : ";
	float f = static_cast<float>(c);
	std::cout << f << std::endl;

	std::cout << "=> Char to double   : ";
	double d = static_cast<double>(c);
	std::cout << d << std::endl;

	std::cout << std::endl;
	std::cout << ">>>[ Testing int ]<<<" << std::endl;
	int i1 = 42;
	std::cout << "Int = " << i1 << std::endl;

	std::cout << "=> Int to char      : ";
	char c1 = static_cast<char>(i1);
	std::cout << c1 << std::endl;

	std::cout << "=> Int to float     : ";
	float f1 = static_cast<float>(i1);
	std::cout << f1 << std::endl;

	std::cout << "=> Int to double    : ";
	double d1 = static_cast<double>(i1);
	std::cout << d1 << std::endl;

	std::cout << std::endl;
	std::cout << ">>>[ Testing float ]<<<" << std::endl;
	float f2 = 42.42f;
	std::cout << "Float = " << f2 << std::endl;

	std::cout << "=> Float to char    : ";
	char c2 = static_cast<char>(f2);
	std::cout << c2 << std::endl;

	std::cout << "=> Float to int     : ";
	int i2 = static_cast<int>(f2);
	std::cout << i2 << std::endl;

	std::cout << "=> Float to double  : ";
	double d2 = static_cast<double>(f2);
	std::cout << d2 << std::endl;

	std::cout << std::endl;
	std::cout << ">>>[ Testing double ]<<<" << std::endl;
	double d3 = 88.88;
	std::cout << "Double = " << d3 << std::endl;

	std::cout << "=> Double to char  : ";
	char c3 = static_cast<char>(d3);
	std::cout << c3 << std::endl;

	std::cout << "=> Double to int   : ";
	int i3 = static_cast<int>(d3);
	std::cout << i3 << std::endl;

	std::cout << "=> Double to float : ";
	float f3 = static_cast<float>(d3);
	std::cout << f3 << std::endl;


	// if (ac != 2) {
	// 		std::cout << "Usage: ./convert literal" << std::endl;
	// 		std::cout << "Literal can be a char, a int, a float or a double" << std::endl;
	// 		return (0);
	// }
	// Literal	lit(av[1]);


	return 0;
}