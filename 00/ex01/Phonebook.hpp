/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:29 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 15:20:44 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

class Phonebook{

public:
	Phonebook();
	~Phonebook();

private:
	Contact	_contacts[8];
	int		_nbContacts;
};
