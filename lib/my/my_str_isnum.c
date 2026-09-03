/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_str_isnum.c
*/

#include "my.h"

static int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    if (c == ' ')
        return 1;
    return 0;
}

int my_str_isnum(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (index == 0 && str[index] == '-')
            index += 1;
        if (is_digit(str[index]) != 1)
            return 0;
        index++;
    }
    return 1;
}
