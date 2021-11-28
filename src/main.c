/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** main file
*/

#include <bsq.h>
#include <my.h>

int display_help(void)
{
    my_putstr("USAGE\n    ./bsq [map path]\nDESCRIPTION\n");
    my_putstr("    This program will print the board, with some '.' replaced");
    my_putstr(" by 'x' to represent the largest square founded.\n");
    return 0;
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return error_handler(6);
    else if (argc > 2)
        return error_handler(7);
    else {
        if (my_strcmp(argv[1], "-h") == 0)
            return display_help();
        else
            return get_map(argv[1]);
    }
}
