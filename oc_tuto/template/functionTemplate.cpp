/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:59:58 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/03 20:40:22 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T, typename S>
T moyenne(T tab[], int size) {
	S sum(0);

	for (int i(0); i < size; i++)
		sum += tab[i];

	std::cout << "sum = " << sum << std::endl;
	return sum / size;
}

template <typename T>
T maximum(const T & a, const T & b) {
	if ( a > b)
		return a;
	return b;
}

template<>
std::string maximum<std::string>(const std::string & a, const std::string & b) {
	if ( a.size() > b.size())
		return a;
	return b;
}

int main() {

	// [ moyenne() ]
	// int tab[5] = {42, 24, 0, -1, 1337};

	// std::cout << moyenne<int, double>(tab, 5) << std::endl;

	// [ maximum () ]
	// double d1(42.42);
	// double d2(42.21);
	// std::cout << maximum(d1, d2) << std::endl;

	// [ maximum () (specialized std::string)]
	std::cout << maximum<std::string>("elephant", "souris") << std::endl;

	return 0;
}

