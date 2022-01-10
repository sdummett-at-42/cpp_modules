/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:53:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 15:26:10 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	userInput;

	std::cout << "Hello world !" << std::endl;
	while (true)
	{
		std::cin >> userInput;
		if (userInput == "ADD")
			std::cout << "userInput == ADD" << std::endl;
		else if (userInput == "SEARCH")
			std::cout << "userInput == SEARCH" << std::endl;
		else if (userInput == "EXIT")
		{
			std::cout << "userInput == EXIT" << std::endl;
			return (0);
		}
		else
			std::cout << "Invalid input. Please enter ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}
