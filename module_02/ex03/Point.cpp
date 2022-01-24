/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:46:39 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 20:52:45 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :
	_x(0),
	_y(0) {}

Point::Point(const float x, const float y) :
	_x(x),
	_y(y) {}

Point::Point(Point const & src) : 
	_x(src.getxValue()),
	_y(src.getyValue()) {
	*this = src;
}

Point&	Point::operator=(Point const & rhs) {
	(void)rhs;
	return (*this);
}

Point::~Point() {}

Fixed Point::getxFixed() const {
	return (this->_x);
}

Fixed Point::getyFixed() const {
	return (this->_y);
}


float	Point::getxValue() const {
	return (this->_x.toFloat());
}

float	Point::getyValue() const {
	return (this->_y.toFloat());
}
