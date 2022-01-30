/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:27:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/29 19:43:46 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal {

	public:
		Cat();
		Cat(Cat const & src);
		Cat& operator=(Cat const & rhs);
		~Cat();

		virtual void	makeSound() const;

	private:
		Brain	*_brain;
};

#endif
