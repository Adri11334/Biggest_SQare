/*
** EPITECH PROJECT, 2021
** str is lower
** File description:
** task 14
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 122 && 97 <= str[i]) {
        } else
            return (0);
    }
    return (1);
}
