/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:40:44 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/03 15:01:36 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

struct Data
{
	char	c;
	int		i;
	float	f;
	double	d;
};

uintptr_t serialize(Data * ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	Data	dataStruct;
	dataStruct.c = 'Z';
	dataStruct.i = 42;
	dataStruct.f = 24.24;
	dataStruct.d = 1337.7331;

	std::cout << "Original address of dataStruct : " << &dataStruct << std::endl;
	uintptr_t uintptr = serialize(&dataStruct);

	std::cout << std::endl;
	std::cout << "Casting directly in std::cout" << std::endl;
	std::cout << "c : " << (reinterpret_cast<Data *>(uintptr))->c << std::endl;
	std::cout << "i : " << (reinterpret_cast<Data *>(uintptr))->i << std::endl;
	std::cout << "f : " << (reinterpret_cast<Data *>(uintptr))->f << std::endl;
	std::cout << "d : " << (reinterpret_cast<Data *>(uintptr))->d << std::endl;

	std::cout << std::endl;
	std::cout << "Deserializing before printing the values" << std::endl;
	Data	*ptr = deserialize(uintptr);
	std::cout << "c : " << ptr->c << std::endl;
	std::cout << "i : " << ptr->i << std::endl;
	std::cout << "f : " << ptr->f << std::endl;
	std::cout << "d : " << ptr->d << std::endl;

	std::cout << std::endl;
	std::cout << "deserialize() returned : " << ptr << std::endl;

	return 0;
}