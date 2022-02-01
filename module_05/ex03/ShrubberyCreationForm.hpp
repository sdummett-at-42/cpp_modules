/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:02:35 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 17:47:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

		virtual void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

#endif
