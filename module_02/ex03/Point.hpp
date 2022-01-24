/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:46:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 20:40:36 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
#define POINT_CLASS_HPP

#include "Fixed.hpp"

class Point
{
	public :
		Point();
		Point(const float x, const float y);
		Point(Point const & src);
		Point&	operator=(Point const & rhs);
		~Point();

		Fixed getxFixed() const;
		Fixed getyFixed() const;

		float	getxValue() const;
		float	getyValue() const;
		static bool	bsp( Point const a, Point const b, Point const c, Point const point);

	private :
		Fixed const _x;
		Fixed const _y;
};

#endif
