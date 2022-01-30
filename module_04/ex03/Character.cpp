/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:41:22 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 15:57:40 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() :
	_name("AnonymousCharacter") {
	std::cout << "[ Default Constructor Called (Character) ]" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_equippedMaterias[i] = NULL;
	}
	this->_materiasOnFloor = new AMateria*[1];
	this->_materiasOnFloor[0] = NULL;
}

Character::Character(Character const & src) {
	std::cout << "[ Copy Constructor Called (Character) ]" << std::endl;
	*this = src;
}

Character&	Character::operator=(Character const & rhs) {
	this->_name = rhs.getName();
	/* Copy equippedMaterias and materiasOnFloor */
	for (int i = 0; i < 4; i++) {
		delete this->_equippedMaterias[i];
		this->_equippedMaterias[i] = NULL;
		if (rhs._equippedMaterias[i] != NULL)
			this->_equippedMaterias[i] = rhs._equippedMaterias[i]->clone();
	}
	return (*this);
}

Character::Character(std::string const name):
	_name(name) {
	std::cout << "[ Parameterized Constructor Called (Character) ]" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_equippedMaterias[i] = NULL;
	}
	this->_materiasOnFloor = new AMateria*;
	this->_materiasOnFloor[0] = NULL;
}

Character::~Character() {
	std::cout << "[ Default Destructor Called (Character) ]" << std::endl;
	deleteMaterias();
}


std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_equippedMaterias[i] == NULL) {
			std::cout << "Character: " << this->_name \
				<< ": Slot " << i \
				<< " is empty, equipping materia..." << std::endl;
			this->_equippedMaterias[i] = m;
			return ;
		}
		else if (i == 3) {
			std::cout << "Character: " << this->_name \
				<< ": All slot is busy" << std::endl;
			delete m;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Character: " << this->_name \
			<< ": (unequip) No slot found at index " << idx << std::endl;
		return ;
	}
	if (this->_equippedMaterias[idx] != NULL) {
		std::cout << "Character: " << this->_name \
			<< ": Materia equipped at slot " << idx \
			<< ", unequipping this slot" << std::endl;
		putMateriasOnFloor(this->_equippedMaterias[idx]);
		this->_equippedMaterias[idx] = NULL;
	}
	else {
		std::cout << "Character: " << this->_name \
		<< ": Slot " << idx << " was already empty" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "Character: " << this->_name \
		<< ": (use) No slot found at index " << idx << std::endl;
		return ;
	}
	if (this->_equippedMaterias[idx] != NULL) {
		this->_equippedMaterias[idx]->use(target);
	}
}

int		Character::getNumberMateriasOnFloor() const {
	int	n = 0;
	while (this->_materiasOnFloor[n] != NULL) {
		n++;
	}
	return (n + 1);
}

void	Character::putMateriasOnFloor(AMateria *m) {
	int	i = getNumberMateriasOnFloor();
	AMateria	**tmp = new AMateria*[i + 1];

	i = 0;
	while (this->_materiasOnFloor[i] != NULL) {
		tmp[i] = this->_materiasOnFloor[i];
		i++;
	}
	tmp[i] = m;
	tmp[i + 1] = NULL;
	delete[] this->_materiasOnFloor;
	this->_materiasOnFloor = tmp;
}

void	Character::deleteMaterias() {
	int i;
	for (i = 0; i < 4; i++) {
		delete this->_equippedMaterias[i];
	}
	i = 0;
	while (this->_materiasOnFloor[i] != NULL) {
		delete this->_materiasOnFloor[i];
		i++;
	}
	delete this->_materiasOnFloor[i];
	delete _materiasOnFloor;
}
