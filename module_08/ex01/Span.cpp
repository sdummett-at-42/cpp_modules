/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:58:12 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/09 20:57:39 by sdummett         ###   ########.fr       */
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

void	Span::_checkSpan() const{
	if (this->_spanVector.size() == 0)
		throw NoNumbersStored();
	else if (this->_spanVector.size() == 1)
		throw OnlyOneNumber();
}

void	Span::_sortVector(std::vector<int> & vec) {
	std::sort(vec.begin(), vec.end());
}

void	Span::_getDifferences(std::vector<int> & differences) {
	std::vector<int> sortedVector(this->_spanVector);

	_sortVector(sortedVector);

	std::adjacent_difference(sortedVector.begin(), \
		sortedVector.end(), differences.begin());
	
	_sortVector(differences);

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

		_sortVector(sortedVector);
		return (*(sortedVector.end() - 1) - *(sortedVector.begin()));
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

void	Span::printSpan() const {
	std::cout << "Span contains:" << std::endl;
	for (std::vector<int>::const_iterator it = _spanVector.begin(); it != _spanVector.end(); ++it)  {
		std::cout << "[" << *it << "] ";
	}
	std::cout << '\n';
}
