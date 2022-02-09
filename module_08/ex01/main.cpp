/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:57:56 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/09 12:51:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main() {
	
	/* [ Test with 5 elements (using addNumber) ] */
	std::cout << std::endl;
	std::cout << ">>>[ Test with 5 elements (using addNumber) ]<<<" << std::endl;

	Span sp1(5);
	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	sp1.printSpan();
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;


	/* [ Test with 12 elements (using fill method a random number generator) ] */
	std::cout << std::endl;
	std::cout << ">>>[ Test with 12 elements (using fill method a random number generator) ]<<<" << std::endl;

	Span sp2(12);

	sp2.fill();
	sp2.printSpan();
	std::cout << "Shortest span is " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span is  " << sp2.longestSpan() << std::endl;


	/* [ Test with 10 000 elements (using fill method) ] */
	std::cout << std::endl;
	std::cout << ">>>[ Test with 10 000 elements ]<<<" << std::endl;

	Span sp3(10000);

	sp3.fill();
	// sp3.printSpan(); // Not printing because there is too much values there
	std::cout << "Shortest span is " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span is  " << sp3.longestSpan() << std::endl;

	/* [ Test with 100 000 elements (using fill method) ] */
	std::cout << std::endl;
	std::cout << ">>>[ Test with 100 000 elements ]<<<" << std::endl;

	Span sp4(100000);

	sp4.fill();
	// sp4.printSpan(); // Not printing because there is too much values there
	std::cout << "Shortest span is " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest span is  " << sp4.longestSpan() << std::endl;

	return 0;
}