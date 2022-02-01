/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:43:43 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 20:08:26 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "colorcodes.h"

int main() {

	/* [ ShrubberyCreationForm Test 1 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ ShrubberyCreationForm Test 1 ]<<<" << RESET << std::endl;
	Bureaucrat b1("Amadeus", 1);
	std::cout << b1 << std::endl;
	ShrubberyCreationForm f1("42");
	std::cout << std::endl << f1 << std::endl << std::endl;
	b1.executeForm(f1);
	b1.signForm(f1);
	std::cout << std::endl << f1 << std::endl << std::endl;
	b1.executeForm(f1);

	/* [ ShrubberyCreationForm Test 2 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ ShrubberyCreationForm Test 2 ]<<<" << RESET << std::endl;
	Bureaucrat b2("Zeus", 150);
	std::cout << b2 << std::endl;
	ShrubberyCreationForm f2("42");
	std::cout << std::endl << f2 << std::endl << std::endl;
	b2.executeForm(f2);
	b2.signForm(f2);
	std::cout << std::endl << f2 << std::endl << std::endl;
	b2.executeForm(f2);

	/* [ RobotomyRequestForm Test 1 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ RobotomyRequestForm Test 1 ]<<<" << RESET << std::endl;
	Bureaucrat b3("Hera", 1);
	std::cout << b3 << std::endl;
	RobotomyRequestForm f3("Demeter");
	std::cout << std::endl << f3 << std::endl << std::endl;
	b3.executeForm(f3);
	b3.signForm(f3);
	std::cout << std::endl << f3 << std::endl << std::endl;
	b3.executeForm(f3);

	/* [ RobotomyRequestForm Test 2 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ RobotomyRequestForm Test 2 ]<<<" << RESET << std::endl;
	Bureaucrat b4("Poseidon", 150);
	std::cout << b4 << std::endl;
	RobotomyRequestForm f4("Apollon");
	std::cout << std::endl << f4 << std::endl << std::endl;
	b4.executeForm(f4);
	b4.signForm(f4);
	std::cout << std::endl << f4 << std::endl << std::endl;
	b4.executeForm(f4);

	/* [ PresidentialPardonForm Test 1 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ PresidentialPardonForm Test 1 ]<<<" << RESET << std::endl;
	Bureaucrat b5("Hades", 1);
	std::cout << b5 << std::endl;
	PresidentialPardonForm f5("Artemis");
	std::cout << std::endl << f5 << std::endl << std::endl;
	b5.executeForm(f5);
	b5.signForm(f5);
	std::cout << std::endl << f5 << std::endl << std::endl;
	b5.executeForm(f5);

	/* [ PresidentialPardonForm Test 2 ] */
	std::cout << std::endl;
	std::cout << BGRN << ">>>[ PresidentialPardonForm Test 2 ]<<<" << RESET << std::endl;
	Bureaucrat b6("Hestia", 150);
	std::cout << b6 << std::endl;
	PresidentialPardonForm f6("Athena");
	std::cout << std::endl << f6 << std::endl << std::endl;
	b6.signForm(f6);
	std::cout << std::endl << f6 << std::endl << std::endl;
	b6.executeForm(f6);

	return (0);
}
