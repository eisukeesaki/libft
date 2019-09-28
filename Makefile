NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) libft.h
	@echo ">compiling libft without linking"
	$(CC) $(CFLAGS) -c $(SRC)
	@echo ">creating libft archive"
	ar rcs $(NAME) $(OBJ)

clean:
	@echo ">deleting libft object files"
	$(RM) $(OBJ)

fclean:	clean
	@echo ">deleting libft archive"
	$(RM) $(NAME)

re: fclean all
