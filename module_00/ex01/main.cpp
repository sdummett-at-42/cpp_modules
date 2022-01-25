/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:53:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/25 11:13:57 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	userInput;

	while (true)
	{
		std::cout << "[ MAIN MENU ]" << std::endl;
		std::cout << "Enter either ADD | SEARCH | EXIT:" << std::endl;
		std::cout << ">>> ";
		std::cin >> userInput;
		if (userInput == "ADD")
		{
			std::cout << "[ ADD MODE ]" << std::endl;
			phonebook.createNewContact();
		}
		else if (userInput == "SEARCH")
		{
			std::cout << "[ SEARCH MODE ]" << std::endl;
			phonebook.displayAllContacts();
			phonebook.displayOneContact();
		}
		else if (userInput == "EXIT")
		{
			std::cout << "[ EXITING PHONEBOOK ]" << std::endl;
			return (0);
		}
		else
			std::cout << "Invalid input. Please enter ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}
