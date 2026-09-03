/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** sort_tab_struct.c
*/

#include "my.h"
#include "my_ls.h"
#include <stdio.h>

void sort_tab_struct(ls_data_t *ctx_s, int dirs)
{
    if (ctx_s == NULL || dirs == 0)
        return;
    for (int i = 0; i < dirs; i++) {
        sort(ctx_s[i].files);
    }
}
