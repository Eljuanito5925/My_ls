##
## EPITECH PROJECT, 2025
## DAY-10
## File description:
## Makefile
##

CC      = gcc
AR      = ar rc
RM      = rm -f
CP      = cp

CFLAGS  = -Wall -Werror -Wextra -I include/

SRC     =	my_putchar.c          					\
			my_putstr.c           					\
			my_putnbr.c          					\
			my_revstr.c           					\
			my_strlen.c           					\
			my_getnbr.c           					\
			my_compute_power_rec.c					\
			my_showstr.c          					\
			my_strcapitalize.c    					\
			my_strcmp.c           					\
			my_strcpy.c           					\
			my_str_isalpha.c      					\
			my_str_islower.c      					\
			my_str_isnum.c        					\
			my_str_isprintable.c  					\
			my_str_isupper.c      					\
			my_strlowcase.c       					\
			my_strncmp.c          					\
			my_strncpy.c          					\
			my_strstr.c   							\
			my_strupcase.c							\
			my_swap.c								\
			my_str_to_word_array.c					\
			my_strtok.c								\
			my_strrchr.c							\
			my_strdup.c								\

OBJ     = $(SRC:.c=.o)

NAME    = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(CP) $(NAME) ../
	$(CP) my.h ../../include/

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../include/my.h

re: fclean all
