/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_strncpy.c
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int index = 0;

    while (index < n && src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }
    while (index < n) {
        dest[index] = '\0';
        index++;
    }
    return dest;
}
