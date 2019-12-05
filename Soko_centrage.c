/*
** EPITECH PROJECT, 2019
** init_map
** File description:
** Init_map
*/
#include "sokoban.h"

void init_map(char **av, param_t *pos)
{
    char *op_map = open_file(av[1]);
    pos->t_map = tableau(op_map);
    pos->nb_line = nb_ligne(op_map);
    pos->nb_col = len_ligne(op_map);
    int x = 0;

    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    while (1) {
    clear();
    find_p(pos);
        for (x = 0; x < pos->nb_line ; x++)
            mvprintw(x + ((LINES / 2) - (pos->nb_line/2)) , 
            ((COLS / 2) - (pos->nb_line / 2)), "%s", pos->t_map[x]);
        refresh();
        pos->key = getch();
        if (pos->key == ' ')
            break;
        deplacement(pos);
    }
    endwin();
}