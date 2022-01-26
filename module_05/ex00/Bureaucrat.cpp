/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:35 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/26 16:18:47 by sdummett         ###   ########.fr       */
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
	
}

void	Bureaucrat::downgradeGrade() {

}
