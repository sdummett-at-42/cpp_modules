/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:12:13 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/03 16:17:20 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class	Base { public : virtual ~Base(){}};
class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

int roll() {
   srand(time(NULL));

	return ((rand() % 3) + 1);
}

Base *	generate() {
	int result = roll();

	std::cout << "Generating class ";
	if (result == 1) {
		std::cout << "A" << std::endl;
		return (new A);
	}
	if (result == 2) {
		std::cout << "B" << std::endl;
		return (new B);
	}
	std::cout << "C" << std::endl;
	return (new C);
}

void	identify(Base * p) {
	std::cout << std::endl;
	std::cout << "Identifying type of p pointer..." << std::endl;
	std::cout << "*p is an instance of class ";

	A * a = NULL;
	B * b = NULL;
	C * c = NULL;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}

void	identify(Base & p) {
	std::cout << std::endl;
	std::cout << "Identifying type of p reference..." << std::endl;
	std::cout << "p is an instance of class ";

	try {
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e) {}

	try {
		B & b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e) {}

	try {
		C & c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e) {}
}

int main() {

	Base *ptr;
	
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;

	return 0;
}