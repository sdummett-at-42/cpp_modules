/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:41:51 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/11 14:56:42 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie*	zombie1 = newZombie("Donald");
	randomChump("MJ");
	Zombie*	zombie2 = newZombie("Mickey");
	Zombie*	zombie3 = newZombie("Daisy");
	randomChump("Kobe");
	Zombie*	zombie4 = newZombie("Pluto");
	Zombie*	zombie5 = newZombie("Picsou");

	zombie1->annonce();
	zombie2->annonce();
	zombie3->annonce();
	zombie4->annonce();
	zombie5->annonce();
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;
	delete zombie5;
	return (0);
}