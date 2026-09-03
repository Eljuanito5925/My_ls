/*
** EPITECH PROJECT, 2026
** ls.project
** File description:
** my_ls.h
*/

#include <sys/types.h>
#include <dirent.h>
#include <stdbool.h>

#ifndef MY_LS_H_
    #define MY_LS_H_

typedef struct ls_data {
    DIR *dir;
    int count;
    char *subdir;
    char **files;
    struct dirent *sb;
}ls_data_t;

char **parse(int ac, char *av[]);
void free_tab(char **args);
void sort(char **files);
void my_ls(int ac, char *av[]);
ls_data_t *config(int ac, char **args);
int dir_nbr(int ac, char *av[], ls_data_t *ctx);
int count_files(char *pathname, ls_data_t *ctx);
ls_data_t *load_subdirs(int ac, char *av[], int dirs);
void free_tab_struct(ls_data_t *ctx_s, int dirs);
void print_args_case(ls_data_t *ctx_s, ls_data_t *ctx, int dirs);
void print_simple_case(ls_data_t *ctx);
void sort_tab_struct(ls_data_t *ctx_s, int dirs);
int error_handling(int ac, char *current_file);

#endif
