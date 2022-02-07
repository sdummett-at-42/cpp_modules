/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:29:45 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/07 13:54:15 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

class	OccurenceNotFound : public std::exception {
	public:
		char const* what(void) const throw() {
			return "Occurence Not Found";
		}
};

template<typename T>
typename T::iterator	easyfind(T & container, int toFind) {
	typename T::iterator it;

	it = find(container.begin(), container.end(), toFind);
	
	if (it == container.end())
		throw OccurenceNotFound();
	return it;
}

#endif
