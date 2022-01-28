/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:16:05 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 18:45:02 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {

	public :
		ScavTrap();
		ScavTrap(ScavTrap const & src);
		ScavTrap&	operator=(ScavTrap const & rhs);
		~ScavTrap();
		ScavTrap(std::string name);

		void	attack(std::string const & target);
		void	guardGate();
};

#endif
