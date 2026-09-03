/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** dir_nbr.c
*/

#include "my.h"
#include "my_ls.h"
#include <string.h>
#include <dirent.h>
#include <sys/types.h>

int dir_nbr(int ac, char *av[], ls_data_t *ctx)
{
    int dnbr = 0;

    if (ac == 1)
        return 0;
    for (int i = 1; i < ac; i++) {
        ctx->dir = opendir(av[i]);
        if (ctx->dir == NULL)
            continue;
        else {
            dnbr++;
            closedir(ctx->dir);
        }
        ctx->dir = NULL;
    }
    return dnbr;
}
