/*
** EPITECH PROJECT, 2025
** DAY-04
** File description:
** my_strlen.c
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_strlen(char const *str)
{
    int index = 0;

    if (str == NULL)
        return 1;
    for (int i = 0; str[i] != '\0'; i++)
        index++;
    return index;
}
