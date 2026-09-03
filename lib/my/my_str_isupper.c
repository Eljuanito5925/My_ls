/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_str_isupper.c
*/

#include "my.h"

static int is_upper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c == ' ')
        return 1;
    return 0;
}

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_upper(str[i]) != 1)
            return 0;
    }
    return 1;
}
