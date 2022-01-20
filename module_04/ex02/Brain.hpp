/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:30:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 17:34:21 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include <string>
#include <iostream>

class Brain {
	public:
		Brain();
		Brain(Brain const & src);
		Brain&	operator=(Brain const & rhs);
		~Brain();

		std::string	ideas[100];
};

#endif