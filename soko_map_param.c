/*
** EPITECH PROJECT, 2019
** map params
** File description:
** ma params
*/

#include "sokoban.h"

int len_ligne(char *str)
{
    int i = 0;
    int c = 0;
    int tmp = 0;

    for (; str[i] != '\0'; i++) {
        for(; str[i] != '\n' && str[i] != '\0'; tmp++, i++) {
        }
        if (tmp > c)
            c = tmp;
        tmp = 0;
    }
    return (c);
}

int nb_ligne(char *str)
{
    int i = 0;
    int c = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            c++;
    }
    return (c + 1);
}