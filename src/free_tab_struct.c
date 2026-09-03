/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** free_tab_struct.c
*/

#include "my.h"
#include "my_ls.h"
#include <stdlib.h>

void free_tab_struct(ls_data_t *ctx_s, int dirs)
{
    for (int i = 0; i < dirs; i++) {
        free(ctx_s[i].subdir);
        free_tab(ctx_s[i].files);
    }
    free(ctx_s);
}
