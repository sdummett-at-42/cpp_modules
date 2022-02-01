/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:03:53 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 17:55:17 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
	Form("ShrubberyCreationForm", 145, 137) {
	this->_target = src._target + "_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target + "_shrubbery") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	this->_target = rhs._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	tryExecute(executor);

	std::ofstream	ofs(_target.c_str());
	if (!ofs) {
		std::cout << "Opening the file has failed" << std::endl;
		return ;
	}
	// PUT SHRUBBERIES AS ASCII ART
	ofs << "PUT SHRUBBRIES HERE" << std::endl;
	ofs.close();
}
