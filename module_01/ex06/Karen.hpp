/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:11:02 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/14 14:09:40 by sdummett         ###   ########.fr       */
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
	void	setFilter(std::string filter);

private :
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	int			getLevel(std::string level);
	void		(Karen::*fp[4])();
	std::string	levelStr[4];
	int			_filter;
};

#endif