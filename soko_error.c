/*
** EPITECH PROJECT, 2019
** Gestion erreur 
** File description:
** error handing
*/

int error_gest(char *str)
{
    int i = 0;
    for (; str[i] !='\0'; i++) {
        if (str[i] != '#' && str[i] != 'P'&& str[i] != 'O' && str[i] != 'X' &&
        str[i] != ' ' && str[i] != '\n') {
            return (84);
        }
    }
    return (0);
}