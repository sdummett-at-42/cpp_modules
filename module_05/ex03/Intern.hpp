/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:16:20 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 21:13:34 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <exception>

class Intern {

	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);

		Form *	makeForm(std::string formName, std::string target);
		
		class	FormDontExist : public std::exception {
			public:
				char const* what(void) const throw();
		};

	private:
		std::string	knownForm[3];
		Form	*createShrubberyCreationForm(std::string target) const;
		Form	*createPresidentialPardonForm(std::string target) const;
		Form	*createRobotomyRequestForm(std::string target) const ;
		Form	*(Intern::*forms[3])(std::string target) const;
};
