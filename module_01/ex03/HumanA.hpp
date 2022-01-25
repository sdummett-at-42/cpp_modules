/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:41:14 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/25 20:52:35 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA {
	public :
		HumanA(std::string name, Weapon &weapon);
		void	attack(void) const;
		void	setWeapon(Weapon &weapon);

	private :
		std::string	_name;
		Weapon&		_weapon;
};

#endif
