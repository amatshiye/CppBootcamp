/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:16:48 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 18:16:51 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "A Zombie is born. Yey\n";
}

Zombie::~Zombie()
{
    std::cout << "..A Zombie died\n";
}

void Zombie::announce()
{
    std::cout << name << " " << type << " Braiiiiiiiiiiinnnnnns\n";
}
