/*
** EPITECH PROJECT, 2025
** DAY-04
** File description:
** my_getnbr.c
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

static int signes(char c)
{
    if (c == '-' || c == '+')
        return 1;
    else
        return 0;
}

static int nombres(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

int my_getnbr(char const *str)
{
    long nbr = 0;
    int index = 0;
    int signe = 1;

    while (signes(str[index]) == 1) {
        if (str[index] == '-')
            signe = signe * -1;
        index++;
    }
    while (nombres(str[index]) == 1) {
        nbr = ((nbr * 10) + (str[index] - '0'));
        if (signe == 1 && nbr > 2147483647)
            return 0;
        if (signe == -1 && nbr > 2147483648)
            return 0;
        index++;
    }
    return (int)(nbr * signe);
}
