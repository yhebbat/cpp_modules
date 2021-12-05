#include "megaphone.hpp"

int main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (std::isupper(av[i][j]))
				std::cout << av[i][j];
			else
				std::cout << (char)std::toupper(av[i][j]);
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
