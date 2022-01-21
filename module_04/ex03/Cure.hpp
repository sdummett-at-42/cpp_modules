/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:06:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 19:08:06 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
#define CURE_CLASS_HPP

#include "AMateria.hpp"

/* Cure is AMateria concrete class */
class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const & src);
		Cure&	operator=(Cure const & rhs);
		~Cure();

		virtual AMateria* clone() const;
		virtual void	use(ICharacter& target);

};

#endif