/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:41:22 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 18:04:56 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "[ Default Constructor Called (Character) ]" << std::endl;
}

Character::Character(Character const & src) {
	std::cout << "[ Copy Constructor Called (Character) ]" << std::endl;
}

Character&	Character::operator=(Character const & rhs) {

}

Character::~Character() {
	std::cout << "[ Default Destructor Called (Character) ]" << std::endl;
}


std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_equippedMaterias[i] = 0) {
			
			this->_equippedMaterias[i] = m;
		}
		else if (i == 3)
			delete m;
	}
}

void Character::unequip(int idx) {
	if (this->_equippedMaterias[idx] != 0) {
		delete this->_equippedMaterias[idx];
		this->_equippedMaterias[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->_equippedMaterias[idx] != 0) {
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
	AMateria	**tmp = new AMateria* [i + 1];
	i = 0;
	while (this->_materiasOnFLoor[i] != nullptr) {
		tmp[i] = this->_materiasOnFLoor[i];
		i++;
	}
	tmp[i] = m;
	tmp[i + 1] = nullptr;
	delete this->_materiasOnFLoor;
	this->_materiasOnFLoor = tmp;
}