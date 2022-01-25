/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:10:58 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/25 21:20:57 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av) {
	Karen	karen;

	if (ac > 1)
		karen.setFilter(av[1]);
	
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("WTF");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return (0);
}
