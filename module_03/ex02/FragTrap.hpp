/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:19:25 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 11:37:18 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		/* CANONICAL FORM OF CLASS */
		FragTrap();
		FragTrap(FragTrap const & src);
		FragTrap&	operator=(FragTrap const & rhs);
		~FragTrap();

		FragTrap(std::string name);

		void	highFivesGuys(void) const;
};

#endif
