/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:30:08 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/09 12:03:10 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
#include <set>
#include <vector>

int main() {

	std::cout << std::endl;
	std::cout << ">>>[ Test On Deque ]<<<" << std::endl;
	try {
		std::deque<int> container;
		for(int i = 0; i < 5; i++) {
			container.push_back(i + 42);
		}

		std::deque<int>::iterator it;
		
		it = easyfind(container, 42);
		std::cout << "Occurence found : " << *it << std::endl;
		it = easyfind(container, 1337);
		std::cout << "Occurence found : " << *it << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	
	std::cout << std::endl;
	std::cout << ">>>[ Test On List ]<<<" << std::endl;
	try {
		std::list<int> container;
		for(int i = 0; i < 5; i++) {
			container.push_back(i + 42);
		}

		std::list<int>::iterator it;
		
		it = easyfind(container, 42);
		std::cout << "Occurence found : " << *it << std::endl;
		it = easyfind(container, 1337);
		std::cout << "Occurence found : " << *it << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl;
	std::cout << ">>>[ Test On Set ]<<<" << std::endl;
	try {
		std::set<int> container;
		for(int i = 0; i < 5; i++) {
			container.insert(i + 42);
		}

		std::set<int>::iterator it;
		
		it = easyfind(container, 42);
		std::cout << "Occurence found : " << *it << std::endl;
	it = easyfind(container, 1337);
		std::cout << "Occurence found : " << *it << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl;
	std::cout << ">>>[ Test On Vector ]<<<" << std::endl;
	try {
		std::vector<int> container;
		for(int i = 0; i < 5; i++) {
			container.push_back(i + 42);
		}

		std::vector<int>::iterator it;
		
		it = easyfind(container, 42);
		std::cout << "Occurence found : " << *it << std::endl;
		it = easyfind(container, 1337);
		std::cout << "Occurence found : " << *it << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
