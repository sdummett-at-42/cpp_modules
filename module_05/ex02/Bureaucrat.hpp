/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 17:38:21 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class	Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat();

		Bureaucrat(std::string name, int grade);

		void	signForm(Form & f) const;
		void	executeForm(Form const & form) const;

		std::string				getName() const;
		int						getGrade() const;
		void					upgrade();
		void					downgrade();

		class GradeTooHighException: public std::exception {
			public:
				char const* what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				char const* what(void) const throw();
		};

	private:
		std::string const		_name;
		int						_grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const & obj);

#endif
