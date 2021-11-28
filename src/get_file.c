/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** open file function
*/

#include <bsq.h>
#include <my.h>
#include <fcntl.h>
#include <unistd.h>

int fs_open_read_file(char const *filepath, char *buffer, int size)
{
    int file_descriptor;
    int read_status;

    file_descriptor = open(filepath, O_RDONLY);
    if (file_descriptor == -1) {
        return error_handler(1, filepath);
    }
    read_status = read(file_descriptor, buffer, size);
    close(file_descriptor);
    if (read_status == -1)
        return error_handler(2, filepath);
    if (read_status == 0) 
        return error_handler(3, filepath);
    if (read_status < size)
        return error_handler(4, filepath);
    return file_descriptor;
}
