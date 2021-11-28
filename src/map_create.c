/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** map transformation/creation
*/

#include <bsq.h>

void gen_int_map(map_t *map)
{
    int i = 0;

    for (int s_i = 0; s_i < map->file_size; s_i++) {
        if (map->file[s_i] == '.') {
            map->map[i] = 1;
            i++;
            continue;
        }
        if (map->file[s_i] == 'o') {
            map->map[i] = 0;
            i++;
            continue;
        }
    }
}

void char_to_int_map(map_t *map)
{
    int current_line = 0;
    int current_column = 0;
    int m_i = 0;

    gen_int_map(map);
    for (int index = 0; index < map->file_size; index++){
        if (map->file[index] == '\n') {
            current_column = 0;
            current_line++;
            continue;
        }
        if (current_line != 0 && current_column != 0 && m_i < map->size) {
            map->map[m_i] = switch_case(map->map[m_i], map->map[m_i - 1],
                                        map->map[m_i - map->max_x],
                                        map->map[m_i - map->max_x - 1]);
        }
        m_i++;
        current_column++;
    }
}
