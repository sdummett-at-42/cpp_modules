/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:47:51 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 15:25:28 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	/* [ TEST ] */
	std::cout << std::endl;
	std::cout << ">>> [ Default Constructor Test ] <<<" << std::endl; 
	try {
		Form f1;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ TEST ] */
	std::cout << std::endl;
	std::cout << ">>> [ Valid Form Test ] <<<" << std::endl; 
	try {
		Form f2("Contract1", 42, 24);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Wrong Form Test 1 ] */
	std::cout << std::endl;
	std::cout << ">>> [ Invalid Form Test (gradeToSign Too Low) ] <<<" << std::endl; 
	try {
		Form f3("Contract2", 151, 24);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Wrong Form Test 2 ] */
	std::cout << std::endl;
	std::cout << ">>> [ Invalid Form Test (gradeToSign Too High) ] <<<" << std::endl; 
	try {
		Form f4("Contract3", 0, 24);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	/* [ Wrong Form Test 3 ] */
	std::cout << std::endl;
	std::cout << ">>> [ Invalid Form Test (gradeToExecute Too Low) ] <<<" << std::endl; 
	try {
		Form f5("Contract4", 42, 152);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Wrong Form Test 4 ] */
	std::cout << std::endl;
	std::cout << ">>> [ Invalid Form Test (gradeToExecute Too High) ] <<<" << std::endl; 
	try {
		Form f6("Contract5", 42, -1);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Test On Form::beSigned (Bureaucrat can sign) ] */
	std::cout << std::endl;
	std::cout << ">>> [ Test On Form::beSigned (Bureaucrat can sign) ] <<<" << std::endl; 
	try {
		Bureaucrat bcrat = Bureaucrat("Amadeus", 42);
		std::cout << bcrat << std::endl;
		Form f6("Contract6", 42, 24);
		bcrat.signForm(f6);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Test On Form::beSigned (Bureaucrat can't sign) ] */
	std::cout << std::endl;
	std::cout << ">>> [ Test On Form::beSigned (Bureaucrat can't sign) ] <<<" << std::endl; 
	try {
		Bureaucrat bcrat = Bureaucrat("Amadeus", 2);
		std::cout << bcrat << std::endl;
		Form f7("Contract7", 1, 24);
		bcrat.signForm(f7);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
