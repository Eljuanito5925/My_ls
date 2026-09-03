/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** load_subdirs.c
*/

#include "my.h"
#include "my_ls.h"
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/types.h>

int count_subdir_files(char *pathname)
{
    DIR *d = NULL;
    struct dirent *entry = NULL;
    int files_nbr = 0;

    d = opendir(pathname);
    if (d == NULL)
        return 0;
    entry = readdir(d);
    while (entry != NULL) {
        files_nbr++;
        entry = readdir(d);
    }
    closedir(d);
    return files_nbr;
}

ls_data_t *load_subdirs(int ac, char *av[], int dirs)
{
    int index = 0;
    ls_data_t *ctx_s = NULL;

    if (dirs == 0)
        return NULL;
    ctx_s = malloc(sizeof(ls_data_t) * dirs);
    if (!ctx_s)
        return NULL;
    for (int i = 1; i < ac; i++) {
        ctx_s[index].dir = opendir(av[i]);
        if (ctx_s[index].dir == NULL) {
            continue;
        } else {
            ctx_s[index].count = count_subdir_files(av[i]);
            ctx_s[index].subdir = malloc(my_strlen(av[i]) + 1);
            my_strcpy(ctx_s[index].subdir, av[i]);
            ctx_s[index].files = malloc(sizeof(char *) * (ctx_s[index].count + 1));
            ctx_s[index].sb = readdir(ctx_s[index].dir);
            for (int j = 0; j < ctx_s[index].count; j++) {
                ctx_s[index].files[j] = malloc(my_strlen(ctx_s[index].sb->d_name) + 1);
                my_strcpy(ctx_s[index].files[j], ctx_s[index].sb->d_name);
                ctx_s[index].sb = readdir(ctx_s[index].dir);
            }
            ctx_s[index].files[ctx_s[index].count] = NULL;
            closedir(ctx_s[index].dir);
            index++;
        }
    }
    if (index != dirs)
        return NULL;
    return ctx_s;
}
