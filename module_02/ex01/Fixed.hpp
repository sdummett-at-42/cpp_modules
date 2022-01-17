/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:40:56 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/17 18:36:37 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public :
	Fixed(); /* Default constructor */
	Fixed(Fixed const & src); /* Copy constructor */
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	Fixed&	operator=(Fixed const & rhs);
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private :
	int					_n;
	static const int	_fractionalBits = 8;
	float				_ft_pow(float x, float y) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs);


#endif