/*
** EPITECH PROJECT, 2025
** DAY-08
** File description:
** my_str_to_word_array.c
*/

#include "my.h"
#include <stdlib.h>

static void free_array(char **arr)
{
    if (!arr)
        return;
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}

static int count_words(const char *str, const char *delim)
{
    int count = 0;
    char *dup = my_strdup(str);
    char *state = NULL;
    char *tok;

    if (!dup)
        return 0;
    tok = my_strtok(dup, delim, &state);
    while (tok != NULL) {
        count++;
        tok = my_strtok(NULL, delim, &state);
    }
    free(dup);
    return count;
}

static void store_my_word_array(char **array, const char *str,
    const char *delim)
{
    char *state = NULL;
    int len = count_words(str, delim);
    char *dup = my_strdup(str);
    char *token = NULL;

    if (!dup)
        return;
    token = my_strtok(dup, delim, &state);
    for (int i = 0; token != NULL; i++) {
        array[i] = my_strdup(token);
        if (!array[i]) {
            free_array(array);
            free(dup);
            return;
        }
        token = my_strtok(NULL, delim, &state);
    }
    array[len] = NULL;
    free(dup);
}

char **my_str_to_word_array(const char *str, const char *delim)
{
    int len = 0;
    char **arr = NULL;

    if (!str || !delim)
        return NULL;
    len = count_words(str, delim);
    arr = malloc(sizeof(char *) * (len + 1));
    if (!arr)
        return NULL;
    store_my_word_array(arr, str, delim);
    return arr;
}
