/*
** EPITECH PROJECT, 2024
** minishell02
** File description:
** my_strtok.c
*/

#include <stddef.h>

static int is_delimiter(char c, const char *delim)
{
    const char *d = delim;

    while (*d != '\0') {
        if (c == *d)
            return 1;
        d++;
    }
    return 0;
}

static char *skip_delimiters(char *str, const char *delim)
{
    while (*str != '\0' && is_delimiter(*str, delim))
        str++;
    return str;
}

static char *find_token_end(char *str, const char *delim)
{
    while (*str != '\0' && !is_delimiter(*str, delim))
        str++;
    return str;
}

char *my_strtok(char *str, const char *delim, char **state)
{
    char *current = (str == NULL) ? *state : str;
    char *start = NULL;
    char *end = NULL;

    if (current == NULL)
        return NULL;
    start = skip_delimiters(current, delim);
    if (*start == '\0') {
        *state = NULL;
        return NULL;
    }
    end = find_token_end(start, delim);
    if (*end == '\0') {
        *state = NULL;
    } else {
        *end = '\0';
        *state = end + 1;
    }
    return start;
}
