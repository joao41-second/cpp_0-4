# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 17:18:36 by jperpct           #+#    #+#              #
#    Updated: 2025/02/19 19:39:48 by jperpct          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp00_ex0

CC = c++
FLAG =  -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
SRCS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAG) $(SRCS) -o $(NAME)

re: 
	make all
	make fclean
	make all

clean:
	rm -fr	$(SRCS)

fclean:
	rm -fr $(SRCS) $(NAME)
