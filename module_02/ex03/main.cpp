/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:34 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/18 20:39:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point, int wtf);

int	main( void ) {

	Point a(5.0f, 2.0f);
	Point b(2.0f, 2.2f);
	Point c(3.0f, 2.0f);
	Point p(2.1f, 2.1f);

	if (Point::bsp(a, b, c , p))
		std::cout << "p is in triangle" << std::endl;
	else
		std::cout << "p isnt in triangle" << std::endl;
	return (0);
}
