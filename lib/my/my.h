/*
** EPITECH PROJECT, 2025
** DAY-06
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr(int nb);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_swap(int *a, int *b);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_putnbr_base(int nbr, char const *base);
int my_compute_power_rec(int nb, int p);
int my_getnbr_base(char const *str, char const *base);
int my_showstr(char const *str);
char **my_str_to_word_array(const char *str, const char *delim);
char *my_strtok(char *str, const char *delim, char **state);
char *my_strrchr(char *str, char c);
char *my_strdup(char const *src);

#endif
