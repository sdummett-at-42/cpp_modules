/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:13:42 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/04 17:42:17 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T>
void	printArray(T & array) {
	std::cout << "Array values : ";
	for (unsigned int i = 0; i < array.size(); i++) {
	std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

template<typename T>
class	Array {
	public :
		Array() :
			_array(new T[0]),
			_size(0),
			_isAllocated(true) {}

		Array(Array const & src) :
			_isAllocated(false) {
			*this = src;
		}

		Array(unsigned int n) :
			_array(new T[n]),
			_size(n),
			_isAllocated(true) {}

		~Array() {
			delete[] this->_array;
		}

		Array & operator=(Array const & rhs) {
			if (this->_isAllocated == true)
				delete[] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_array[i] = rhs._array[i];
			}
			return (*this);
		}

		T & operator[](unsigned int n) {
			if (n >= this->_size )
				throw outOfRange();
			return this->_array[n];
		}

		class	outOfRange : public std::exception {
			public :
				char const* what(void) const throw() {
					return "index is out of range";
				}
		};

		unsigned int	size() const {
			return (this->_size);
		}

	private :
		T				*_array;
		unsigned int	_size;
		bool			_isAllocated;
};

#endif
