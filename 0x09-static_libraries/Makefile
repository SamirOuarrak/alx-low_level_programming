CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = *.c
OBJ = $(SRC:.c=.o)
NAME = liball.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

