/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:35 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 17:42:18 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
	_name("AnonymousBureaucrat"),
	_grade(150) {
	// std::cout << "[ Default Constructor Called (Bureaucrat) ]" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	// std::cout << "[ Copy Constructor Called (Bureaucrat) ]" << std::endl;
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "[ Default Destructor Called (Bureaucrat) ]" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name),
	_grade(grade) {
	// std::cout << "[ Parameterized (string, int) Constructor Called (Bureaucrat) ]" 
	//	<< std::endl;
	if (grade < 1) {
		this->_grade = 1;
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		this->_grade = 150;
		throw GradeTooLowException();
	}
}

void	Bureaucrat::signForm(Form & f) const {
	try {
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << this->_name << " couldn't sign ";
		std::cerr << f.getName();
		std::cerr << " because bureaucrat " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form) const {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & obj) {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (o);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::upgrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::downgrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

char const* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("bureaucrat grade is too high");
}

char const* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("bureaucrat grade is too high");
}
