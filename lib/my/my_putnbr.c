/*
** EPITECH PROJECT, 2025
** DAY-03
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_putnbr(int nb)
{
    long int c;

    c = nb;
    if (c > 2147483647 || c < -2147483648)
        return -1;
    if (c < 0) {
        my_putchar('-');
        c = -c;
    }
    if (c >= 10)
        my_putnbr(c / 10);
    my_putchar(c % 10 + '0');
    return 0;
}
