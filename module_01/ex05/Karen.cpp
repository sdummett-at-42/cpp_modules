/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:11:00 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 18:51:28 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
	this->fp[0] = &Karen::debug;
	this->fp[1] = &Karen::info;
	this->fp[2] = &Karen::warning;
	this->fp[3] = &Karen::error;

	this->levelStr[0].assign("DEBUG");
	this->levelStr[1].assign("INFO");
	this->levelStr[2].assign("WARNING");
	this->levelStr[3].assign("ERROR");
}
void	Karen::complain(std::string level) {

	for (int i = 0; i < 4; i++)	{
		if (level.compare(levelStr[i]) == 0) {
			std::cout << "[" << level << "]" << std::endl; 
			(this->*fp[i])();
			break ;
		}
	}
}

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\"" << std::endl;
	std::cout << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!\"" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming here for years and you just started working here last month.\"" << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now.\"" << std::endl;
	std::cout << std::endl;
}
