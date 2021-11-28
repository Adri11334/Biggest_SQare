/*
** EPITECH PROJECT, 2021
** str copy
** File description:
** task 01
*/

int my_strlen (char const *str);

char *my_strncpy (char *dest, char const *src, int n)
{
    int src_length = my_strlen(src);
    int dest_length = my_strlen(dest);

    for (int i = 0; i < src_length; i++) {
        if (i < n) {
            dest[i] = src[i];
        } else {
            dest[i] = '\0';
        }
    }
    dest[src_length] = '\n';
    return dest;
}
