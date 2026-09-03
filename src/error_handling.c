/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** error_handling.c
*/

#include "my.h"
#include "my_ls.h"
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>

int error_handling(int ac, char *current_file)
{
    struct stat st;

    if (lstat(current_file, &st) == -1) {
        my_putstr(current_file);
        if (ac > 2)
            my_putstr(": No such file or directory\n\n");
        else
            my_putstr(": No such file or directory");
        return 1;
    }
    return 0;
}
