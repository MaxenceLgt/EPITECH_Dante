##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/file_managing/open_file.c	\
		src/file_managing/free_array.c	\
		src/manage_struct_map/convert_str_to_arr.c	\
		src/manage_struct_map/convert_map_to_int.c	\
		src/manage_struct_map/create_map_struct.c	\
		src/manage_struct_map/display_map.c	\
		src/err_handling/err_handling.c	\
		src/err_handling/can_open_and_read.c	\
		src/err_handling/file_is_empty.c	\
		src/err_handling/check_line_size.c	\
		src/err_handling/check_line_content.c	\
		src/err_handling/good_line_content.c	\
		src/err_handling/check_last_elm.c	\
		src/resolution_algo/exec_resolution.c	\
		src/resolution_algo/exec_int_resolution.c	\
		src/resolution_algo/display_solution.c	\
		src/resolution_algo/go_next_ways.c	\
		src/resolution_algo/free_struct_elms.c	\
		src/stack_managing/increase_stack.c

MAIN = src/main.c

INCLUDE = include/

NAME	=	solver

CFLAGS = $(INCLUDE:%=-I%) -g -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

OBM =	$(MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBM)
	gcc -o $(NAME) $(OBJ) $(OBM)

clean:
	rm -f $(OBJ) $(OBM)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.SILENT:
