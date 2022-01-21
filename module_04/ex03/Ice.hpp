/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:07:01 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 19:08:13 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP

#include "AMateria.hpp"

/* Ice is AMateria concrete class */
class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const & src);
		Ice&	operator=(Ice const & rhs);
		~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif