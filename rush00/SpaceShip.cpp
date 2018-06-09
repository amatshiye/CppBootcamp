/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceShip.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:52:07 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 11:52:08 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SpaceShip.hpp"

SpaceShip::SpaceShip(void)
{
    //init spaceship
    clear();
    mvwprintw(this->getWindow(), this->getyMax(), this->getxMax(), "X=X>");
    refresh();
    return;
}

SpaceShip::~SpaceShip(void)
{
    return;
}

void SpaceShip::showShip()
{
    // mvwprintw();
}