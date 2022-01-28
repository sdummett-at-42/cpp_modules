/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:35:52 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/28 11:16:19 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	ClapTrap	cp;

	cp.attack("Magician");
	cp.takeDamage(20);
	cp.beRepaired(30);
	ClapTrap cp2 = cp;
	cp2.attack("Magician");
	cp2.takeDamage(20);
	cp2.beRepaired(30);

	std::cout << std::endl << "< ScavTrap Class >" << std::endl << std::endl;
	ScavTrap	st("Spider-Man");
	st.attack("Magician");
	st.takeDamage(20);
	st.beRepaired(30);
	ScavTrap st2 = st;
	st2.attack("Magician");
	st2.takeDamage(20);
	st2.beRepaired(30);
	st2.guardGate();
	st2.attack("NOBODY");
	return (0);
}
