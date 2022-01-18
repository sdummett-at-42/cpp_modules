/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/18 22:33:27 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CREATE AN ORTHODOX FORM OF CLASS CLAPTRAP

int main() {

	ClapTrap	cp;

	cp.attack("Magician");
	cp.takeDamage(20);
	cp.beRepaired(30);
	ClapTrap cp2 = cp;
	cp2.attack("Magician");
	cp2.takeDamage(20);
	cp2.beRepaired(30);
	return (0);
}