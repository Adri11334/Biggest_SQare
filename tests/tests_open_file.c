/*
** EPITECH PROJECT, 2021
** BSQ criterion
** File description:
** tests for opening file function
*/

#include <bsq.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void);

Test(test_opening_null, test_opening_null, .init=redirect_all_stdout)
{
    int opening = get_map("fictive_file");

    cr_assert_eq(opening, 84);
}

Test(test_opening_success, test_opening_success, .init=redirect_all_stdout)
{
    int opening = get_map("testfile");

    cr_assert_eq(opening, 0);
}

Test(test_opening_empty, test_opening_empty, .init=redirect_all_stdout)
{
    int opening = get_map("empty_file");

    cr_assert_eq(opening, 84);
}
