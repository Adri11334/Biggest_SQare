/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** fill array file
*/

#include <bsq.h>
#include <sys/stat.h>
#include <stdlib.h>

void create_2d_int_map(char *t_buf, int **buf, int rows, int cols, int sp)
{
    int index_buffer = sp;

    for (int i = 0; i < rows; ++i) {
        buf[i] = malloc((sizeof(int) * cols));
        for (int j = 0; j < cols; ++j) {
            if(t_buf[index_buffer] == '.')
                buf[i][j] = 1;
            else
                buf[i][j] = 0;
            index_buffer++;
        }
        index_buffer++;
    }
    free(t_buf);
}

int **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    int **array = malloc(sizeof(int*) * nb_rows);

    for(int i = 0; i < nb_rows; i++) {
        array[i] = malloc(sizeof(int) * nb_cols);
    }
    return array;
}

int **mem_dup_2d_array(int **arr, int nb_rows, int nb_cols)
{
    int **dup_arr = mem_alloc_2d_array(nb_rows, nb_cols);

    for(int i = 0; i < nb_rows; i++) {
        for(int j = 0; j < nb_cols; j++) {
            dup_arr[i][j] = arr[i][j];
        }
    }
    return dup_arr;
}
