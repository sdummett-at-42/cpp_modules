#include <iostream>
#include <cstring>


int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	len;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			len = std::strlen(av[i]);
			while (j < len)
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	return (0);
}
