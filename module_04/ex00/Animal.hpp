/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:21:24 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 00:58:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class	Animal {
	public:
		Animal();
		Animal(Animal const & src);
		Animal& operator=(Animal const & rhs);
		~Animal();
		Animal(std::string type, std::string sound);

		std::string	getType() const;
		void		makeSound() const;
	protected:
		std::string	_type;
		std::string	_sound;
};

#endif