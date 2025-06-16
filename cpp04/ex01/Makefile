# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 17:18:36 by jperpct           #+#    #+#              #
#    Updated: 2025/06/16 11:38:56 by jperpct          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp00_ex0

CC = c++
FLAG =  -Wall -Wextra -Werror -std=c++98
SRC = ./Animal.cpp ./Cat.cpp ./Dog.cpp ./WrongAnimal.cpp ./WorngCat.cpp  ./Brain.cpp ./main.cpp 
SRCS = $(SRC:.cpp=.o)

%.o:%.cpp 
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

 

$(NAME): $(SRCS)
	$(CC) $(FLAG) $(SRCS) -o $(NAME)

re:fclean
	make all

clean:
	rm -fr	$(SRCS)

fclean:clean
	rm -fr $(NAME)
