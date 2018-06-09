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

    height = y_Max - y_Max * 0.1;
    width = x_Max - x_Max * 0.05;

    //main window
    refresh();
    win = newwin(height, width, start_y, start_x);
    box(win, 0, '*');
    wrefresh(win);
    keypad(win, true);
}

RetroGame::~RetroGame()
{
    getch();
    endwin();
}

int RetroGame::getyMax() { return this->y_Max; }

int RetroGame::getxMax() { return this->x_Max; }

int RetroGame::getHeight() { return this->height; }

int RetroGame::getWidth() { return this->width; }

WINDOW * RetroGame::getWindow() { return this->win; }