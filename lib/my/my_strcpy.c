/*
** EPITECH PROJECT, 2021
** str copy
** File description:
** task 01
*/

int my_strlen (char const *str);

char *my_strcpy (char *dest, char const *src)
{
    int src_length = my_strlen(src);

    for (int i = 0; i < src_length; i++) {
        dest[i] = src[i];
    }
    dest[src_length] = '\n';
    return dest;
}
