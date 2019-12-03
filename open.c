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
    for (; str[i] != '\n'; i++) {
        c++;
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
    //int k = 0;
    char **map = malloc(sizeof(char *) * (nb_line + 1));

    for (int i = 0; i < nb_line; i++) {
        map[i] = malloc(sizeof(char) * (nb_colonne + 1));
        for (int y = 0; y < nb_colonne &&str[j] != '\n' && str[j]; j++, y++) {
            map[i][y] = str[j];
        }
        j++;
        //printf("TAB[%d][%d]\n", i, nb_colonne);
        //map->m_tableau[i][nb_colonne] = '\n';
        //map[i][nb_colonne - 2] = '\0';
    }
   // map[nb_line] == NULL;
    //printf("%d/n, %d\n", nb_line, nb_colonne);
    //for(;map[k]; k++) {
    //   printf("%s",map[k]);
   // }
    return (map);
}

int main(int ac, char **av)
{
    
    //map_t *map = NULL;

    if (ac != 2) {
        return (84);
    }
    init_map(ac, av);
    return (0);

    // doner une variable pour le tableau
}