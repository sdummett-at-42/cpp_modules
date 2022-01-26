/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/26 16:17:11 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class	Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		upgradeGrade();
		void		downgradeGrade();
		
	private:
		std::string const	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const & obj);

#endif
