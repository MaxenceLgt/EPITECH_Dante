##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/file_managing/open_file.c	\
		src/file_managing/free_array.c	\
		src/file_managing/convert_str_to_arr.c	\
		src/err_handling/err_handling.c	\
		src/err_handling/can_open_and_read.c	\
		src/err_handling/file_is_empty.c	\
		src/err_handling/same_lines_size.c

MAIN = src/main.c

INCLUDE = include/

NAME	=	solver

CFLAGS = $(INCLUDE:%=-I%)

OBJ	=	$(SRC:.c=.o)

OBM =	$(MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBM)
	gcc -o $(NAME) $(OBJ) $(OBM) -g

clean:
	rm -f $(OBJ) $(OBM)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.SILENT:
