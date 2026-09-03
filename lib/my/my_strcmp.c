/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int result = 0;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            result = s1[i] - s2[i];
            return result;
        }
    }
    return 0;
}
