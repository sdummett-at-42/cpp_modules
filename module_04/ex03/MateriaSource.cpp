/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:47:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/22 20:55:40 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "[ Default Constructor Called (MateriaSource) ]" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_materias[i] = nullptr;
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
	(void)rhs;
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
		if (this->_materias[i] == nullptr) {
			std::cout << "Learned a new materia" << std::endl;
			this->_materias[i] = m;
			return ;
		}
		else if (i == 3) {
			std::cout << "No slot available to learn a new materia" << std::endl;
			delete m;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != nullptr)
			if (this->_materias[i]->getType() == type) {
				std::cout << "Creating a materia of type " \
				<< type << std::endl;
				return (this->_materias[i]->clone());
			}
	}
	std::cout << "Materia of type " << type \
	<< " has not been learned" << std::endl; 
	return (nullptr);
}
