/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:48:13 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/31 16:37:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	
	/* [ Test Parameterized constructor ] */
	Bureaucrat b1("Stone", 1);
	std::cout << b1 << std::endl;

	try {
		b1.downgradeGrade();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << b1 << std::endl;

	/* [ Test Default Constructor ] */
	// Bureaucrat	b1;

	// str = b1.getName();
	// std::cout << "Bureaucrat name is " << str << std::endl;
	// try
	// {
	// 	Bureaucrat b1;
	// 	/* do some stuff with bureaucrats */
	// }
	// catch (std::exception & e)
	// {
	// 	/* handle exception */
	// }
	return 0;
}
