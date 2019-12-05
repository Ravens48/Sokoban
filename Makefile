CC	=	gcc

RM	=	rm -rf

NAME	= my_sokoban

CFLAGS	+=	-W -Wall -Wextra -l ncurses

SRC	=	open.c \
		soko_deplacement.c\
		Soko_centrage.c

OBJ	=	$(SRC:.c=.o)

all: compil

compil:	$(SRC)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

PHONY: re all clean fclean