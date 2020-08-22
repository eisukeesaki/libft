NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) libft.h
	@$(CC) $(CFLAGS) -c $(SRC)
	@echo "compiled libft without linking"
	@ar rcs $(NAME) $(OBJ)
	@echo "created libft archive"

clean:
	@$(RM) $(OBJ)
	@echo "deleted libft object files"

fclean:	clean
	@$(RM) $(NAME)
	@echo "deleted libft archive"

re: fclean all
