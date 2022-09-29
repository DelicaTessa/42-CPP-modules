# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tessaclement <tessaclement@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/05/20 14:37:30 by tessaclemen   #+#    #+#                  #
#    Updated: 2022/05/30 12:24:23 by tessaclemen   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = braiiiiiiinnnzzzZ

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRC = 	Zombie.cpp \
		newZombie.cpp\
		randomChump.cpp \
		main.cpp

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