/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:25:13 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/11 13:19:29 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {}
		~MutantStack() {}
		
		MutantStack(const MutantStack<T>& src) { 
			*this = src;
		}

		MutantStack<T>& operator=(const MutantStack<T>& rhs) {
			this->c = rhs.c;
			return *this;
		}
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
};

#endif
