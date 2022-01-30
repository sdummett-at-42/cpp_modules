/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:29:55 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 12:56:37 by sdummett         ###   ########.fr       */
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
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "[ Default Destructor Called (Brain) ]" << std::endl;
}
 