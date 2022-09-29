# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tessaclement <tessaclement@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/05/20 13:55:00 by tessaclemen   #+#    #+#                  #
#    Updated: 2022/05/30 10:41:36 by tessaclemen   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRC = megaphone.cpp

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