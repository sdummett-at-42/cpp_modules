/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:41 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/02 21:01:31 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

Literal::Literal() {}

Literal::Literal(Literal const & src) :
	_toConv(src._toConv) {
	*this = src;
}

Literal::~Literal() {}

Literal & Literal::operator=(Literal const & rhs) {
	(void)rhs;
	return (*this);
}

Literal::Literal(std::string toConv) :
	_toConv(toConv) {}
