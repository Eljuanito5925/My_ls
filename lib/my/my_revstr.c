/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_revstr.c
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char *my_revstr(char *str)
{
    char tmp;
    int index = 0;
    int len = my_strlen(str) - 1;

    while (index < len) {
        tmp = str[index];
        str[index] = str[len];
        str[len] = tmp;
        index++;
        len--;
    }
    return str;
}
