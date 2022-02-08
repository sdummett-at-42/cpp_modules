/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:03:00 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/08 18:44:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	addOne(int const & elem) {
	int & elem2 = const_cast<int &>(elem);
	elem2 += 1;
}

void	removeTwo(int const & elem) {
	int & elem2 = const_cast<int &>(elem);
	elem2 -= 2;
}

int main() {
	
	std::cout << std::endl;
	std::cout << "[ Testing iter on int ]" << std::endl << std::endl;
	int intArray[] = {1, 2, 4, 8, 16, 32, 64, 128, 256};

	std::cout << "Array values before any operations" << std::endl;
	printArray(intArray, 9);
	iter(intArray, 9, &addOne);
	std::cout << "Array values after using addOne function" << std::endl;
	printArray(intArray, 9);
	iter(intArray, 9, &removeTwo);
	std::cout << "Array values after using removeTwo function" << std::endl;
	printArray(intArray, 9);


	std::cout << std::endl;
	std::cout << "[ Testing iter on double with template function as third parameter ]" << std::endl << std::endl;
	double doubleArray[] = {-1.5, 2.1, 4.4, 8.6, 16.1, 32.0, 64.0, 128.42, 256.6, -5.2, -1337.3343, 8.5};

	std::cout << "Array values before any operations" << std::endl;
	printArray(doubleArray, 12);
	iter(doubleArray, 12, &addOneT);
	std::cout << "Array values after using addOneT function template" << std::endl;
	printArray(doubleArray, 12);
	iter(doubleArray, 12, &removeTwoT);
	std::cout << "Array values after using removeTwoT function template" << std::endl;
	printArray(doubleArray, 12);
	

	std::cout << std::endl;
	std::cout << "[ Testing iter on char with template function as third parameter ]" << std::endl << std::endl;
	char charArray[] = {'4', '2', ' ', 's', 'c', 'h', 'o', 'o', 'l'};

	std::cout << "Array values before any operations" << std::endl;
	printArray(charArray, 9);
	iter(charArray, 9, &addOneT);
	std::cout << "Array values after using addOneT function" << std::endl;
	printArray(charArray, 9);
	iter(charArray, 9, &removeTwoT);
	std::cout << "Array values after using removeTwoT function" << std::endl;
	printArray(charArray, 9);
	iter(charArray, 9, &addOneT);
	std::cout << "Array values after using addOneT function" << std::endl;
	printArray(charArray, 9);

	return 0;
}
