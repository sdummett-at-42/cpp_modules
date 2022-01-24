/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:40:56 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/24 20:08:58 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

#endif
