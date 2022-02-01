/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:16:25 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 21:50:29 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	this->knownForm[0] = "PresidentialPardonForm";
	this->knownForm[1] = "ShrubberyCreationForm";
	this->knownForm[2] = "RobotomyRequestForm";
	this->forms[0] = &Intern::createPresidentialPardonForm;
	this->forms[1] = &Intern::createShrubberyCreationForm;
	this->forms[2] = &Intern::createRobotomyRequestForm;
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & rhs) {
	this->knownForm[0] = rhs.knownForm[0];
	this->knownForm[1] = rhs.knownForm[1];
	this->knownForm[2] = rhs.knownForm[2];
	return (*this);
}

Form *	Intern::makeForm(std::string formName, std::string target) {
	for (int i = 0; i < 3; i++) {
		if (formName == this->knownForm[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*forms[i])(target);
		}
	}
	throw FormDontExist();
	return (NULL);
}

Form *	Intern::createShrubberyCreationForm(std::string target) const {
	return (new ShrubberyCreationForm(target));
}

Form *	Intern::createPresidentialPardonForm(std::string target) const {
	return (new PresidentialPardonForm(target));
}

Form *	Intern::createRobotomyRequestForm(std::string target) const  {
	return (new RobotomyRequestForm(target));
}

char const* Intern::FormDontExist::what() const throw() {
	return "Intern can't create a form that doesn't exist";
}
