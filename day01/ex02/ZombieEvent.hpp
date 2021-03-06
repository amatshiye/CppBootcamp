/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:17:54 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 18:17:56 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();

        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);

        std::string zombieType;
};

#endif
