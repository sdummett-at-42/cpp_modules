/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:46:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/18 20:37:16 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
#define POINT_CLASS_HPP

#include "Fixed.hpp"

class Point
{
public :
	Point(); /* Default constructor */
	// Point(Point const & src); /* Copy constructor */
	Point(const float x, const float y); /* Init _x and _y with float's values */
	~Point(); /* Default destructor */

	// Point&	operator=(Point const & rhs);

	Fixed getxFixed() const;
	Fixed getyFixed() const;

	float	getxValue() const;
	float	getyValue() const;
	static bool	bsp( Point const a, Point const b, Point const c, Point const point);

private :
	Fixed const _x;
	Fixed const _y;
};



// A default constructor that initializes x and y to 0.
// ◦ A destructor.
// ◦ A copy constructor.
// ◦ A constructor that takes two constant floating points as parameters and that
// initializes x and y with those values.
// ◦ An assignation operator overload
#endif