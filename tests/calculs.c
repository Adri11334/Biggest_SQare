/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** calcule min functions
*/

#include <bsq.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void);

Test(test_min_a, min_a)
{
    cr_assert_eq(min_calc(4, 5, 7), 4);
}

Test(test_min_b, min_b)
{
    cr_assert_eq(min_calc(5, 4, 7), 4);
}

Test(test_min_c, min_c)
{
    cr_assert_eq(min_calc(5, 7, 4), 4);
}
