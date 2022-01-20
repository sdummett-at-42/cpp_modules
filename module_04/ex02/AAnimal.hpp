/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:21:24 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 18:00:35 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
#define AANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class	AAnimal {
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		AAnimal& operator=(AAnimal const & rhs);
		virtual ~AAnimal();
		AAnimal(std::string type);

		std::string	getType() const;
		virtual void	makeSound() const = 0;
	protected:
		std::string	_type;
};

#endif