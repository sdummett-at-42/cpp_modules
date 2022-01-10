/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:26 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 15:50:48 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact{

public:
	Contact();
	~Contact();
	void	addFirstname(std::string firstname);
	void	addLastname(std::string lastname);
	void	addNickname(std::string nickname);
	void	addPhoneNumber(std::string phoneNumber);
	void	addDarkestSecret(std::string darkestSecret);
	void	displayContact(void);

private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};
