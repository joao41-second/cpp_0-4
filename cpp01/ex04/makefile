# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 17:18:36 by jperpct           #+#    #+#              #
#    Updated: 2025/02/28 17:45:48 by jperpct          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CC = c++
FLAG =  -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp 
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

s:
	make fclean && make && ./$(NAME)

chek:
	make re && ./$(NAME) > ola.t && diff <(cut -c20- ola.t) <(cut -c20- 19920104_091532.log) 
