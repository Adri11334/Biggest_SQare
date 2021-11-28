/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** criterion redirect
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}