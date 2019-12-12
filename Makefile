CC	=	gcc

RM	=	rm -rf

NAME	= my_sokoban

CFLAGS	+=	-W -Wall -Wextra -l ncurses

SRC	=	open.c \
		soko_deplacement.c\
		soko_helper.c \
		soko_error.c \
		soko_map_param.c \
		my_putstr.c \
		my_putchar.c \
		soko_centrage.c

OBJ	=	$(SRC:.c=.o)

all: compil

compil:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

PHONY: re all clean fclean
