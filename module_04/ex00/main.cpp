/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:00:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 13:06:22 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	/* [ Subject Test ] */
	std::cout << std::endl;
	std::cout << ">>> [ Subject Test ] <<<" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete i;
	delete j;
	
	/* [ WrongAnimal Class Test ] */
	std::cout << std::endl;
	std::cout << ">>> [ WrongAnimal Class Test ] <<<" << std::endl;
	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();
	std::cout << Wi->getType() << " " << std::endl;
	Wi->makeSound();
	Wmeta->makeSound();
	
	delete Wmeta;
	delete Wi;

	/* [ Animal Class Test ] */
	std::cout << std::endl;
	std::cout << ">>> [ Animal Class Test ] <<<" << std::endl;
	Animal	bird;

	std::cout << "The bird type is " << bird.getType() << std::endl;
	bird.makeSound();

	/* [ Cat Class Test ] */
	std::cout << std::endl;
	std::cout << ">>> [ Cat Class Test ] <<<" << std::endl;
	Cat	cat;

	std::cout << "The cat type is " << cat.getType() << std::endl;
	cat.makeSound();

	/* [ Dog Class Test ] */
	std::cout << std::endl;
	std::cout << ">>> [ Dog Class Test ] <<<" << std::endl;
	Dog dog;

	std::cout << "The dog type is " << dog.getType() << std::endl;
	dog.makeSound();

	return (0);
}