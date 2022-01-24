/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:41:07 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 17:53:38 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon {
public :
	Weapon(std::string type);
	std::string const &	getType(void) const;
	void				setType(std::string type);

private :
	std::string	_type;
};

#endif
