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

Test(test_empty_map, test_empty_map, .init=redirect_all_stdout)
{
    int opening = get_map("mouli_maps/intermediate_map_34_137_empty");

    cr_assert_eq(opening, 0);
}
