/*
** EPITECH PROJECT, 2021
** str is alpha
** File description:
** task 12
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] <= 122 && 97 <= str[i])
        || (str[i] <= 90 && 65 <= str[i])) {
        } else
            return (0);
    }
    return (1);
}
