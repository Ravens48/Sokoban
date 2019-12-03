/*
** EPITECH PROJECT, 2019
** init_map
** File description:
** Init_map
*/
#include "sokoban.h"

void init_map(int ac, char **av)
{
    char *op_map = open_file(av[1]);
    char **t_map = tableau(op_map);
    int size = nb_ligne(op_map);
    int x = 0;

    //for (int i = 0; t_map[i]; i++)
    //    printf("!%s/n!", t_map[i]);
    //    printf("\n%d, %d\n", LINES, COLS);

    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    clear();
    while (1) {
        for (x = 0; x < size ; x++)
            mvprintw(x, 0, "%s", t_map[x]);
        refresh();
        if (getch() == ' ')
            break;
    }
    endwin();
}