/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** error handling file
*/

#include <bsq.h>

int error_handler_3(va_list list, int type)
{
    if (type == 6) {
        my_putstr("You didn't provide enought args, ./bsq -h\n");
        return 84;
    }
    if (type == 7) {
        my_putstr("You provide too much args, ./bsq -h\n");
        return 84;
    }
    my_putstr("Unknow error, ./bsq -h\n");
    va_end(list);
    return 84;
}

int error_handler_2(va_list list, int type)
{
    if (type == 3) {
        my_putstr("Nothing to read in '");
        my_putstr(va_arg(list, char*));
        my_putstr("' , ./bsq -h\n");
        return 84;
    }
    if (type == 4) {
        my_putstr("Read of '");
        my_putstr(va_arg(list, char*));
        my_putstr("' didn't complete the entire buffer, ./bsq -h\n");
        return 84;
    }
    if (type == 5) {
        my_putstr("First line of your file is invalid, ./bsq -h\n");
        return 84;
    }
    return error_handler_3(list, type);
}

int error_handler(int type, ...)
{
    va_list list;

    va_start(list, type);
    if (type == 1) {
        my_putstr("File '");
        my_putstr(va_arg(list, char*));
        my_putstr("' not found, ./bsq -h\n");
        return 84;
    }
    if (type == 2) {
        my_putstr("Failed to read '");
        my_putstr(va_arg(list, char*));
        my_putstr("', ./bsq -h\n");
        return 84;
    }
    return error_handler_2(list, type);
}
