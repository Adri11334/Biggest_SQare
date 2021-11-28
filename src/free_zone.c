/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** free multiple array
*/

#include <bsq.h>

void *my_malloc(int size, char *buf)
{
    char *str = malloc(size);
    int buf_len = -1;

    if (buf != NULL)
        buf_len = my_strlen(buf);
    for (int i = 0; i < size; i++) {
        if (i < buf_len)
            str[i] = buf[i];
        else
            str[i] = 0;
    }
    return str;
}

void free_char_changed(char *array, int decal)
{
    for (int i = 0; i != decal + 1; i++) {
        array--;
    }
    free(array);
}
