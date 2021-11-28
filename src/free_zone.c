/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** free multiple array
*/

#include <stdlib.h>

void free_int_2d(int **array, int line)
{
    for (int i = 0; i < line; i++) {
        free(array[i]);
    }
    free(array);
}

void free_char_2d(char **array, int line)
{
    for (int i = 0; i < line; i++) {
        free(array[i]);
    }
    free(array);
}
