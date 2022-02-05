/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:35 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/05 13:41:55 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
	_name("AnonymousBureaucrat"),
	_grade(150) {
	std::cout << "[ Default Constructor Called (Bureaucrat) ]" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	std::cout << "[ Copy Constructor Called (Bureaucrat) ]" << std::endl;
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[ Default Destructor Called (Bureaucrat) ]" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name),
	_grade(grade) {
	std::cout << "[ Parameterized (string, int) Constructor Called (Bureaucrat) ]" \
		<< std::endl;
	if (grade < 1) {
		this->_grade = 1;
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		this->_grade = 150;
		throw GradeTooLowException();
	}
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & obj) {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (o);
}
std::string	Bureaucrat::getName() const {
	return (this->_name);
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
	return ("Grade Is Too High");
}

char const* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Grade Is Too Low");
}
