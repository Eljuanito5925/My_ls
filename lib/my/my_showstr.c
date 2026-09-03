/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my_showstr.c
*/

#include "my.h"
#include <stdlib.h>

static void my_print_array(char const *str, int *index)
{
    if (str[*index] < 32 || str[*index] > 126) {
        my_putchar('\\');
        if (str[*index] < 16)
            my_putchar('0');
        my_putnbr_base(str[*index], "0123456789abcdef");
    } else {
        my_putchar(str[*index]);
    }
}

int my_showstr(char const *str)
{
    if (str == NULL)
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        my_print_array(str, &i);
    }
    my_putchar('\n');
    return 0;
}
