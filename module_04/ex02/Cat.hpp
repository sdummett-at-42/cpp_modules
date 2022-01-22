/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:27:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 18:04:08 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class	Cat: public AAnimal {
	public:
		Cat();
		Cat(Cat const & src);
		Cat& operator=(Cat const & rhs);
		~Cat();

		virtual void	makeSound() const;
	private:
		Brain*	_brain;
};

#endif