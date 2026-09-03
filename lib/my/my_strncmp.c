/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int index = 0;
    int result = 0;

    while (index < n) {
        if (s1[index] != s2[index]) {
            result = s1[index] - s2[index];
            return result;
        }
        if (s1[index] == '\0' || s2[index] == '\0')
            return 0;
        index++;
    }
    return 0;
}
