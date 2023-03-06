##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/err_handling/err_handling.c	\
		src/err_handling/is_number.c	\
		src/stack_managing/increase_stack.c	\
		src/maze_generating/line_generating/generate_maze_line.c	\


MAIN = src/main.c

INCLUDE = include/	\
		lib/mlgt_headers/

NAME	=	generator

CFLAGS = $(INCLUDE:%=-I%) -g

OBJ	=	$(SRC:.c=.o)

OBM =	$(MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBM)
	make -C lib/
	gcc -o $(NAME) $(OBJ) $(OBM) -Llib/ -lmlgt -lmlpf

clean:
	make clean -C lib/
	rm -f $(OBJ) $(OBM)

fclean:	clean
	make fclean -C lib/
	rm -f $(NAME)

re: fclean all

.SILENT:
