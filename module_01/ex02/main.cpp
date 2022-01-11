/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:28:09 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/11 15:36:09 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string		myString("HI THIS IS BRAIN");
	std::string		*stringPTR = &myString;
	std::string&	stringREF = myString;
	
	std::cout << "Address of myString: " << &myString << std::endl;
	std::cout << "Address pointed by stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "String displayed with myString : " << myString << std::endl;
	std::cout << "String displayed with stringPTR: " << *stringPTR << std::endl;
	std::cout << "String displayed with stringREF: " << stringREF << std::endl;
	return (0);
}