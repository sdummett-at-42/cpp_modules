/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:19:31 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 18:28:14 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
	Form("RobotomyRequestForm", 72, 45) {
	this->_target = src._target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	this->_target = rhs._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	tryExecute(executor);
	srand (time(NULL));

	int randomNumber = rand() % 2;
	std::cout << "VRRRBBBRRRRRVRRRBRRRR !!!" << std::endl;
	if (randomNumber == 0)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomy on " << this->_target << " has failed" << std::endl;
}
