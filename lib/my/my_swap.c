/*
** EPITECH PROJECT, 2021
** my swap
** File description:
** task01 day4: swap content of 2 integers
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
