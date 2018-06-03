#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j] != '\0'; j++)
			{
				if (av[i][j] >= 'a' && 'z' >= av[i][j])
				{
					char c = av[i][j] - 32;
					std::cout << c;
				}
				else
				{
					std::cout << av[i][j];
				}
			}
		}
		std::cout << "\n";
	}

	return (0);
}
