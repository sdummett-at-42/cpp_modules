/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:13:27 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/04 17:44:30 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	try {
		std::cout << std::endl << std::endl;
		std::cout << "[ Testing empty Array ]" << std::endl;

		Array<int> array;

		std::cout << "Array's size is (using array.size()): " << array.size() << std::endl;
		try {
			std::cout << std::endl << ">>> Trying to access index [0]" << std::endl;
			std::cout << array[0] << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}


	try {
		std::cout << std::endl << std::endl;
		std::cout << "[ Testing Array with char type ]" << std::endl;
		Array<char> array(3);
		
		std::cout << "Array's size is (using array.size()): " << array.size() << std::endl;
		std::cout << std::endl << ">>> Filling array" << std::endl;
		array[0] = 'A';
		array[1] = 'B';
		array[2] = 'C';
		printArray(array);

		try {
			std::cout << std::endl << ">>> Trying to access out of bound index [3]" << std::endl;
			std::cout << array[3] << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			std::cout << std::endl << ">>> Trying to modify a value by using subscript operator (operator[])" << std::endl;
			std::cout << std::endl << ">>> Assigning character 'S' to index [1]" << std::endl;
			array[1] = 'S';
			printArray(array);
			std::cout << std::endl << ">>> Assigning character 'Z' to index [2]" << std::endl;
			array[2] = 'Z';
			printArray(array);
			std::cout << std::endl << ">>> Assigning character 'm' to index [0]" << std::endl;
			array[0] = 'm';
			printArray(array);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << std::endl;
		std::cout << "[ Testing Array with double type ]" << std::endl;
		Array<double> array(10);
		
		std::cout << "Array's size is (using array.size()): " << array.size() << std::endl;
		std::cout << std::endl << ">>> Filling array" << std::endl;
		array[0] = -42.00;
		array[1] = 1337.1337;
		array[2] = 21.21;
		array[3] = 42.42;
		array[4] = 0.0;
		array[5] = 1.0;
		array[6] = 4.6;
		array[7] = 234.4;
		array[8] = 64.16;
		array[9] = 12321.214;

		printArray(array);

		try {
			std::cout << std::endl << ">>> Trying to use operator= to copy array into another" << std::endl;
			Array<double> array2 = array;
			
			std::cout << ">>> Printing array2 after using operator=" << std::endl;
			printArray(array2);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
