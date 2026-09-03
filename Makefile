##
## EPITECH PROJECT, 2025
## bootstrap.ls
## File description:
## Makefile
##

CC	=	gcc -o
RM	=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I ./include -g
LDFLAGS	=	-L lib/my/ -lmy

SRC	=	src/main.c					\
		src/parse.c					\
		src/free_tab.c				\
		src/config.c				\
		src/sort.c					\
		src/my_ls.c					\
		src/dir_nbr.c				\
		src/load_subdirs.c			\
		src/free_tab_struct.c		\
		src/print_args_case.c		\
		src/sort_tab_struct.c		\
		src/count_files.c			\
		src/error_handling.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all: clib $(NAME)

clib:
		make -C lib/my/

$(NAME): $(OBJ)
		$(CC) $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		make -C lib/my/ fclean

re: fclean all
