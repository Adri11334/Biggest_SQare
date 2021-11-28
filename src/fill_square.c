/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** fille new char array with the final map
*/

#include <bsq.h>
#include <my.h>
#include <stdbool.h>
#include <stdlib.h>

int display_bsq(char **map, int row)
{
    for (int i = 0; i < row; i++) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
    free_char_2d(map, row);
    return 0;
}

void replace_bsq(char **map, int line, int col, int bsq)
{
    for (int edit = 0; edit < bsq; edit++) {
        for (int edit_line = 0; edit_line < bsq; edit_line++) {
            map[line - edit_line][col - edit] = 'x';
        }
    }
}

int filter_map(int **map, int row, int col, int bsq)
{
    char **final_map = malloc(sizeof(char*) * row);
    bool already_found = false;

    for (int i = 0; i < row; i++) {
        final_map[i] = malloc(sizeof(char) * col + 1);
        for (int j = 0; j < col; j++) {
            if (map[i][j] == bsq && !already_found){
                replace_bsq(final_map, i, j, bsq);
                already_found = true;
            }
            else if (map[i][j] != 0 && (map[i][j] < bsq || already_found))
                final_map[i][j] = '.';
            else
                final_map[i][j] = 'o';
        }
        final_map[i][col] = '\0';
    }
    free_int_2d(map, row);
    return display_bsq(final_map, row);
}