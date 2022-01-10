/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:29 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 16:08:27 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

class Phonebook{

public:
	Phonebook();
	~Phonebook();
	void	createNewContact(void);
	void	displayContacts(void);

private:
	Contact	_contacts[8];
	int		_nbContacts;
};
