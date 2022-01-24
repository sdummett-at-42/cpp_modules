/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:00:20 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 17:44:12 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde1 = zombieHorde(1, "Michael Jackson");
	
	for (int i = 0; i < 1; i++) {
		horde1[i].annonce();
	}

	Zombie	*horde2 = zombieHorde(42, "Frankenstein");
	
	for (int i = 0; i < 42; i++) {
		horde2[i].annonce();
	}

	delete[] horde1;
	delete[] horde2;
	return (0);
}
