/*
** EPITECH PROJECT, 2025
** DAY-04
** File description:
** my_putstr.c
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>

int my_putstr(char const *str)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}
