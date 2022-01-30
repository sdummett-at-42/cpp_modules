/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:27:50 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 14:32:20 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat: public AAnimal {

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
