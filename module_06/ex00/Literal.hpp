/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:21:46 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/02 17:35:11 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
#define LITERAL_HPP

#include <string>
#include <iostream>

class	Literal {

	public:
		Literal();
		Literal(Literal const & src);
		~Literal();
		Literal & operator=(Literal const & rhs);

		Literal(std::string toConv);

		void	displayLiterals() const;

	private:
		void				_displayChar() const;
		void				_displayInt() const ;
		void				_displayFloat() const ;
		void				_displayDouble() const;
		std::string	const	_toConv;
};

#endif
