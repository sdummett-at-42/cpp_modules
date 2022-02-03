/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:34:48 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/03 14:12:46 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

bool	is_num(char *argv) {
	int i = 0;

	while (argv[i])
		i++;
	if (argv[--i] == 'f')
		argv[i] = '\0';
	i = 0;
	while (argv[i])
	{
		if ((argv[i] > '9' || argv[i] < '0') && argv[i] != '.')
			return false;
		i++;
	}
	return true;
}

void	setValues(char & c, int & i, float & f, double & d, char *str) {
	
	if (str[0] && !str[1]) {
		c = static_cast<char>(str[0]);
		i = static_cast<int>(str[0]);
		f = static_cast<float>(str[0]);
		d = static_cast<double>(str[0]);
	}
	else {
		c = static_cast<char>(std::atoi(str));
		i = static_cast<int>(std::atoi(str));
		f = static_cast<float>(std::atof(str));
		d = static_cast<double>(std::atof(str));
	} 
}

void	displayValues(char *str) {

	char	c;
	int		i;
	float	f;
	double	d;

	setValues(c, i, f, d, str);

	std::cout << "char   : ";
	if ((c == 0) && (str[0] != '0'))
		std::cout << "impossible" << std::endl;
	else if (!(std::isprint(c)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;

	std::cout << "int    : ";
	if ((c == 0) && (str[0] != '0'))
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;

	std::cout << "float  : ";
	if ((f == 0) && (str[0] != '0'))
		std::cout << "impossible" << std::endl;
	else
		std::cout << f << "f" << std::endl;

	std::cout << "double : ";
	if ((d == 0) && (str[0] != '0'))
		std::cout << "impossible" << std::endl;
	else
		std::cout << d << std::endl;
		
}

int main(int ac, char **av) {

	if (ac != 2) {
			std::cout << "Usage: ./convert literal" << std::endl;
			std::cout << "Literal can be a char, a int, a float or a double" << std::endl;
			return (0);
	}
	displayValues(av[1]);
	return 0;
}
