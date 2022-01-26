/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:48:13 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/26 16:19:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	
	Bureaucrat	b1;
	std::string	str;

	str = b1.getName();
	std::cout << b1 << std::endl;
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
