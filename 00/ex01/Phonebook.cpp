/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:51:53 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 16:24:52 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(){
	std::cout << "Constructor called (Phonebook)" << std::endl;
	this->_nbContacts = 0;
}

Phonebook::~Phonebook(){
	std::cout << "Destructor called (Phonebook)" << std::endl;
}

void	Phonebook::createNewContact(void){
	std::string	userInput;
	int			contactIndex;

	contactIndex = this->_nbContacts;
	if (contactIndex >= 8)
		contactIndex = 0;
	else
		this->_nbContacts++;
	std::cout << "Enter contact's firstname: ";
	std::cin >> userInput;
	this->_contacts[contactIndex].addFirstname(userInput);
	std::cout << "Enter contact's lastname: ";
	std::cin >> userInput;
	this->_contacts[contactIndex].addLastname(userInput);
	std::cout << "Enter contact's nickname: ";
	std::cin >> userInput;
	this->_contacts[contactIndex].addNickname(userInput);
	std::cout << "Enter contact's phone number: ";
	std::cin >> userInput;
	this->_contacts[contactIndex].addPhoneNumber(userInput);
	std::cout << "Enter contact's darkest secret: ";
	std::cin >> userInput;
	this->_contacts[contactIndex].addDarkestSecret(userInput);
	std::cout << std::endl;
}

void	Phonebook::displayContacts(void){
	int	i = 0;

	while (i < this->_nbContacts)
	{
		this->_contacts[i].displayContact();
		i++;
	}
}
