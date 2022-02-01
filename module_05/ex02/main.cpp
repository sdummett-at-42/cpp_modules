/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:43:43 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 18:09:41 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main() {

	/* [ TEST ] */
	std::cout << std::endl;
	std::cout << ">>>[ TEST ]<<<" << std::endl;
	Bureaucrat b1("Amadeus", 1);
	std::cout << b1 << std::endl;
	ShrubberyCreationForm f1("42");
	std::cout << f1 << std::endl;
	b1.signForm(f1);
	std::cout << f1 << std::endl;
	b1.executeForm(f1);

	/* [ TEST ] */
	std::cout << std::endl;
	std::cout << ">>>[ TEST ]<<<" << std::endl;
	Bureaucrat b2("Amadeus", 150);
	std::cout << b2 << std::endl;
	ShrubberyCreationForm f2("42");
	std::cout << f2 << std::endl;
	b2.signForm(f2);
	std::cout << f2 << std::endl;
	b2.executeForm(f2);

	return (0);
}