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

/* Test(check_errror_1, check_errror_1)
{
    cr_assert_eq(error_handler(1), 84);
}

Test(check_errror_2, check_errror_2)
{
    cr_assert_eq(error_handler(2), 84);
}

Test(check_errror_3, check_errror_3)
{
    cr_assert_eq(error_handler(3), 84);
}

Test(check_errror_4, check_errror_4)
{
    cr_assert_eq(error_handler(4), 84);
} */

Test(errror5, errror5)
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
