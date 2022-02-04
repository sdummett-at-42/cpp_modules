/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:03:17 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/04 14:02:27 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int size, void (*apply)(T &)) {

	for (int i = 0; i < size; i++) {
		apply(array[i]);
	}
}

template<typename T>
void	printArray(T *array, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl << std::endl;
}

template<typename T>
void	addOneT(T & elem) {
	elem += 1;
}

template<typename T>
void	removeTwoT(T & elem) {
	elem -= 2;
}

#endif
