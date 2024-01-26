# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 18:18:27 by mmonclus          #+#    #+#              #
#    Updated: 2024/01/20 10:57:34 by mmonclus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client
SERVER = server

CLIENT_SRC = client.c
SERVER_SRC = server.c

CLIENT_OBJ = client.o
SERVER_OBJ = server.o

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

all: $(CLIENT) $(SERVER)

# create executable client and server
$(CLIENT): $(CLIENT_OBJ)

	@$(CC) $(CFLAGS) $(CLIENT_OBJ) -o $(CLIENT)

$(SERVER): $(SERVER_OBJ)

	@$(CC) $(CFLAGS) $(SERVER_OBJ) -o $(SERVER)

# compile .c into object file (.o)
$(CLIENT_OBJ): $(CLIENT_SRC)

	@$(CC) $(CFLAGS) -c $(CLIENT_SRC) -o $(CLIENT_OBJ)

$(SERVER_OBJ): $(SERVER_SRC)

	@$(CC) $(CFLAGS) -c $(SERVER_SRC) -o $(SERVER_OBJ)
	@echo "My Client and Server are compiled and ready"

clean:
	@echo "'.o' files out"
	@$(RM) $(CLIENT_OBJ) $(SERVER_OBJ)

fclean: clean
	@echo "and now... clean, clean, clean it all!"
	@$(RM) $(CLIENT) $(SERVER) 

re: fclean all

.PHONY: all clean fclean re
