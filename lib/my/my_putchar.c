/*
** EPITECH PROJECT, 2021
** putchar function
** File description:
** display a char in console
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
