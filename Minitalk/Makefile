NAME =
CC=gcc
FLAGS= -Wall -Werror -Wextra
SERVER=server
CLIENT=client
PRINTF=./ft_printf/libftprintf.a

all: $(PRINTF) $(SERVER) $(CLIENT)

$(NAME): all

$(PRINTF):
	make -C ./ft_printf

$(SERVER):
		$(CC) $(FLAGS) server.c $(PRINTF) -o server

$(CLIENT): 
		$(CC) $(FLAGS) client.c $(PRINTF) -o client

clean:
		make fclean -C ./ft_printf

fclean:	clean
		rm -rf server client

re:fclean all

.PHONY:re fclean clean all

