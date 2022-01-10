/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:53:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 18:11:26 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// void	add(Phonebook *phonebook)
// {
// 	(void)phonebook;
// 	std::string	userInput;

// 	std::cout << "Enter contact's firstname: ";
// 	std::cin >> userInput;
// 	// contact->addFirstname(userInput);
// 	std::cout << "Enter contact's lastname: ";
// 	std::cin >> userInput;
// 	// contact->addLastname(userInput);
// 	std::cout << "Enter contact's nickname: ";
// 	std::cin >> userInput;
// 	// contact->addNickname(userInput);
// 	std::cout << "Enter contact's phone number: ";
// 	std::cin >> userInput;
// 	// contact->addPhoneNumber(userInput);
// 	std::cout << "Enter contact's darkest secret: ";
// 	std::cin >> userInput;
// 	// contact->addDarkestSecret(userInput);
// 	// contact->displayContact();
// 	std::cout << std::endl;

// }

void	search(void)
{

}

int main(void)
{
	Phonebook	phonebook;
	std::string	userInput;

	while (true)
	{
		std::cout << "Choose between ADD | SEARCH | EXIT" << std::endl;
		std::cin >> userInput;
		if (userInput == "ADD")
		{
			std::cout << "ADD MODE" << std::endl;
			phonebook.createNewContact();
		}
		else if (userInput == "SEARCH")
		{
			std::cout << "SEARCH MODE" << std::endl;
			phonebook.displayAllContacts();
			phonebook.displayOneContact();
		}
		else if (userInput == "EXIT")
		{
			std::cout << "EXITING" << std::endl;
			return (0);
		}
		else
			std::cout << "Invalid input. Please enter ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}
