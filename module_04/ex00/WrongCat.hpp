/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:38:19 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 12:54:52 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	public:
		WrongCat();
		WrongCat(WrongCat const & src);
		WrongCat& operator=(WrongCat const & rhs);
		~WrongCat();

		virtual void	makeSound() const;
};

#endif
