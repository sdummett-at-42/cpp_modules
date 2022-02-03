/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:32:41 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/04 00:16:45 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

namespace templates {

	template<typename T>
	T	min(T const & value1, T const & value2) {
		if (value1 < value2)
			return value1;
		return value2;
	}

	template<typename T>
	T	max(T const value1, T const value2) {
		if (value1 > value2)
			return value1;
		return value2;
	}

	template<typename T>
	void	swap(T & value1, T & value2) {
		T tmp = value2;

		value2 = value1;
		value1 = tmp;
	}
}

#endif
