/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:58:21 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/09 20:32:51 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <numeric>
#include <set>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>

class	Span {
	public :
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		~Span();

		Span(unsigned int N);

		void		addNumber(int nb);
		void		betterAddNumber(std::vector<int>::iterator it, \
			std::vector<int>::iterator ite);

		long long	shortestSpan();
		long long	longestSpan();
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
		void				_checkSpan() const;
		void				_sortVector(std::vector<int> & vec);
		void				_getDifferences(std::vector<int> & differences);
		Span();
};
