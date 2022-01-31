/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/31 16:35:30 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

// struct MyException : public std::exception {

// 	public:
// 		const char * what () const throw () {
//     		return "C++ Exception";
// 		}
// };

class	Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat();

		Bureaucrat(std::string name, int grade);

		std::string				getName() const;
		int						getGrade() const;
		void					upgradeGrade();
		void					downgradeGrade();

		struct	GradeTooHighException : public std::exception {
			public:
				const char * what () const throw () {
					return "-> Grade Too High <-";
				}
		};

		struct	GradeTooLowException : public std::exception {
			public:
				const char * what () const throw () {
					return "-> Grade Too Low <-";
				}
		};
	private:
		std::string const		_name;
		int						_grade;
};


std::ostream& operator<<(std::ostream& os, Bureaucrat const & obj);


#endif
