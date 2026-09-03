/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** free_args.c
*/

#include <stdio.h>
#include <stdlib.h>

void free_tab(char **args)
{
    for (int i = 0; args[i] != NULL; i++)
        free(args[i]);
    free(args);
}
