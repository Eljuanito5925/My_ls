/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** sort.c
*/

#include "my.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void swap_str(char **temp, char **files, bool *swapped)
{
    for (int i = 0; files[i] != NULL && files[i + 1] != NULL; i++) {
        if (my_strcmp(files[i], files[i + 1]) > 0) {
            *temp = files[i];
            files[i] = files[i + 1];
            files[i + 1] = *temp;
            *swapped = true;
        }
    }
}

void sort(char **files)
{
    char *temp;
    bool swapped = true;

    if (files == NULL)
        return;
    while (swapped) {
        swapped = false;
        swap_str(&temp, files, &swapped);
    }
}
