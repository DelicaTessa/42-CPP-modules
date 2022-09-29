# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tessaclement <tessaclement@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/05/20 14:37:30 by tessaclemen   #+#    #+#                  #
#    Updated: 2022/07/01 09:12:51 by tessaclemen   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRC = 	main.cpp \
	Bureaucrat.cpp 

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
