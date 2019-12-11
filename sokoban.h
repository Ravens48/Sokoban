/*
** EPITECH PROJECT, 2019
** Sokoban .h
** File description:
** soko .h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct param_s
{
    int nb_line;
    int nb_col;
    int p_x;
    int p_y;
    char **t_map;
    int key;

}param_t;

char *open_file(char *str);
int len_ligne(char *str);
int nb_ligne(char *str);
char **tableau(char *str);
int init_map(char **av, param_t *pos);
void go_right(param_t *pos);
void go_left(param_t *pos);
void go_down(param_t *pos);
void go_up(param_t *pos);
void find_p(param_t *pos);
void deplacement(param_t *pos);
int error_gest(char *str);
void reset_map(char **av, param_t *pos);
void my_putchar(char c);
void helper(void);
int my_putstr(char const *str);
