# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 09:41:29 by amatshiy          #+#    #+#              #
#    Updated: 2018/06/14 09:45:30 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex01

SRC := iter.cpp

FLAGS := -Wall -Werror -Wextra

CMP := clang++ -o

all:
	$(CMP) $(NAME) $(SRC) $(FLAGS)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all