/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:26:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 00:57:29 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.hpp"
#include <iostream>

class	Dog: public Animal {
	public:
		Dog();
		Dog(Dog const & src);
		Dog& operator=(Dog const & rhs);
		~Dog();
};

#endif