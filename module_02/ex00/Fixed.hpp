/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:40:56 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/15 17:09:01 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
public :
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();
	Fixed&	operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private :
	int					_n;
	static const int	_fractionalBits = 8;
};



#endif