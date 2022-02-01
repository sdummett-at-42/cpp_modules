/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:26:16 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 17:32:44 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	_name("AnonymousForm"),
	_isSigned(false),
	_gradeToSign(1),
	_gradeToExecute(1) {}

Form::Form(Form const & src) :
	_name(src._name),
	_isSigned(src._isSigned),
	_gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
	_name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form&	Form::operator=(Form const & rhs) {
	this->_isSigned = rhs._isSigned;
	return (*this);
}

void	Form::beSigned(Bureaucrat const & bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

void	Form::tryExecute(Bureaucrat const & executor) const {
	if (this->_isSigned == true) {
		if (executor.getGrade() <= this->_gradeToExecute)
			return ;
		else
			throw GradeTooLowException();
	}
	throw NotSignedException();
}

Form::~Form() {}

std::ostream& operator<<(std::ostream& o, Form const & obj) {
	o << "Form name          : " << obj.getName() << std::endl;
	o << "Signature status   : ";
	if (obj.getIsSigned() == true)
		o << "Signed" << std::endl;
	else
		o << "Not Signed" << std::endl;
	o << "Grade To Sign      : " << obj.getGradeToSign() << std::endl;
	o << "Grade To Execute   : " << obj.getGradeToExecute() << std::endl;

	return (o);
}

std::string	Form::getName() const {
	return (this->_name);
}

int	Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

bool	Form::getIsSigned() const {
	return (this->_isSigned);
}

char const* Form::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

char const* Form::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

char const* Form::NotSignedException::what() const throw() {
	return "form isn't signed";
}
