/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** detection of square file
*/

#include <bsq.h>
#include <my.h>
#include <stdlib.h>

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

int biggest_square(int **map, int row, int col)
{
    int **cache = mem_dup_2d_array(map, row, col);
    int result = 0;
    int min;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (i == 0 || j == 0)
                continue;
            if (map[i][j] > 0) {
                min = min_calc(cache[i][j - 1],
                                cache[i - 1][j],
                                cache[i - 1][j - 1]);
                cache[i][j] = 1 + min;
            }
            if (cache[i][j] > result)
                result = cache[i][j];
        }
    }
    free_int_2d(map, row);
    return filter_map(cache, row, col, result);
}
