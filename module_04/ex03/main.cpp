/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:11:36 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 16:17:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << ">>> [ Creating MateriaSource ] <<<" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl;
	std::cout << ">>> [ Learning New Materias (Ice and Cure) ] <<<" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl;
	std::cout << ">>> [ Creating New Character ] <<<" << std::endl;

	ICharacter* bob = new Character("Bob");

	std::cout << std::endl;
	std::cout << ">>> [ Equipping Character With Materias ] <<<" << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);

	std::cout << std::endl;
	std::cout << ">>> [ Creating New Character To Use Materias On Him ] <<<" << std::endl;
	ICharacter* patrick = new Character("Patrick");

	std::cout << std::endl;
	std::cout << ">>> [ Using Materias ] <<<" << std::endl;
	bob->use(0, *patrick);
	bob->use(1, *patrick);

	delete bob;
	delete patrick;
	delete src;

	std::cout << std::endl;
	std::cout << ">>> [ Test On Assignment Operator ] <<<" << std::endl;
	Character	*carlo = new Character("Carlo");
	Character	*sandy = new Character("Sandy");
	ICharacter	*gary = new Character("Gary");
	

	IMateriaSource *source = new MateriaSource();
	source->learnMateria(new Ice());

	carlo->equip(source->createMateria("ice"));
	*sandy = *carlo;
	delete carlo;

	sandy->use(0, *gary);

	delete sandy;
	delete gary;
	delete source;
	return 0;
}