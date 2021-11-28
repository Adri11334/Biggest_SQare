/*
** EPITECH PROJECT, 2021
** BSQ criterion
** File description:
** tests for maps file function
*/

#include <bsq.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void);

Test(errro2, errro2)
{
    cr_assert_eq(error_handler(2), 84);
}

Test(errro4, errro4)
{
    cr_assert_eq(error_handler(4), 84);
}

Test(errro5, errro5)
{
    cr_assert_eq(error_handler(5), 84);
}

Test(errro6, errro6)
{
    cr_assert_eq(error_handler(6), 84);
}

Test(errro7, errro7)
{
    cr_assert_eq(error_handler(7), 84);
}

Test(errro_unknow, errro_unknow)
{
    cr_assert_eq(error_handler(100), 84);
}
