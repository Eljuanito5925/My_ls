/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** parse.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

char **parse(int ac, char *av[])
{
    int index = 0;
    char **args = malloc(sizeof(char *) * (ac + 1));

    if (!args)
        return NULL;
    while (av[index] != NULL) {
        args[index] = malloc(sizeof(char) * (my_strlen(av[index]) + 1));
        my_strcpy(args[index], av[index]);
        index++;
    }
    args[index] = NULL;
    return args;
}
