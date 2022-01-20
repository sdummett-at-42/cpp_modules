/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:29:55 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 17:53:20 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[ Default Constructor Called (Brain) ]" << std::endl;
}

Brain::Brain(Brain const & src) {
	std::cout << "[ Copy Constructor Called (Brain) ]" << std::endl;
	*this = src;
}

Brain&	Brain::operator=(Brain const & rhs) {
	(void)rhs;
	return (*this);
}

Brain::~Brain() {
	std::cout << "[ Default Destructor Called (Brain) ]" << std::endl;
}
