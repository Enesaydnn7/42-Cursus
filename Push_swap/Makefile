NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

SRC = libft.c main.c rules.c rules2.c push_swap_utils.c sort.c free.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:	
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re