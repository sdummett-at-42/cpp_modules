/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:58:12 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/10 15:16:10 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(Span const & src) {
	*this = src;
}

Span & Span::operator=(Span const & rhs) {
	this->_spanVector = rhs._spanVector;
	this->_size = rhs._size;
	return (*this);
}

Span::~Span() {}

Span::Span(unsigned int N) :
	_size(N) {}

void	Span::addNumber(int nb) {
	try {
		if (_spanVector.size() == this->_size)
			throw SpanIsFull();
		_spanVector.push_back(nb);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}

void	Span::betterAddNumber(std::vector<int>::iterator it, \
		std::vector<int>::iterator ite) {
	try {
		while (it != ite) {
			addNumber(*it);
			it++;
		}
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}

void	Span::_getDifferences(std::vector<int> & differences) {
	std::vector<int> sortedVector(this->_spanVector);

	std::sort(sortedVector.begin(), sortedVector.end());

	std::adjacent_difference(sortedVector.begin(), \
		sortedVector.end(), differences.begin());

	differences.erase(differences.begin());

	std::sort(differences.begin(), differences.end());
}

void	Span::_checkSpan() const{
	if (this->_spanVector.size() == 0)
		throw NoNumbersStored();
	else if (this->_spanVector.size() == 1)
		throw OnlyOneNumber();
}

long long	Span::shortestSpan() {
	try {
		_checkSpan();

		std::vector<int> differences(this->_spanVector.size());

		_getDifferences(differences);


		return (*(differences.begin()));
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}

long long	Span::longestSpan() {
	try {
		_checkSpan();

		std::vector<int> sortedVector(this->_spanVector);

		std::sort(sortedVector.begin(), sortedVector.end());
		return (*(sortedVector.end() - 1) - *(sortedVector.begin()));
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

void	Span::printSpan() const {
	std::vector<int> sortedVector(this->_spanVector);

	std::sort(sortedVector.begin(), sortedVector.end());
	
	std::cout << "Span is size " << sortedVector.size() << " and contains :" << std::endl;
	for (std::vector<int>::const_iterator it = sortedVector.begin(); it != sortedVector.end(); ++it)  {
		std::cout << "[" << *it << "] ";
	}
	std::cout << std::endl;
}
