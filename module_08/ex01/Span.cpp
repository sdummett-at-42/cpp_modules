/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:58:12 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/09 12:47:07 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :
	_spanVector(0),
	_size(0) {}

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
	_spanVector(N),
	_size(0) {}

void	Span::addNumber(int nb) {
	if (_spanVector.size() == this->_size)
		throw SpanIsFull();
	_spanVector.erase(_spanVector.begin() + this->_size);
	_spanVector.insert(_spanVector.begin() + this->_size, nb);
	this->_size++;
}

int randomNumber() {
	return (std::rand() % 4200000);
}

void	Span::fill() {
	if (this->_size == this->_spanVector.size())
		throw SpanIsFull();
	std::srand ( unsigned ( std::time(0) ) );
	std::generate(_spanVector.begin(), _spanVector.end(), randomNumber);
	this->_size = this->_spanVector.size(); 
}

long long	Span::shortestSpan() const {
	if (this->_size == 0)
		throw NoNumbersStored();
	else if (this->_size == 1)
		throw OnlyOneNumber();
	long long	min;
	long long	max;
	long long	tmp;
	long long	span;

	std::vector<int>::const_iterator it = this->_spanVector.begin();
	min = *(std::min_element(it, it + 2));
	max = *(std::max_element(it, it + 2));
	span = max - min;
	for (it = this->_spanVector.begin(); it != _spanVector.end() - 1; ++it) {
		min = *(std::min_element(it, it + 2));
		max = *(std::max_element(it, it + 2));
		tmp = max - min;
		if (tmp < 0)
			tmp = tmp * -1;
		if (tmp < span)
			span = tmp;
	}
	return span;
}

long long	Span::longestSpan() const {
	if (this->_size == 0)
		throw NoNumbersStored();
	else if (this->_size == 1)
		throw OnlyOneNumber();

	long long	min;
	long long	max;
	long long	tmp;
	long long	span;

	span = 0;
	std::vector<int>::const_iterator it = this->_spanVector.begin();
	min = *(std::min_element(it, it + 2));
	max = *(std::max_element(it, it + 2));
	span = max - min;

	for (it = this->_spanVector.begin(); it != _spanVector.end() - 1; ++it) {
		min = *(std::min_element(it, it + 2));
		max = *(std::max_element(it, it + 2));
		tmp = max - min;
		if (tmp < 0)
			tmp = tmp * -1;
		if (tmp > span)
			span = tmp;
	}
	return span;
}

void	Span::printSpan() const {
	std::cout << "Span contains:" << std::endl;
	for (std::vector<int>::const_iterator it = _spanVector.begin(); it != _spanVector.end(); ++it)  {
		std::cout << "[" << *it << "] ";
	}
	std::cout << '\n';
}
