/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:09:30 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 19:31:17 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	AMateria {
	protected:
		std::string	_type; //Added by me
		//[...]
	public:
		AMateria();
		AMateria(AMateria const & src);
		AMateria&	operator=(AMateria const & rhs);
		virtual ~AMateria();

		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		//[...]
};

#endif