/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:00:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 12:51:57 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define	ANIMALS_NB 10

int main() {

	/* [ TEST 1 ] */
	std::cout << std::endl;
	std::cout << ">>> TEST 1 <<<" << std::endl;
	Animal *animal1 = new Dog();
	Animal *animal2 = new Dog();

	*animal1 = *animal2;
	delete animal2;
	delete animal1;


	/* [ TEST 2 ] */
	std::cout << std::endl;
	std::cout << ">>> TEST 2 <<<" << std::endl;
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog();

	*dog1 = *dog2;
	delete dog2;
	delete dog1;

	/* [ TEST 3 ] */
	std::cout << std::endl;
	std::cout << ">>> TEST 3 <<<" << std::endl;
	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();

	*cat1 = *cat2;
	delete cat2;
	delete cat1;

	/* [ TEST 4 ] */
	std::cout << std::endl;
	std::cout << ">>> TEST 4 <<<" << std::endl;
	const Animal	*animals[ANIMALS_NB];

	for (int i = 0; i < ANIMALS_NB / 2; i++) {
		animals[i] = new Cat();
	}

	for (int i = ANIMALS_NB / 2; i < ANIMALS_NB; i++) {
		animals[i] = new Dog();
	}

	animals[(ANIMALS_NB / 2) - 1]->makeSound();
	animals[ANIMALS_NB / 2]->makeSound();

	for (int i = 0; i < ANIMALS_NB; i++) {
		delete animals[i];
	}
	return (0);
}
