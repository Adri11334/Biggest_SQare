/*
** EPITECH PROJECT, 2021
** isneg
** File description:
** task04, day 3: display N if negatif, else P for positiv or null
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}
