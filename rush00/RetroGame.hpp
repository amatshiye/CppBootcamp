/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RetroGame.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:17:45 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 11:17:48 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RETROGAME__HPP
#define __RETROGAME__HPP

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
#include <string>

class RetroGame
{
    private:
        int y_Max; //window y max size
        int x_Max; //window x max size
        int height;
        int width;
        int start_y;
        int start_x;
        WINDOW * win;
    
    public:
        RetroGame(void);
        RetroGame(RetroGame const & src);
        ~RetroGame(void);

        RetroGame & operator=(RetroGame const & rhs);
        
        //getters
        int getyMax();
        int getxMax();
        int getHeight();
        int getWidth();
        WINDOW * getWindow();
};

#endif