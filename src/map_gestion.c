/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** map gestionnaire
*/

#include <bsq.h>

void clean_map(map_t *map, int clean_start)
{
    for (int line = 0; line < map->max_x * map->bsq; line += map->max_x) {
        for (int index = 0; index < map->bsq; index++) {
            map->map[clean_start - index - line] = -4;
        }
    }
    for (int i = 0; i < map->size; i++) {
        if (map->map[i] != 0 && map->map[i] != -4)
            map->map[i] = '.';
        else if (map->map[i] != 0 && map->map[i] == -4)
            map->map[i] = 'x';
        if (map->map[i] == 0)
            map->map[i] = 'o';
    }
}

void map_filter(map_t *map)
{
    get_bsq(map);
    bool already_found = false;

    for (int index = 0; index < map->size; index++) {
        if (map->map[index] == map->bsq && !already_found) {
            clean_map(map, index);
            already_found = true;
        }
    }
}

int switch_case(int block, int previous, int up, int diagonal)
{
    int nb = 1;
    int new_block = block;

    if (block > 0) {
        nb += min_calc(previous, up, diagonal);
        new_block = nb;
    }
    return new_block;
}
