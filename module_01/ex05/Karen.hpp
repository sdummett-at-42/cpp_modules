/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:11:02 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/25 21:21:11 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class	Karen {
	
	public :
		Karen();
		void	complain(std::string level);

	private :
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void		(Karen::*fp[4])();
		std::string	levelStr[4];
};

#endif
