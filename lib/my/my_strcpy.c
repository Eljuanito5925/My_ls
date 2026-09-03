/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_strcpy.c
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int index = 0;

    while (src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}
