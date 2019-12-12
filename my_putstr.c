/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** coucou
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i;

    for (i = 0 ; str[i] != 0; i++)
    {
        my_putchar(str[i]);
    }
    return (0);
}