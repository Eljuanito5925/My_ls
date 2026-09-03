/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_str_islower.c
*/

#include "my.h"

static int is_low(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c == ' ')
        return 1;
    return 0;
}

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_low(str[i]) != 1)
            return 0;
    }
    return 1;
}
