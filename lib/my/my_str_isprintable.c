/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_str_isprintable.c
*/

#include "my.h"

int is_printable_char(char c)
{
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_printable_char(str[i]) != 1)
            return 0;
    }
    return 1;
}
