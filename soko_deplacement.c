/*
** EPITECH PROJECT, 2019
** deplacement sokoban
** File description:
** sokoban
*/
#include "sokoban.h"

void go_right(param_t *pos)
{
        if (pos->t_map[pos->p_y][pos->p_x +1] != '#') {
        pos->t_map[pos->p_y][pos->p_x] = ' ';
        pos->t_map[pos->p_y][pos->p_x+1] = 'P';
    }
}

void go_left(param_t *pos)
{
        if (pos->t_map[pos->p_y][pos->p_x - 1] != '#') {
        pos->t_map[pos->p_y][pos->p_x] = ' ';
        pos->t_map[pos->p_y][pos->p_x - 1] = 'P';
        }
}

void go_down(param_t *pos)
{
        if (pos->t_map[pos->p_y + 1][pos->p_x] != '#') {
        pos->t_map[pos->p_y][pos->p_x] = ' ';
        pos->t_map[pos->p_y + 1][pos->p_x] = 'P';
        }
}

void go_up(param_t *pos)
{
        if (pos->t_map[pos->p_y - 1][pos->p_x] != '#') {
        pos->t_map[pos->p_y][pos->p_x] = ' ';
        pos->t_map[pos->p_y - 1][pos->p_x] = 'P';
            }
}

void deplacement(param_t *pos)
{
        switch (pos->key)
        {
        case KEY_RIGHT:
            go_right(pos);
            break;
        case KEY_LEFT:
            go_left(pos);
            break;
        case KEY_DOWN:
            go_down(pos);
            break;
        case KEY_UP:
            go_up(pos);
        default:
            break;
        }
}