/*
** EPITECH PROJECT, 2025
** DAY-08
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int len;
    int index = 0;
    char *buff;

    if (src == NULL)
        return NULL;
    len = my_strlen(src) + 1;
    buff = malloc(sizeof(char) * len);
    if (buff == NULL)
        return NULL;
    while (src[index] != '\0') {
        buff[index] = src[index];
        index++;
    }
    buff[index] = '\0';
    return buff;
}
