NAME = libft.a

SRC = ft_atoi.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strncat.c \
		ft_strncmp.c ft_strncpy.c ft_strstr.c ft_strlcat.c ft_isdigit.c \
		ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_strnstr.c ft_strdup.c ft_strchr.c ft_strrchr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c \
		ft_putchar.c ft_putchar_fd.c ft_memmove.c ft_memcmp.c

DEP = ft_iswhitespace.c 

OBJ = ft_atoi.o ft_strcat.o ft_strcmp.o ft_strcpy.o ft_strlen.o ft_strncat.o \
		ft_strncmp.o ft_strncpy.o ft_strstr.o ft_strlcat.o ft_isdigit.o \
		ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o \
		ft_tolower.o ft_strnstr.o ft_strdup.o ft_strchr.o ft_strrchr.o \
		ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memchr.o \
		ft_putchar.o ft_putchar_fd.o ft_memmove.o ft_memcmp.o

DOBJ = ft_iswhitespace.o

CC = gcc

CFLAGS = -Wall -Werror -Wextra -c

INCLUDES = ./

all: $(NAME)

$(NAME): $(SRC) $(DEP) libft.h
	$(CC) $(CFLAGS) $(SRC) $(DEP)
	ar rcs $(NAME) $(OBJ) $(DOBJ)

clean:
	$(RM) $(OBJ) $(DOBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
