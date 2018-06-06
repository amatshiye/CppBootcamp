/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:16:02 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 18:16:05 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    std::string     zombie_names[] = {"Eater", "BrainLust", "Devour", "BrainDead"};

    zombies = new Zombie[N];
    num = N;
    for (int x = 0; x < num; x++)
    {
        zombies[x].name = zombie_names[rand() % 4];
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] zombies;
}

void ZombieHorde::announce()
{
    for (int x = 0; x < num; x++)
    {
        zombies[x].announce();
    }
}
