/*
** EPITECH PROJECT, 2025
** DAY-05
** File description:
** my_compute_power_rec.c
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    result = nb * my_compute_power_rec(nb, (p - 1));
    return result;
}
