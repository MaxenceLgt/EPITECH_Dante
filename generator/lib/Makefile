##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	mlgt_str/mlgt_char_isalpha.c	\
		mlgt_str/mlgt_char_isnum.c	\
		mlgt_str/mlgt_char_isalphanum.c	\
		mlgt_str/mlgt_char_islow.c	\
		mlgt_str/mlgt_char_isup.c	\
		mlgt_str/mlgt_putchar.c	\
		mlgt_str/mlgt_putstr.c	\
		mlgt_str/mlgt_strlen.c	\
		mlgt_str/mlgt_strupcase.c	\
		mlgt_str/mlgt_strlowcase.c	\
		mlgt_str/mlgt_strdup.c	\
		mlgt_str/mlgt_revstr.c	\
		mlgt_str/mlgt_strcmp.c	\
		mlgt_str/mlgt_strncmp.c	\
		mlgt_str/mlgt_strcat.c	\
		mlgt_str/mlgt_strcpy.c	\
		mlgt_str/mlgt_word_array_zero.c	\
		mlgt_str/mlgt_strncpy.c	\
		mlgt_str/mlgt_put_nbr.c	\
		mlgt_str/mlgt_getnbr.c	\
		mlgt_str/mlgt_strncat.c	\
		mlgt_str/mlgt_print_word_array.c	\
		mlgt_int/mlgt_sort_int_array.c	\
		mlgt_int/mlgt_nbrlen.c


INCLUDE = mlgt_headers/

NAME	=	libmlgt.a

CFLAGS = $(INCLUDE:%=-I%) -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C mlpf_printf/
	ar rc -o $(NAME) $(OBJ)

clean:
	make clean -C mlpf_printf/
	rm -f $(OBJ)

fclean:	clean
	make fclean -C mlpf_printf/
	rm -f $(NAME)

re: fclean all

.SILENT:
