/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:41:22 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/22 20:19:13 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("AnonymousCharacter") {
	std::cout << "[ Default Constructor Called (Character) ]" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_equippedMaterias[i] = nullptr;
	}
	this->_materiasOnFLoor = new AMateria*[1];
	this->_materiasOnFLoor[0] = nullptr;
}

Character::Character(Character const & src) {
	std::cout << "[ Copy Constructor Called (Character) ]" << std::endl;
	*this = src;
}

Character&	Character::operator=(Character const & rhs) {
	this->_name = rhs.getName();
	/* Copy equippedMaterias and materiasOnFloor */
	return (*this);
}

Character::Character(std::string const name): _name(name) {
	std::cout << "[ Parameterized Constructor Called (Character) ]" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_equippedMaterias[i] = nullptr;
	}
	this->_materiasOnFLoor = new AMateria*;
	this->_materiasOnFLoor[0] = nullptr;
}

Character::~Character() {
	std::cout << "[ Default Destructor Called (Character) ]" << std::endl;
	deleteMaterias();
	// delete this->_materiasOnFLoor;
}


std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_equippedMaterias[i] == nullptr) {
			std::cout << "equippedMateria" << "[" << i << "]" \
			<< " is empty, equipping materia..." << std::endl;
			this->_equippedMaterias[i] = m;
			return ;
		}
		else if (i == 3) {
			std::cout << "All slot is busy" << std::endl;
			delete m;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "[ unequip() ] No slot found at this index" << std::endl;
		return ;
	}
	if (this->_equippedMaterias[idx] != nullptr) {
		std::cout << "Materia equipped at slot " << idx \
		<< ", unequipping this slot" << std::endl;
		// SAVE PTR !!!
		putMateriasOnFloor(this->_equippedMaterias[idx]);
		this->_equippedMaterias[idx] = nullptr;
	}
	else {
		std::cout << "Slot " << idx << " was already empty" << std::endl;
	}

}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "[ use() ] No slot found at this index" << std::endl;
		return ;
	}
	if (this->_equippedMaterias[idx] != nullptr) {
		this->_equippedMaterias[idx]->use(target);
	}

}

int		Character::getNumberMateriasOnFloor() const {
	int	n = 0;
	while (this->_materiasOnFLoor[n] != nullptr) {
		n++;
	}
	return (n + 1);
}

void	Character::putMateriasOnFloor(AMateria *m) {
	int	i = getNumberMateriasOnFloor();
	AMateria	**tmp = new AMateria*[i + 1];
	std::cout << "Allocating " << i + 1 << " AMateria *" << std::endl;
	i = 0;
	while (this->_materiasOnFLoor[i] != nullptr) {
		tmp[i] = this->_materiasOnFLoor[i];
		i++;
	}
	tmp[i] = m;
	tmp[i + 1] = nullptr;
	delete[] this->_materiasOnFLoor;
	this->_materiasOnFLoor = tmp;
}

void	Character::deleteMaterias() {
	int i;
	for (i = 0; i < 4; i++) {
		delete this->_equippedMaterias[i];
	}
	i = 0;
	while (this->_materiasOnFLoor[i] != nullptr) {
		delete this->_materiasOnFLoor[i];
		i++;
	}
	delete this->_materiasOnFLoor[i];
	delete[] _materiasOnFLoor;
}
