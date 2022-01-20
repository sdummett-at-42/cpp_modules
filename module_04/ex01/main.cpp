/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:00:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 17:54:52 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define	ANIMALS_NB 10
int main() {
	const Animal	*animals[ANIMALS_NB];

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
	return (0);
}