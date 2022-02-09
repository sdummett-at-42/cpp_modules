/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:57:56 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/09 20:35:56 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

void	removeDuplicates(std::vector<int> & vec) {
	std::set<int>	s(vec.begin(), vec.end());
	vec.assign(s.begin(), s.end());
}

/* Use 420000 for tab >= 10000 */
int randomNumber() {
	return (std::rand() % 10);
}

void fillVector(std::vector<int> & vec) {
	std::srand (unsigned (std::time(0)));
	std::generate(vec.begin(), vec.end(), randomNumber);
	removeDuplicates(vec);
}

int main() {

	/* [ TEST ] */

	// std::cout << std::endl;
	// std::cout << ">>>[ TEST ]<<<" << std::endl;

	// Span sp1(100);
	// sp1.addNumber(1);
	// sp1.addNumber(42);
	// sp1.addNumber(1);
	// sp1.addNumber(44);
	// sp1.addNumber(45);
	// sp1.printSpan();
	
	// std::cout << "shortest span = " << sp1.shortestSpan() << std::endl;
	// std::cout << "longest  span = " << sp1.longestSpan() << std::endl;
	
	// sp1.printSpan();


	/* fillVector TEST */
	std::vector<int> vec(12);
	fillVector(vec);
	std::vector<int>::iterator it;
	// for (it = vec.begin(); it != vec.end(); ++it) {
	// 	std::cout << *it << "---";
	// }
	// std::cout << std::endl;

	Span sp(100);

	sp.betterAddNumber(vec.begin(), vec.end());
	sp.printSpan();

	std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
	std::cout << "longest  span = " << sp.longestSpan() << std::endl;
	

// // SUUUUUUUUUUUUUBJECT
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;









	// /* [ Test with 5 elements (using addNumber) ] */
	// std::cout << std::endl;
	// std::cout << ">>>[ Test with 5 elements (using addNumber) ]<<<" << std::endl;

	// Span sp1(5);
	// sp1.addNumber(6);
	// sp1.addNumber(3);
	// sp1.addNumber(17);
	// sp1.addNumber(9);
	// sp1.addNumber(11);
	// sp1.printSpan();
	// std::cout << sp1.shortestSpan() << std::endl;
	// std::cout << sp1.longestSpan() << std::endl;


	// /* [ Test with 12 elements (using fill method a random number generator) ] */
	// std::cout << std::endl;
	// std::cout << ">>>[ Test with 12 elements (using fill method a random number generator) ]<<<" << std::endl;

	// Span sp2(12);

	// std::vector<int> vec2(12);
	// fill(vec2);
	// sp2.betterAddNumber(vec2.begin(), vec2.end());
	// sp2.printSpan();
	// std::cout << "Shortest span is " << sp2.shortestSpan() << std::endl;
	// std::cout << "Longest span is  " << sp2.longestSpan() << std::endl;


	// /* [ Test with 10 000 elements (using fill method) ] */
	// std::cout << std::endl;
	// std::cout << ">>>[ Test with 10 000 elements ]<<<" << std::endl;

	// Span sp3(10000);

	// std::vector<int> vec3(10000);
	// fill(vec3);
	// sp2.betterAddNumber(vec3.begin(), vec3.end());	// sp3.printSpan(); // Not printing because there is too much values there
	// std::cout << "Shortest span is " << sp3.shortestSpan() << std::endl;
	// std::cout << "Longest span is  " << sp3.longestSpan() << std::endl;

	// /* [ Test with 100 000 elements (using fill method) ] */
	// std::cout << std::endl;
	// std::cout << ">>>[ Test with 100 000 elements ]<<<" << std::endl;

	// Span sp4(100000);

	// std::vector<int> vec4(100000);
	// fill(vec4);
	// sp2.betterAddNumber(vec4.begin(), vec4.end());	// sp4.printSpan(); // Not printing because there is too much values there
	// std::cout << "Shortest span is " << sp4.shortestSpan() << std::endl;
	// std::cout << "Longest span is  " << sp4.longestSpan() << std::endl;

	return 0;
}