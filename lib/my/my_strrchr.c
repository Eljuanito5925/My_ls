/*
** EPITECH PROJECT, 2026
** bootstrap.ls
** File description:
** my_strchr.c
*/

#include <string.h>

char *my_strrchr(char *str, char c)
{
    char *last = NULL;

    while (*str) {
        if (*str == c)
            last = str;
        str++;
    }
    return last;
}
