/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:34 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/27 17:34:24 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point, int wtf);

int	main( void ) {

	/********** [ First Test ] **********/
	Point a(5.0f, 2.0f);
	Point b(2.0f, 2.2f);
	Point c(3.0f, 2.0f);
	Point p(2.1f, 2.1f);

	std::cout << std::endl;
	std::cout << "[ First Test ]" << std::endl;
	std::cout << "a(" << a.getxValue() << "; " << a.getyValue() << ")" << std::endl;
	std::cout << "b(" << a.getxValue() << "; " << b.getyValue() << ")" << std::endl;
	std::cout << "c(" << c.getxValue() << "; " << c.getyValue() << ")" << std::endl;
	std::cout << "p(" << p.getxValue() << "; " << p.getyValue() << ")" << std::endl;
	if (Point::bsp(a, b, c, p))
		std::cout << ">>> p is in triangle <<<" << std::endl;
	else
		std::cout << ">>> p isn't in triangle <<<" << std::endl;

	/********** [ Second Test ] **********/
	Point a1(42.0f, 21.0f);
	Point b1(-2.0f, -2.2f);
	Point c1(255.0f, -1.0f);
	Point p1(400.1f, -1337.7f);
	
	std::cout << std::endl;
	std::cout << "[ Second Test ]" << std::endl;
	std::cout << "a1(" << a1.getxValue() << "; " << a1.getyValue() << ")" << std::endl;
	std::cout << "b1(" << a1.getxValue() << "; " << b1.getyValue() << ")" << std::endl;
	std::cout << "c1(" << c1.getxValue() << "; " << c1.getyValue() << ")" << std::endl;
	std::cout << "p1(" << p1.getxValue() << "; " << p1.getyValue() << ")" << std::endl;
	if (Point::bsp(a1, b1, c1, p1))
		std::cout << ">>> p1 is in triangle <<<" << std::endl;
	else
		std::cout << ">>> p1 isn't in triangle <<<" << std::endl;

	/********** [ Third Test ] **********/
	Point a2(42.0f, 21.0f);
	Point b2(-2.0f, -2.2f);
	Point c2(255.0f, -1337.7f);
	Point p2(255.0f, -1337.7f);
	
	std::cout << std::endl;
	std::cout << "[ Third Test ]" << std::endl;
	std::cout << "a2(" << a2.getxValue() << "; " << a2.getyValue() << ")" << std::endl;
	std::cout << "b2(" << a2.getxValue() << "; " << b2.getyValue() << ")" << std::endl;
	std::cout << "c2(" << c2.getxValue() << "; " << c2.getyValue() << ")" << std::endl;
	std::cout << "p2(" << p2.getxValue() << "; " << p2.getyValue() << ")" << std::endl;
	if (Point::bsp(a2, b2, c2, p2))
		std::cout << ">>> p2 is in triangle <<<" << std::endl;
	else
		std::cout << ">>> p2 isn't in triangle <<<" << std::endl;

	/********** [ Fourth Test ] **********/
	Point a3(42.0f, 21.0f);
	Point b3(-2.0f, -2.2f);
	Point c3(255.0f, -1337.7f);
	Point p3(254.99f, -1337.6f);
	
	std::cout << std::endl;
	std::cout << "[ Fourth Test ]" << std::endl;
	std::cout << "a3(" << a3.getxValue() << "; " << a3.getyValue() << ")" << std::endl;
	std::cout << "b3(" << a3.getxValue() << "; " << b3.getyValue() << ")" << std::endl;
	std::cout << "c3(" << c3.getxValue() << "; " << c3.getyValue() << ")" << std::endl;
	std::cout << "p3(" << p3.getxValue() << "; " << p3.getyValue() << ")" << std::endl;
	if (Point::bsp(a3, b3, c3, p3))
		std::cout << ">>> p3 is in triangle <<<" << std::endl;
	else
		std::cout << ">>> p3 isn't in triangle <<<" << std::endl;
	return (0);
}
