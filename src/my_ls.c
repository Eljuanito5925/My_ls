/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** my_ls.c
*/

#include "my.h"
#include "my_ls.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void no_args_case(ls_data_t *ctx, char **args)
{
    print_simple_case(ctx);
    free_tab(args);
    free_tab(ctx->files);
    free(ctx);
}

void free_all(ls_data_t *ctx, ls_data_t *ctx_s, char **args, int dirs)
{
    free_tab(args);
    free_tab(ctx->files);
    free(ctx);
    free_tab_struct(ctx_s, dirs);
}

void my_ls(int ac, char *av[])
{
    int index_tab = 0;
    int index_words = 0;
    int dirs = 0;
    char **args;
    ls_data_t *ctx;
    bool subdir = false;
    ls_data_t *subdir_tab;

    args = parse(ac, av);
    ctx = config(ac, args);
    sort(ctx->files);
    dirs = dir_nbr(ac, av, ctx);
    if (ac == 1) {
        no_args_case(ctx, args);
        return;
    } else {
        subdir_tab = load_subdirs(ac, av, dirs);
        sort_tab_struct(subdir_tab, dirs);
        print_args_case(subdir_tab, ctx, dirs);
    }
    free_all(ctx, subdir_tab, args, dirs);
}
