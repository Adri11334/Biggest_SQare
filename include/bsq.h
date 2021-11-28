/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** main include file
*/

#ifndef BSQ_H_

    #define BSQ_H_
    int error_handler(int type, ...);
    int fs_open_read_file(char const *filepath, char *buffer, int size);
    int get_map(char const *filepath);
    void create_2d_map(char *map, int size, char **buf, int rows, int cols);
    int biggest_square(int **map, int row, int col);
    int **mem_dup_2d_array(int **arr, int nb_rows, int nb_cols);
    void create_2d_int_map(char *t_buf, int **buf, int rows,
                            int cols, int start_point);
    int filter_map(int **map, int row, int col, int bsq);
    void free_char_2d(char **array, int line);
    void free_int_2d(int **array, int line);
#endif /* !BSQ_H_ */
