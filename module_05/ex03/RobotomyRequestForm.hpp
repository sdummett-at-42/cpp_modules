/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:19:01 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/01 17:55:55 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);

		virtual void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

#endif
