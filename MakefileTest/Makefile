# initializing variables
T = touch

files = file1 file2 file src.c

cmpl = gcc src.c -o src -Wall -Werror -Wextra

all: file

# $@ -> target
file1:
	$(T) $@

file2:
	$(T) $@

# $^ -> list of prerequisites (dependencies)
file: $(files)
	cat $^ > $@

src:
	$(T) src.c 

cmpl:
	$(cmpl)

clean:
	$(RM) $(file1)

# $(RM) == rm -f
fclean:
	$(RM) file
	$(RM) $(files)

re: fclean all
 