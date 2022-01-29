/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:29:57 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/29 19:27:16 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal& operator=(WrongAnimal const & rhs);
		virtual ~WrongAnimal();
		WrongAnimal(std::string type);

		std::string	getType() const;
		void	makeSound() const;

	protected:
		std::string	_type;
};

#endif