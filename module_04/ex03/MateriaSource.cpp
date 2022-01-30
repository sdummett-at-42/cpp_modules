/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:47:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 16:08:33 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "[ Default Constructor Called (MateriaSource) ]" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	std::cout << "[ Copy Constructor Called (MateriaSource) ]" << std::endl;
	*this = src;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs) {
	for (int i = 0; i < 4; i++) {
		this->_materias[i] = rhs._materias[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	std::cout << "[ Default Destructor Called (MateriaSource) ]" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] == NULL) {
			this->_materias[i] = m;
			std::cout << "MateriaSource: Learned a new materia: " \
				<< this->_materias[i]->getType() << std::endl;
			return ;
		}
		else if (i == 3) {
			std::cout << "MateriaSource: No slot available to learn a new materia" << std::endl;
			delete m;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			if (this->_materias[i]->getType() == type) {
				std::cout << "MateriaSource: Creating a materia of type " \
				<< type << std::endl;
				return (this->_materias[i]->clone());
			}
	}
	std::cout << "MateriaSource: Materia of type " << type \
	<< " has not been learned" << std::endl; 
	return (NULL);
}
