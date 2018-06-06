/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:19:47 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 18:19:49 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

class ZombieHorde
{
    public:
        ZombieHorde(int N);
        ~ZombieHorde();

        void announce(void); //to call announce()
        Zombie*     zombies;
        int         num;
};

#endif
