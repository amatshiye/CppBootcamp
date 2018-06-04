/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:07:24 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/04 08:07:56 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	char c;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j] != '\0'; j++)
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					c = av[i][j] - 32;
					std::cout << c;
				}
				else
				{
					std::cout << av[i][j];
				}
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
