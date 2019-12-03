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

}param_t;

char *open_file(char *str);
int len_ligne(char *str);
int nb_ligne(char *str);
char **tableau(char *str);
void init_map(int ac, char **av);
