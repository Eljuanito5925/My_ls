/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** print_my_ls.c
*/

#include "my.h"
#include "my_ls.h"
#include <stdio.h>
#include <string.h>

void print_simple_case(ls_data_t *ctx)
{
    for (int i = 0; ctx->files[i] != NULL; i++) {
        if (ctx->files[i + 1] == NULL) {
            my_putstr(ctx->files[i]);
            break;
        }
        my_putstr(ctx->files[i]);
        my_putchar(' ');
    }
    my_putchar('\n');
}

void print_args_case(ls_data_t *ctx_s, ls_data_t *ctx, int dirs)
{
    int index_tab;
    bool find;

    if (dirs == 0) {
        print_simple_case(ctx);
        return;
    }
    if (ctx == NULL || ctx_s == NULL)
        return;
    for (int i = 0; ctx->files[i] != NULL; i++) {
        index_tab = 0;
        find = false;
        while (index_tab < dirs) {
            if (my_strcmp(ctx->files[i], ctx_s[index_tab].subdir) == 0) {
                find = true;
                my_putstr(ctx_s[index_tab].subdir);
                my_putstr(":\n");
                print_simple_case(&ctx_s[index_tab]);
                if (ctx->files[i + 1] != NULL) 
                    my_putchar('\n');
                break;
            }
            index_tab++;
        }
        if (find == false) {
            my_putstr(ctx->files[i]);
            my_putchar('\n');
            if (ctx->files[i + 1] != NULL) 
                    my_putchar('\n');
            else
                my_putchar('\n');
        }
    }
}