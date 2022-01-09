/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:11:32 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/08 19:05:15 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duree.hpp"
#include <iostream>

int main()
{
	Duree duree1(0, 10, 28), duree2(0, 10, 42);

	if (duree1 == duree2)
		std::cout << "Durees egales (operator==)" << std::endl;
	else
		std::cout << "Durees differentes (operator==)" << std::endl;

	if (duree1 != duree2)
		std::cout << "Durees differentes (operator!=)" << std::endl;
	else
		std::cout << "Durees egales (operator!=)" << std::endl;

	if (duree1 < duree2)
		std::cout << "duree1 plus petit que duree2 (operator<)" << std::endl;
	else
		std::cout << "duree1 plus grand que duree2 (operator<)" << std::endl;

	if (duree1 > duree2)
		std::cout << "duree1 plus grand que duree2 (operator>)" << std::endl;
	else
		std::cout << "duree1 plus petit que duree2 (operator>)" << std::endl;
	
	Duree	add = duree1 + duree2;
	std::cout << "Heures (add) : " << add.getHeures() << std::endl;
	std::cout << "Minutes (add) : " << add.getMinutes() << std::endl;
	std::cout << "Secondes (add) : " << add.getSecondes() << std::endl;

	std::cout << duree1 << " et " << duree2 << std::endl;
	return (0);
}