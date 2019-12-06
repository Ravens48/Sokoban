/*
** EPITECH PROJECT, 2019
** open
** File description:
** open
*/
#include "sokoban.h"

char *open_file(char *str)
{
    struct stat f_len;
    int size;

    stat(str, &f_len);
    size = f_len.st_size;
    char *buffer = malloc(sizeof(char) * size + 1);
    int fd;

    fd = open(str, O_RDONLY);
    if (fd == -1) {
        exit (84);
    }
    read(fd, buffer, size);
    close(fd);
    buffer[size] = 0;
    return (buffer);
}



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


char **tableau(char *str)
{
    int nb_line = nb_ligne(str);
    int nb_colonne = len_ligne(str);
    int j = 0;
    char **map = malloc(sizeof(char *) * (nb_line + 1));

    for (int i = 0; i < nb_line; i++) {
        map[i] = malloc(sizeof(char) * (nb_colonne + 1));
        for (int y = 0; y < nb_colonne 
        &&str[j] != '\n' && str[j]; j++, y++) {
            map[i][y] = str[j];
        }
        j++;

    }
    return (map);
}

void find_p(param_t *pos)
{

    for (int y = 0; y < pos->nb_line; y++) {
        for (int x = 0; pos->t_map[y][x] != '\n' 
        && pos->t_map[y][x] != '\0'; x++) {
            if (pos->t_map[y][x] ==  'P') {
                pos->p_y = y;
                pos->p_x = x;
            }
        }
    } 
}

int main(int ac, char **av)
{
    param_t *pos = malloc(sizeof(param_t));

    if (ac != 2) {
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
            helper();
            return (0);
    }
    init_map(av, pos);
    return (0);
}