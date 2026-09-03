/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_strcapitalize.c
*/

#include "my.h"

static int is_alnum(char c)
{
    if (c >= 48 && c <= 57)
        return 1;
    if (c >= 97 && c <= 122)
        return 1;
    if (c >= 65 && c <= 90)
        return 1;
    return 0;
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (is_alnum(str[i - 1]) == 0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}
