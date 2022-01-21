/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:41:32 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/21 17:42:01 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP

#include "ICharacter.hpp"

class	Character : ICharacter {
	public:
	/* CANONICAL CLASS DECLARATIONS HERE */

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	private:
		void	putMateriasOnFloor(AMateria *m);
		int		getNumberMateriasOnFloor() const;
		std::string	_name;
		AMateria	*_equippedMaterias[4]; // DYNAMICALLY ALLOCATE THIS ARRAY [4]
		AMateria	**_materiasOnFLoor; 
};

#endif