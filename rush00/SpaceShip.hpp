/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceShip.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:52:18 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 11:52:20 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPACESHIP__
#define __SPACESHIP__
#include "RetroGame.hpp"

class SpaceShip : public RetroGame
{
    private:

    public:
        SpaceShip(void);
        SpaceShip(SpaceShip const & src);
        ~SpaceShip(void);

        SpaceShip & operator=(SpaceShip const & rhs);
        void moveShip(int y, int x);
};

#endif