/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** config.c
*/

#include "my.h"
#include "my_ls.h"
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/sysmacros.h>

int load_dir(ls_data_t *ctx)
{
    int i = 0;
    int f_name = 0;

    ctx->count = count_files("./", ctx);
    ctx->files = malloc(sizeof(char *) * (ctx->count + 1));
    ctx->dir = opendir("./");
    if (ctx->dir == NULL)
        return 1;
    ctx->sb = readdir(ctx->dir);
    while (ctx->sb != NULL) {
        f_name = my_strlen(ctx->sb->d_name);
        ctx->files[i] = malloc(sizeof(char) * (f_name + 1));
        my_strcpy(ctx->files[i], ctx->sb->d_name);
        ctx->sb = readdir(ctx->dir);
        i++;
    }
    ctx->files[i] = NULL;
    closedir(ctx->dir);
    return 0;
}

ls_data_t *config(int ac, char **args)
{
    int index = 0;
    ls_data_t *ctx = malloc(sizeof(ls_data_t));

    if (!ctx)
        return NULL;
    if (ac == 1) {
        if (load_dir(ctx) != 0)
            return NULL;
    } else {
        ctx->files = malloc(sizeof(char *) * ac);
        if (!ctx->files)
            return NULL;
        for (int i = 1; i < ac; i++) {
            if (error_handling(ac, args[i]) != 0)
                continue;
            ctx->files[index] = malloc(sizeof(char) * (my_strlen(args[i]) + 1));
            my_strcpy(ctx->files[index], args[i]);
            index++;
        }
        ctx->files[index] = NULL;
    }
    return ctx;
}
