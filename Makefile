##
## ETNA PROJECT, 01/11/2020 by winkle_s
## Makefile
## File description:
##      Makes the my_crd project.
##

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -std=c11

NAME	=	my_crd

SRC 	=	main.c \
			my_putchar.c \
			get_user_input.c \
			my_readline.c \
			my_putnbr.c \
			my_getnbr.c \
			search_entry.c \
			create_update_entry.c \
			delete_entry.c \
			print_entry.c

OBJ		= $(SRC:%.c=%.o)


all:	$(SRC)
		$(CC) -c $(SRC)
		$(CC) $(OBJ) -o $(NAME)

clean:	$(OBJ)
		rm -f $(OBJ)

mrproper:
		rm -Rf \#*
		rm -Rf *~
