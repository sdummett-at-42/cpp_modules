/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:41:09 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/11 17:23:30 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanB {
public :
	HumanB(std::string name);
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);

private :
	std::string	_name;
	Weapon*		_weapon;
};

#endif