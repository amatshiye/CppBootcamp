# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 07:28:41 by amatshiy          #+#    #+#              #
#    Updated: 2018/06/14 07:28:54 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex00

SRC := whatever.cpp

CMP := clang++ -o

FLAGS := -Wall -Werror -Wextra

all:
	$(CMP) $(NAME) $(FLAGS) $(SRC)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all