/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** count_files.c
*/

#include "my.h"
#include "my_ls.h"
#include <string.h>

int count_files(char *pathname, ls_data_t *ctx)
{
    int files_nbr = 0;

    ctx->dir = opendir(pathname);
    if (ctx->dir == NULL)
        return 0;
    ctx->sb = readdir(ctx->dir);
    while (ctx->sb != NULL) {
        files_nbr++;
        ctx->sb = readdir(ctx->dir);
    }
    closedir(ctx->dir);
    return files_nbr;
}
