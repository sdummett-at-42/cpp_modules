/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:00:11 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 16:44:19 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	// Animal bird;
	// std::cout << "The type of animal is " << bird.getType() << std::endl;
	
	// Cat cat;
	// std::cout << "The type of animal is " << cat.getType() << std::endl;

	// Dog dog;
	// std::cout << "The type of animal is " << dog.getType() << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	// const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	// j->makeSound();
	meta->makeSound();
	return (0);
}