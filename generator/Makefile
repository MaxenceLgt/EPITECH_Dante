##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/err_handling/err_handling.c	\
		src/err_handling/is_number.c	\
		src/stack_managing/increase_stack.c	\
		src/maze_generating/linked_list/init_linked_list.c	\
		src/maze_generating/linked_list/add_pos_to_list.c	\
		src/maze_generating/linked_list/go_next_list.c	\
		src/maze_generating/line_generating/generate_maze_line.c	\
		src/maze_generating/gen_struct_handling/create_struct_maze.c	\
		src/maze_generating/gen_struct_handling/gen_map_maze.c	\
		src/maze_generating/gen_struct_handling/display_map.c	\
		src/maze_generating/gen_struct_handling/modify_if_pair.c	\
		src/maze_generating/rect_generating/generate_rect_maze.c	\
		src/maze_generating/rect_generating/exec_recursive_gen.c	\
		src/maze_generating/rect_generating/check_valid_next.c	\
		src/maze_generating/rect_generating/go_random_pos.c	\
		src/maze_generating/rect_generating/more_than_one_way.c	\
		src/maze_generating/rect_generating/make_it_imperfect.c

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
