/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** function to get the map
*/

#include <bsq.h>

int get_map_stats(map_t *map)
{
    char *first_line = malloc(map->file_size + 1);
    int map_fline_i = 0;

    for (; map->file[map_fline_i] != '\n'; map_fline_i++)
        first_line[map_fline_i] = map->file[map_fline_i];
    first_line[map_fline_i] = '\0';
    map->max_y = my_getnbr(first_line);
    free(first_line);
    if (map->max_y <= 0)
        return error_handler(5);
    for (int i = map_fline_i + 1; map->file[i] != '\n'; i++)
        map->max_x++;
    for (int i = 0; i != map_fline_i + 1; i++)
        map->file++;
    map->size = map->max_x * map->max_y;
    map->map = malloc(sizeof(int) * map->size);
    map->file_size -= map_fline_i;
    detect_squares(map);
    free_char_changed(map->file, map_fline_i);
    free(map);
    return 0;
}

int get_map(char const *filepath)
{
    map_t *map = malloc(sizeof(map_t));
    int file_reader;
    int file_descriptor;

    file_descriptor = open(filepath, O_RDONLY);
    file_reader = fs_open_read_file(filepath, file_descriptor, map);
    if (file_reader == 84)
        return 84;
    map->file[map->file_size] = '\0';
    return get_map_stats(map);
}
