# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 11:48:07 by amatshiy          #+#    #+#              #
#    Updated: 2018/06/13 11:48:09 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex01

SRC := main.cpp

CMP := clang++ -o

FLAGS := -Wall -Werror -Wextra

all:
	$(CMP) $(NAME) $(SRC) $(FLAGS)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all