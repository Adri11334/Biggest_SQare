/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** function to get the map
*/

#include <bsq.h>
#include <my.h>
#include <sys/stat.h>
#include <stdlib.h>

int get_map_stats(char *map, int size)
{
    char *first_line = malloc(sizeof(char) * size + 1);
    int **map_array;
    int column = 0;
    int line = 0;
    int map_fline_i = 0;
    int map_start;

    first_line[size] = '\0';
    for (; map[map_fline_i] != '\n'; map_fline_i++)
        first_line[map_fline_i] = map[map_fline_i];
    line = my_getnbr(first_line);
    free(first_line);
    if (line <= 0)
        return error_handler(5);
    for (int i = map_fline_i + 1; map[i] != '\n'; i++)
        column++;
    map_array = malloc(sizeof(int*) * line);
    map_start = map_fline_i + 1;
    create_2d_int_map(map, map_array, line, column, map_start);
    biggest_square(map_array, line, column);
    return 0;
}

int get_map(char const *filepath)
{
    char *buf;
    int file_reader;
    struct stat file_stat;

    stat(filepath, &file_stat);
    buf = malloc(file_stat.st_size + 1);
    file_reader = fs_open_read_file(filepath, buf, file_stat.st_size);
    if (file_reader == 84)
        return 84;
    buf[file_stat.st_size] = '\0';
    return get_map_stats(buf, file_stat.st_size);
}
