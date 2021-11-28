/*
** EPITECH PROJECT, 2021
** str cmp
** File description:
** task06
*/

int my_strcmp(const char *s1, const char *s2)
{
    int index = 0;

    while (s1[index] != '\0' || s2[index] != '\0') {
        if (s1[index] > s2[index]) {
            return 1;
        }
        if (s1[index] < s2[index]) {
            return -1;
        }
        index++;
    }
    return 0;
}
