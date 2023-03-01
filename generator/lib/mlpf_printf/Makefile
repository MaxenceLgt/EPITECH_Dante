##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	mlpf_printf.c	\
		mlpf_put_nbr_count.c	\
		mlpf_putchar_count.c	\
		mlpf_putstr_count.c	\
		mlpf_strlen.c


INCLUDE = include/

NAME	=	libmlpf.a

CFLAGS = $(INCLUDE:%=-I%) -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o ../$(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../$(NAME)

re: fclean all

.SILENT:
