/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:24 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 15:28:18 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Constuctor called (Contact)" << std::endl;
	// this->_firstname = nullptr;
	// this->_lastname = nullptr;
	// this->_nickname = nullptr;
	// this->_phoneNumber = nullptr;
	// this->_darkestSecret = nullptr;
}

Contact::~Contact()
{
	std::cout << "Destructor called (Contact)" << std::endl;
}
