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

Test(test_opening_null, test_opening_null)
{
    int opening = get_map("fictive_file");

    cr_assert_eq(opening, 84);
}
