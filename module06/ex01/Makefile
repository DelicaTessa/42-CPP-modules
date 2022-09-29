# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tessaclement <tessaclement@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/05/20 14:37:30 by tessaclemen   #+#    #+#                  #
#    Updated: 2022/07/05 11:27:25 by tessaclemen   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = reinterpret

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRC = 	main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
