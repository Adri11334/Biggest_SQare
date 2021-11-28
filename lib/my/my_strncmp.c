/*
** EPITECH PROJECT, 2021
** str n cmp
** File description:
** task07
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int index = 0;

    while ((s1[index] != '\0' || s2[index] != '\0') && index < n) {
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
