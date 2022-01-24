/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:51:53 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 16:23:58 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : _nbContacts(0), _oldestContact(0) {
}

Phonebook::~Phonebook() {
}

void	Phonebook::createNewContact(void) {
	std::string	userInput;
	int			contactIndex;

	contactIndex = this->_oldestContact;
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
	if (this->_oldestContact == 7)
		this->_oldestContact = 0;
	else
		this->_oldestContact++;
	if (this->_nbContacts < 8)
		this->_nbContacts++;
}

std::string	arrangeField(std::string field) {
	if (field.size() > 10) {
		field.resize(9);
		field.push_back('.');
	}
	while (field.size() < 10)
		field.insert(field.cbegin(), ' ');
	return (field);
}

void	Phonebook::displayAllContacts(void) {
	int			i = 0;
	std::string	field;

	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "| INDEX |  FIRSTNAME |  LASTNAME  |  NICKNAME  |" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	while (i < this->_nbContacts)
	{
		std::cout << "|   " << i + 1 << "   | ";
		field = arrangeField(this->_contacts[i].getFirstname());
		std::cout << field << " | ";
		field = arrangeField(this->_contacts[i].getLastname());
		std::cout << field << " | ";
		field = arrangeField(this->_contacts[i].getNickname());
		std::cout << field << " |" << std::endl;
		std::cout << "------------------------------------------------" << std::endl;
		i++;
	}

}

void	Phonebook::displayOneContact(void) {
	std::string	userInput;
	int			contactIndex;

	std::cout << "Which contact do you want to display informations [1 - 8]? ";
	std::cin >> userInput;
	contactIndex = atoi(userInput.c_str());
	if (contactIndex < 1 || contactIndex > 8 || contactIndex > this->_nbContacts)
	{
		std::cout << "This contact doesn't exist." << std::endl;
		return ;
	}
	this->_contacts[contactIndex - 1].displayContact();	
}
