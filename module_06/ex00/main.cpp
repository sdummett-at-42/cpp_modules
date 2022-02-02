/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:34:48 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/02 21:02:02 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

#define	ERROR	-1
#define	CHAR	1
#define INT		2
#define FLOAT	3
#define DOUBLE	4

// To test :
// -inff, +inff, nanf
// -inf, +infm, nan

void	convertChar(char *str) {
	char c = str[0];

	std::cout << "char   : " << static_cast<char>(c) << std::endl;
	std::cout << "int    : " << static_cast<int>(c) << std::endl;
	std::cout << "float  : " << static_cast<float>(c) << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;
}
void	convertInt(char *str) {
	int i = atoi(str);

	std::cout << "char   : " << static_cast<char>(i) << std::endl;
	std::cout << "int    : " << static_cast<int>(i) << std::endl;
	std::cout << "float  : " << static_cast<float>(i) << std::endl;
	std::cout << "double : " << static_cast<double>(i) << std::endl;
}
void	convertFloat(char *str) {
	float f = atof(str);

	std::cout << "char   : " << static_cast<char>(f) << std::endl;
	std::cout << "int    : " << static_cast<int>(f) << std::endl;
	std::cout << "float  : " << static_cast<float>(f) << std::endl;
	std::cout << "double : " << static_cast<double>(f) << std::endl;
}
void	convertDouble(char *str) {
	double d = atof(str);

	std::cout << "char   : " << static_cast<char>(d) << std::endl;
	std::cout << "int    : " << static_cast<int>(d) << std::endl;
	std::cout << "float  : " << static_cast<float>(d) << std::endl;
	std::cout << "double : " << static_cast<double>(d) << std::endl;
}

int		getType(char *str) {
	if (strlen (str) == 1 && (str[0] >= '0' && str[0] <= '9'))
		return (INT);

	int i = 0;
	
	while (str[i] != '\0') {

		// std::cout << str[i];
		i++;
	}
	return -1;
}

void	displayLiteral(char *str) {
	int	type = getType(str);
	
	if (type == CHAR) {
		convertChar(str);
	}
	else if (type == INT) {
		convertInt(str);
	}
	else if (type == FLOAT) {
		convertFloat(str);
	}
	else if (type == DOUBLE) {
		convertDouble(str);
	}
	else if (type == ERROR) {
		std::cout << "[ Type conversion impossible ]" << std::endl;
	}
}


int main(int ac, char **av) {
	(void)ac;
	(void)av;

	if (ac != 2) {
			std::cout << "Usage: ./convert literal" << std::endl;
			std::cout << "Literal can be a char, a int, a float or a double" << std::endl;
			return (0);
	}
	displayLiteral(av[1]);
	return 0;
}
