/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:48:58 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/19 22:53:54 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_CLASS_HPP
#define DIAMOND_CLASS_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public :
		/* CANONICAL FORM */
		DiamondTrap();
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap& operator=(DiamondTrap const & rhs);
		~DiamondTrap();

		DiamondTrap(std::string name);

		void	attack(std::string const & target);
		void	whoAmI();

		private :
		std::string _name;
};

#endif