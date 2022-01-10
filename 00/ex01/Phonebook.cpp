/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:51:53 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 15:20:59 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Constructor called (Phonebook)" << std::endl;
	this->_nbContacts = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "Destructor called (Phonebook)" << std::endl;
}

