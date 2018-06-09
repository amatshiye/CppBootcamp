/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RetroGame.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:18:07 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 11:18:10 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RetroGame.hpp"

RetroGame::RetroGame(void) : start_y(5), start_x(5)
{
    initscr();
    curs_set(0);
    getmaxyx(stdscr,y_Max, x_Max);

    height = y_Max - 10;
    width = x_Max -10;

    //main window
    refresh();
    win = newwin(height, width, start_y, start_x);
    box(win, 0, '*');
    wrefresh(win);

    //scoreboard window
    refresh();
    scoreboard = newwin(height, width - 50, start_y, start_x - 10);
    box(scoreboard, 0, 0);    
    wrefresh(scoreboard);
    keypad(win, true);
}

RetroGame::~RetroGame()
{
    getch();
    endwin();
}

int RetroGame::getyMax() { return this->y_Max; }

int RetroGame::getxMax() { return this->x_Max; }