/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:42:00 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/11 01:50:29 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
 
class	Zombie {

public :
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	annonce(void) const;

private :
	std::string	_name;
};

#endif