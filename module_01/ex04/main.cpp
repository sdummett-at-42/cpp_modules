/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:35:01 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/12 20:55:11 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

bool	isInString(std::string str, int i, std::string s1) {
	int j = 0;

	while (str[i] != '\0' && s1[j] != '\0') {
		std::cout << str[i] << " | " << s1[j] << std::endl;
		if (str[i] != s1[j])
			return (false);
		i++;
		j++;
	}
	if (s1[j] != '\0')
		return (false);
	return (true);
}

void	replace(std::string& str, int i, std::string s2, int s1Len) {
	
	str.erase(i, s1Len);
	int j = s2.size() - 1;
	while (j >= 0) {
		str.insert(i, 1, s2[j]);
		j--;
	}
}

void	upperrize(char *str) {
	int i = 0;

	while (str[i] != '\0') {
		str[i] = (char)toupper(str[i]);
		i++;
	}
}

int	main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Wrong number of parameters" << std::endl;
		std::cout << "usage: ./replace filename s1 s2" << std::endl;
		return (0);
	}
	
	std::ifstream		ifs(av[1]);
	std::stringstream	strStream;
	std::string			str;
	std::string			s1 = av[2];
	std::string			s2 = av[3];

	if(!ifs) {
        std::cout << "Opening the file " << av[1] << " has failed" << std::endl;
		return (0);
    }
	if (s1.size() == 0 || s2.size() == 0) {
		std::cout << "s1 or s2 mustn't be empty" << std::endl;
		return (0);
	}
	strStream << ifs.rdbuf();
	str = strStream.str();

	int i = 0;
	while (str[i] != '\0') {
		if (isInString(str, i,  s1)) {
			replace(str, i, s2, s1.size());
			i += s1.size() - 1;
		}
		else
			i++;
	}
	std::cout << "Final str => |" << str << "|" << std::endl;
	ifs.close();

	upperrize(av[1]);
	std::string		outfilename = av[1];
	std::ofstream	ofs(outfilename);
	if(!ofs) {
        std::cout << "Opening the file " << outfilename << " has failed" << std::endl;
		return (0);
    }
	ofs << str << std::endl;
	ofs.close();

	// [X] OPEN FILE 
	// [X] PUT IT TO A STRING
	// [X] REPLACE WHAT NEEDS TO BE REPLACED
	// [x] OPEN 2ND FILE
	// [x] AND PUT THE STRING IN IT
	// [X] RETURN AN ERROR IF s1 OR s2 IS EMPTY
	// [X] RETURN AN ERROR IF OPEN THE INPUT FILE HAS FAILED
	// [] MAKE A BUNCH OF TESTS
	return (0);
}
