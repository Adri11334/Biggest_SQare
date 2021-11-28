/*
** EPITECH PROJECT, 2021
** is printable
** File description:
** str cat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int index_dest;
    int index_src;

    if (my_strlen(src) == 0)
        return (dest);
    while (dest[index_dest] != '\0') {
        index_dest++;
    }
    while (nb > 0) {
        nb--;
        dest[index_dest] = src[index_src];
        index_dest++;
        index_src++;
    }
    return (dest);
}
