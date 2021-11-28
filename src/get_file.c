/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** open file function
*/

#include <bsq.h>

int fs_open_read_file(char const *filepath, int fd, map_t *map)
{
    struct stat file_stat;
    int read_status;

    if (fd == -1)
        return error_handler(1, filepath);
    stat(filepath, &file_stat);
    map->file_size = file_stat.st_size;
    map->file = malloc(file_stat.st_size + 1);
    read_status = read(fd, map->file, map->file_size);
    close(fd);
    if (read_status == -1)
        return error_handler(2, filepath);
    if (read_status == 0)
        return error_handler(3, filepath);
    if (read_status < map->file_size)
        return error_handler(4, filepath);
    return fd;
}
