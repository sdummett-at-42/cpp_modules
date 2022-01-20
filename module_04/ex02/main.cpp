/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:00:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 18:05:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define	ANIMALS_NB 10
int main() {
	const AAnimal	*animals[ANIMALS_NB];

	for (int i = 0; i < ANIMALS_NB / 2; i++) {
		animals[i] = new Cat();
	}
	for (int i = ANIMALS_NB / 2; i < ANIMALS_NB; i++) {
		animals[i] = new Dog();
	}
	animals[4]->makeSound();

	for (int i = 0; i < ANIMALS_NB; i++) {
		delete animals[i];
	}
	AAnimal animal; // THIS CANNOT BE INSTANTIATED
	return (0);
}