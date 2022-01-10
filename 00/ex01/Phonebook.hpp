/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:29 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 18:57:00 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <stdlib.h>

class Phonebook{

public:
	Phonebook();
	~Phonebook();
	void	createNewContact(void);
	void	displayAllContacts();
	void	displayOneContact();


private:
	Contact	_contacts[8];
	int		_nbContacts;
	int		_oldestContact;
};
