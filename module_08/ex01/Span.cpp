/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:58:12 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/07 17:37:52 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :
	spanVector(0),
	_size(0) {}

Span::Span(Span const & src) {
	(void)src;
	// DO THIS 
}

Span & Span::operator=(Span const & rhs) {
	(void)rhs;
	// DO THIS 
	return (*this);
}

Span::~Span() {}

Span::Span(unsigned int N) :
	spanVector(N),
	_size(0) {}

void	Span::addNumber(int nb) {
	if (spanVector.size() == this->_size)
		throw SpanIsFull();
	spanVector.push_back(nb);
	this->_size++;
}

int randomNumber() { // NOT A METHOD
	return (std::rand() % 100);
}

void	Span::fill() {
	if (this->_size == this->spanVector.size())
		throw SpanIsFull();
	std::srand ( unsigned ( std::time(0) ) );
	std::generate(spanVector.begin(), spanVector.end(), randomNumber);
	this->_size = this->spanVector.size(); 
}

void	Span::shortestSpan() const {
	if (this->_size == 0)
		throw NoNumbersStored();
	else if (this->_size == 1)
		throw OnlyOneNumber();
}

void	Span::longestSpan() const {
	if (this->_size == 0)
		throw NoNumbersStored();
	else if (this->_size == 1)
		throw OnlyOneNumber();
}

void	Span::printSpan() const {
	std::cout << "myvector contains:";
	for (std::vector<int>::const_iterator it = spanVector.begin(); it != spanVector.end(); ++it)  {
		std::cout << " - " << *it;
	}
	std::cout << '\n';
}
