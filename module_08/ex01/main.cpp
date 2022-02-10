/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:57:56 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/10 15:27:07 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

#define	ONE_HUNDRED 			100
#define TEN_THOUSAND			10000
#define	FIFTY_THOUSAND			50000
#define	ONE_HUNDRED_THOUSAND	100000
#define ONE_HUNDRED_MILLION		100000000

int	randValue = 100;

void	removeDuplicates(std::vector<int> & vec) {
	std::set<int>	s(vec.begin(), vec.end());
	vec.assign(s.begin(), s.end());
}

/* Use 420000 for arr >= 10000 */

int randomNumber() {
	return (std::rand() % randValue);
}

void fillVector(std::vector<int> & vec) {
	std::srand (unsigned (std::time(0)));
	// std::cout << "[fillVector]: vec.size = " << vec.size() << std::endl;
	std::generate(vec.begin(), vec.end(), randomNumber);
	// std::cout << "[fillVector]: vec.size = " << vec.size() << std::endl;
	removeDuplicates(vec);

}

int main() {
	
	/* [ Subject Test ] */
	std::cout << ">>>[ Subject Test ]<<<" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


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
	std::cout << "Shortest span : " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest span  : " << sp1.longestSpan() << std::endl;


	/* [ Test with 12 elements with random numbers ] */
	std::cout << std::endl;
	std::cout << ">>>[ Test with 12 elements with random numbers ]<<<" << std::endl;

	Span				sp2(12);
	std::vector<int>	vec2(12);

	randValue = ONE_HUNDRED;
	fillVector(vec2);
	sp2.betterAddNumber(vec2.begin(), vec2.end());
	sp2.printSpan();

	std::cout << "Shortest span : " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span  : " << sp2.longestSpan() << std::endl;


	/* [ Test with 10 000 elements with random number ] */
	std::cout << std::endl;
	std::cout << ">>>[ Test with 10 000 elements with random numbers ]<<<" << std::endl;

	Span				sp3(TEN_THOUSAND);
	std::vector<int>	vec3(TEN_THOUSAND);

	randValue = ONE_HUNDRED_MILLION;
	fillVector(vec3);
	sp3.betterAddNumber(vec3.begin(), vec3.end());
	// sp3.printSpan(); // Too many elements too print =O

	std::cout << "Shortest span : " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span  : " << sp3.longestSpan() << std::endl;
	

	/* [ Test with 50 000 elements (using fill method) ] */
	std::cout << std::endl;
	std::cout << ">>>[ Test with 50 000 elements with random numbers]<<<" << std::endl;

	Span 				sp4(FIFTY_THOUSAND);
	std::vector<int>	vec4(FIFTY_THOUSAND);

	randValue = ONE_HUNDRED_MILLION;
	fillVector(vec4);
	sp4.betterAddNumber(vec4.begin(), vec4.end());
	// sp4.printSpan(); // Too many elements too print =O

	std::cout << "Shortest span : " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest span  : " << sp4.longestSpan() << std::endl;

	return 0;
}