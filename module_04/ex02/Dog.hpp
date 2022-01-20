/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:26:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 18:04:05 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class	Dog: public AAnimal {
	public:
		Dog();
		Dog(Dog const & src);
		Dog& operator=(Dog const & rhs);
		~Dog();

		virtual void	makeSound() const;
	private:
		Brain*	_brain;
};

#endif