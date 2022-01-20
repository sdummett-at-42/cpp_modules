/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:07:01 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 19:54:31 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP

#include "AMateria.hpp"

/* Ice is AMateria concrete class */
class Ice : AMateria {
	public:
		Ice();
		Ice(Ice const & src);
		Ice&	operator=(Ice const & rhs);
		~Ice();

		virtual void use(ICharacter& target);

};

#endif