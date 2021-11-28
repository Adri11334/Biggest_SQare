/*
** EPITECH PROJECT, 2021
** str str
** File description:
** task 05, day 6
*/

#include <stddef.h>

int my_strncmp(char const *s1, char const *s2, int n);

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == to_find[0]
            && my_strncmp(&str[i], to_find, my_strlen(to_find)) == 0)
            return &str[i];
    }
    return NULL;
}
