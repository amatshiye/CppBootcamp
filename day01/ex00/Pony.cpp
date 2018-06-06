/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 07:19:59 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 18:14:28 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color, int weight)
{
    std::cout << "A " << color << "Pony weighing " << weight << "kg is born... Yeeey!!!\n";
}

std::string Pony::getColor()
{
    return this->color;
}

int Pony::getWeight()
{
    return this->weight;
}

void Pony::setColor(std::string color)
{
    this->color = color;
}

void Pony::setWeight(int weight)
{
    this->weight = weight;
}

Pony::~Pony()
{
    std::cout << "A Pony dies. Nobody cares really.\n";
}
