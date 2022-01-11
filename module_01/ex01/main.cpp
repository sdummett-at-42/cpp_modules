/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:00:20 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/11 15:22:18 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde = zombieHorde(42, "Stone");
	
	for (int i = 0; i < 42; i++) {
		horde[i].annonce();
	}
	delete [] horde;
	return (0);
}
