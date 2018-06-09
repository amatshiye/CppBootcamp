/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 07:07:25 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 07:07:26 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <unistd.h>

int main()
{
    int x, y;
    initscr();
    getmaxyx(stdscr, y, x);
    curs_set(0);

    y = y / 2; //putting char in the middle
    keypad(stdscr, true);
    mvwprintw(stdscr, y, 5, "X=X>");    
    while (true)
    {
        int c = wgetch(stdscr);
        if (c == 'a' || c == 'A')
        {
            for (int i = 4; i < x; i++)
            {
                refresh();
                usleep(300);
                clear();
                mvprintw(y, i, "*");
                mvwprintw(stdscr, y, 5, "X=X>");
                
                if (c == KEY_UP)
                {
                    y--;
                    clear();
                    mvwprintw(stdscr, y, 5, "X=X>");
                    refresh();            
                }
                else if (c == KEY_DOWN)
                {
                    y++;
                    clear();
                    mvwprintw(stdscr, y, 5, "X=X>");
                    refresh();
                }
            }
        }
        if (c == KEY_UP)
        {
            y--;
            clear();
            mvwprintw(stdscr, y, 5, "X=X>");
            refresh();            
        }
        else if (c == KEY_DOWN)
        {
            y++;
            clear();
            mvwprintw(stdscr, y, 5, "X=X>");
            refresh();
        }
        else
        {
            clear();
            mvwprintw(stdscr, y, 5, "X=X>");
            refresh();
        }
        refresh();
    }
    // for (int i = (x - 10); i > 0; i--)
    // {
    //     usleep(30000);
    //     clear();
    //     mvprintw(y/2, i, "Hello World");
    //     refresh();
    // }

    getch();
    endwin();
    return (0);
}