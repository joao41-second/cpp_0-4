# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 17:18:36 by jperpct           #+#    #+#              #
#    Updated: 2025/02/25 14:10:20 by jperpct          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp00_ex01

CC = c++
FLAG =  -Wall -Wextra -Werror -std=c++98
SRC = main.cpp PhoneBook.cpp Contact.cpp
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

s:
	make fclean && make && ./$(NAME)
