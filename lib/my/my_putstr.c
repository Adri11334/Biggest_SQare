/*
** EPITECH PROJECT, 2021
** put str
** File description:
** task02 day4: display one-by-one the characters of a string
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    write(1, str, i);
    return (0);
}
