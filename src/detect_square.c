/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** detection of square file
*/

#include <bsq.h>

int min_calc(int a, int b, int c)
{
    if (a < b)
        if (c < a)
            return c;
        else
            return a;
    else
        if (c < b)
            return c;
        else
            return b;
}

void get_bsq(map_t *map)
{
    for (int index = 0; index < map->size; index++) {
        if (map->map[index] > map->bsq)
            map->bsq = map->map[index];
    }
}

void detect_squares(map_t *map)
{
    char_to_int_map(map);
    int index_int = 0;

    map_filter(map);
    for (int index = 0; index < map->file_size; index++) {
        if (map->file[index] != '\0' && map->file[index] != '\n') {
            map->file[index] = map->map[index_int];
            index_int++;
        }
    }
    my_putstr(map->file);
}
