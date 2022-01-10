/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:52:26 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/10 15:04:12 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact{

public:
	Contact();
	~Contact();

private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};
