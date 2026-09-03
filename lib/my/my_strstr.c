/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_strstr.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    char *s;
    char *t;

    if (*to_find == '\0')
        return str;
    while (*str) {
        s = str;
        t = (char *)to_find;
        while (*s && *t && *s == *t) {
            s++;
            t++;
        }
        if (*t == '\0')
            return str;
        str++;
    }
    return NULL;
}
