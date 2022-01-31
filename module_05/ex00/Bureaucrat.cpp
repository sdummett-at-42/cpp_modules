/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:35 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/31 16:36:58 by sdummett         ###   ########.fr       */
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
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		GradeTooLowException();
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::upgradeGrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::downgradeGrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}
