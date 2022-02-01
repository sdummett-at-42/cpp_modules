/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:26:14 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 21:30:28 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

	public:
		Form();
		Form(Form const & src);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~Form();
		Form&	operator=(Form const & rhs);

		void			beSigned(Bureaucrat const & bureaucrat);
		void			tryExecute(Bureaucrat const & executor) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		std::string			getName() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool				getIsSigned() const;

		class	GradeTooHighException : public std::exception {
			public:
				char const* what(void) const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				char const* what(void) const throw();
		};
		class	NotSignedException : public std::exception {
			public:
				char const* what(void) const throw();
		};

	private:
		std::string	const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int	const			_gradeToExecute;
};

std::ostream& operator<<(std::ostream& o, Form const & obj);

#endif
