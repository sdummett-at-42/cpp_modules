/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:21:24 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 12:56:03 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal {

	public:
		Animal();
		Animal(Animal const & src);
		Animal& operator=(Animal const & rhs);
		virtual ~Animal();
		Animal(std::string type);

		std::string		getType() const;
		virtual void	makeSound() const;

	protected:
		std::string		_type;
};

#endif
