NAME = main

SRC = main.c

OBJ = main.o

CC = gcc

CFLAGS = -Wall -Werror -Wextra -o main

INCLUDES = ./

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
