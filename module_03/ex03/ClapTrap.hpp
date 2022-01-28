/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:57 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 16:03:15 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <string>
#include <iostream>

class	ClapTrap {

	public :
		
		ClapTrap(); /* Default constructor */
		ClapTrap(ClapTrap const & src); /* Copy constructor */
		~ClapTrap(); /* Default constructor */
		ClapTrap&	operator=(ClapTrap const & rhs);

		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		/* ACCESSORS */
		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergy() const;
		int			getAttackDamage() const;
		void		getState() const;

	protected :
		std::string	_name;
		int			_hitpoints;
		int			_energy;
		int			_attackDamage;
};

#endif
