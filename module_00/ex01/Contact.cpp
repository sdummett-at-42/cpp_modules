/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:24 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/26 13:36:49 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::addFirstname(std::string firstname) {
	this->_firstname = firstname;
}

void	Contact::addLastname(std::string lastname) {
	this->_lastname = lastname;
}

void	Contact::addNickname(std::string nickname) {
	this->_nickname = nickname;
}

void	Contact::addPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void	Contact::addDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

void	Contact::displayContact(void) const {
	std::cout << "Firstname     : " << this->_firstname << std::endl;
	std::cout << "Lastname      : " << this->_lastname<< std::endl;
	std::cout << "Nickname      : " << this->_nickname << std::endl;
	std::cout << "Phone number  : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
}

std::string	Contact::getFirstname(void) const {
	return (this->_firstname);
}

std::string	Contact::getLastname(void) const {
	return (this->_lastname);
}

std::string	Contact::getNickname(void) const {
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}
