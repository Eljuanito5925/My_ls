/*
** EPITECH PROJECT, 2025
** DAY-04
** File description:
** my_swap.c
*/

#include <stdio.h>
#include <unistd.h>

void my_swap(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}
