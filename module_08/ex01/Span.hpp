/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:58:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/09 12:39:33 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <ctime>

class	Span {
	public :
		Span();
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		~Span();

		Span(unsigned int N);

		void		addNumber(int nb);
		void		fill();

		long long	shortestSpan() const;
		long long	longestSpan() const ;
		void		printSpan() const;

		class	SpanIsFull : public std::exception {
			public:
				char const* what(void) const throw() {
					return "Span is full";
				}
		};

		class	NoNumbersStored : public std::exception {
			public:
				char const* what(void) const throw() {
					return "No numbers stored";
				}
		};
		class	OnlyOneNumber : public std::exception {
			public:
				char const* what(void) const throw() {
					return "Only one number stored";
				}
		};

	private :
		std::vector<int>	_spanVector;
		unsigned int		_size;
};