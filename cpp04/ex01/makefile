# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 17:18:36 by jperpct           #+#    #+#              #
#    Updated: 2025/05/26 11:38:55 by jperpct          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp00_ex0

CC = c++
FLAG =  -Wall -Wextra -Werror -std=c++98
SRC = ./Animal.cpp ./Cat.cpp ./Dog.cpp ./main.cpp ./Brain.cpp
SRCS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAG) $(SRCS) -o $(NAME)

re:
	make fclean
	make all

clean:
	$(SRCS)

fclean:
	rm $(SRCS) $(NAME)
