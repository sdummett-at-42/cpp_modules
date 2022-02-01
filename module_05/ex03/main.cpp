/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:13:47 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 21:39:22 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "colorcodes.h"

int main() {

	/* [ ShrubberyCreationForm Test 1 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ ShrubberyCreationForm Test 1 ]<<<" << RESET << std::endl;
	Bureaucrat b1("Amadeus", 1);
	std::cout << b1 << std::endl;
	Form * f1;
	try {
		f1 = Intern().makeForm("ShrubberyCreationFrm", "42");
		std::cout << std::endl << *f1 << std::endl << std::endl;
		b1.executeForm(*f1);
		b1.signForm(*f1);
		std::cout << std::endl << *f1 << std::endl << std::endl;
		b1.executeForm(*f1);
		delete f1;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ ShrubberyCreationForm Test 2 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ ShrubberyCreationForm Test 2 ]<<<" << RESET << std::endl;
	Bureaucrat b2("Zeus", 150);
	std::cout << b2 << std::endl;
	Form * f2;
	try {
		f2 = Intern().makeForm("ShrubberyCreationFrm", "42");
		std::cout << std::endl << *f2 << std::endl << std::endl;
		b2.executeForm(*f2);
		b2.signForm(*f2);
		std::cout << std::endl << *f2 << std::endl << std::endl;
		b2.executeForm(*f2);
		delete f2;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ ShrubberyCreationForm Test 3 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ ShrubberyCreationForm Test 3 ]<<<" << RESET << std::endl;
	// Bureaucrat b1("Amadeus", 1);
	std::cout << b1 << std::endl;
	// Form * f1;
	try {
		f1 = Intern().makeForm("ShrubberyCreationForm", "42");
		std::cout << std::endl << *f1 << std::endl << std::endl;
		b1.executeForm(*f1);
		b1.signForm(*f1);
		std::cout << std::endl << *f1 << std::endl << std::endl;
		b1.executeForm(*f1);
		delete f1;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ ShrubberyCreationForm Test 4 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ ShrubberyCreationForm Test 4 ]<<<" << RESET << std::endl;
	// Bureaucrat b2("Zeus", 150);
	std::cout << b2 << std::endl;
	// Form * f2;
	try {
		f2 = Intern().makeForm("ShrubberyCreationForm", "42");
		std::cout << std::endl << *f2 << std::endl << std::endl;
		b2.executeForm(*f2);
		b2.signForm(*f2);
		std::cout << std::endl << *f2 << std::endl << std::endl;
		b2.executeForm(*f2);
		delete f2;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ RobotomyRequestForm Test 1 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ RobotomyRequestForm Test 1 ]<<<" << RESET << std::endl;
	Bureaucrat b3("Hera", 1);
	std::cout << b3 << std::endl;
	Form * f3;
	try {
		f3 = Intern().makeForm("RbotoyReqestForm", "Demeter");
		std::cout << std::endl << *f3 << std::endl << std::endl;
		b3.executeForm(*f3);
		b3.signForm(*f3);
		std::cout << std::endl << *f3 << std::endl << std::endl;
		b3.executeForm(*f3);
		delete f3;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ RobotomyRequestForm Test 2 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ RobotomyRequestForm Test 2 ]<<<" << RESET << std::endl;
	Bureaucrat b4("Poseidon", 150);
	std::cout << b4 << std::endl;
	Form * f4;
	try {
		f4 = Intern().makeForm("RbotoyReqestForm", "Apollon");
		std::cout << std::endl << *f4 << std::endl << std::endl;
		b4.executeForm(*f4);
		b4.signForm(*f4);
		std::cout << std::endl << *f4 << std::endl << std::endl;
		b4.executeForm(*f4);
		delete f4;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ RobotomyRequestForm Test 3 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ RobotomyRequestForm Test 3 ]<<<" << RESET << std::endl;
	std::cout << b3 << std::endl;
	try {
		f3 = Intern().makeForm("RobotomyRequestForm", "Demeter");
		std::cout << std::endl << *f3 << std::endl << std::endl;
		b3.executeForm(*f3);
		b3.signForm(*f3);
		std::cout << std::endl << *f3 << std::endl << std::endl;
		b3.executeForm(*f3);
		delete f3;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ RobotomyRequestForm Test 4 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ RobotomyRequestForm Test 4 ]<<<" << RESET << std::endl;
	std::cout << b4 << std::endl;
	try {
		f4 = Intern().makeForm("RobotomyRequestForm", "Apollon");
		std::cout << std::endl << *f4 << std::endl << std::endl;
		b4.executeForm(*f4);
		b4.signForm(*f4);
		std::cout << std::endl << *f4 << std::endl << std::endl;
		b4.executeForm(*f4);
		delete f4;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ PresidentialPardonForm Test 1 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ PresidentialPardonForm Test 1 ]<<<" << RESET << std::endl;
	Bureaucrat b5("Hades", 1);
	std::cout << b5 << std::endl;
	Form * f5;
	try {
		f5 = Intern().makeForm("Presidential", "Arthemis");
		std::cout << std::endl << *f5 << std::endl << std::endl;
		b5.executeForm(*f5);
		b5.signForm(*f5);
		std::cout << std::endl << *f5 << std::endl << std::endl;
		b5.executeForm(*f5);
		delete f5;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ PresidentialPardonForm Test 2 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ PresidentialPardonForm Test 2 ]<<<" << RESET << std::endl;
	Bureaucrat b6("Hestia", 150);
	std::cout << b6 << std::endl;
	Form * f6;
	try {
		f6 = Intern().makeForm("Pr=ntialPardonForm", "Athena");
		std::cout << std::endl << *f6 << std::endl << std::endl;
		b6.signForm(*f6);
		std::cout << std::endl << *f6 << std::endl << std::endl;
		b6.executeForm(*f6);
		delete f6;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ PresidentialPardonForm Test 3 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ PresidentialPardonForm Test 3 ]<<<" << RESET << std::endl;
	std::cout << b5 << std::endl;
	try {
		f5 = Intern().makeForm("PresidentialPardonForm", "Arthemis");
		std::cout << std::endl << *f5 << std::endl << std::endl;
		b5.executeForm(*f5);
		b5.signForm(*f5);
		std::cout << std::endl << *f5 << std::endl << std::endl;
		b5.executeForm(*f5);
		delete f5;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ PresidentialPardonForm Test 4 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ PresidentialPardonForm Test 4 ]<<<" << RESET << std::endl;
	std::cout << b6 << std::endl;
	try {
		f6 = Intern().makeForm("PresidentialPardonForm", "Athena");
		std::cout << std::endl << *f6 << std::endl << std::endl;
		b6.signForm(*f6);
		std::cout << std::endl << *f6 << std::endl << std::endl;
		b6.executeForm(*f6);
		delete f6;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}