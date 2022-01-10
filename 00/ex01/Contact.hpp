/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:26 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 18:53:56 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact{

public:
	void		addFirstname(std::string firstname);
	void		addLastname(std::string lastname);
	void		addNickname(std::string nickname);
	void		addPhoneNumber(std::string phoneNumber);
	void		addDarkestSecret(std::string darkestSecret);
	std::string	getFirstname(void) const;
	std::string	getLastname(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;
	void		displayContact(void) const;

private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};
