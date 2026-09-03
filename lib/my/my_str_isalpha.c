/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_str_isalpha.c
*/

#include "my.h"

static int my_is_alphabet(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c == ' ')
        return 1;
    return 0;
}

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_is_alphabet(str[i]) != 1)
            return 0;
    }
    return 1;
}
