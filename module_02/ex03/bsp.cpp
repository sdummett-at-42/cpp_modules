/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:46:41 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/18 20:39:33 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	getMin(float a, float b, float c) {
	if (a < b && a < c)
	{
		return (a);
	}
	else if (b < a && b < c)
	{
		return (b);
	}
	return (c);
}

float	getMax(float a, float b, float c) {

	if (a > b && a > c)
	{
		return (a);
	}
	else if (b > a && b > c)
	{
		return (b);
	}
	return (c);
}

bool	Point::bsp( Point const a, Point const b, Point const c, Point const point) {
	float	xMin = getMin(a.getxValue(), b.getxValue(), c.getxValue());
	float	xMax = getMax(a.getxValue(), b.getxValue(), c.getxValue());
	float	yMin = getMin(a.getyValue(), b.getyValue(), c.getyValue());
	float	yMax = getMax(a.getyValue(), b.getyValue(), c.getyValue());
	float	xPoint = point.getxValue();
	float	yPoint = point.getyValue();

	if ((xPoint > xMin && xPoint < xMax) && (yPoint > yMin && yPoint < yMax))
		return (true);
	return (false);
}
