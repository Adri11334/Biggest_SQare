/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** main include file
*/

#ifndef BSQ_H_

    #define BSQ_H_
    #include <my.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <stdbool.h>

    typedef struct map_s {
        char *file;
        int file_size;
        int *map;
        int size;
        int max_x;
        int max_y;
        int bsq;
    } map_t;

    void *my_malloc(int size, char *buf);

    int display_help(void);
    int error_handler(int type, ...);

    int get_map(char const *filepath);
    int fs_open_read_file(char const *filepath, int fd, map_t *map);
    int get_map_stats(map_t *map);

    void detect_squares(map_t *map);
    void char_to_int_map(map_t *map);
    void gen_int_map(map_t *map);
    int switch_case(int block, int previous, int up, int diagonal);
    int min_calc(int a, int b, int c);

    void map_filter(map_t *map);
    void get_bsq(map_t *map);
    void clean_map(map_t *map, int clean_start);

    void free_char_changed(char *array, int decal);
#endif/* !BSQ_H_ */
