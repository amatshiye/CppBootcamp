# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/12 11:20:06 by amatshiy          #+#    #+#              #
#    Updated: 2018/06/13 13:59:38 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex00

SRC := Scalar.cpp main.cpp

FLAGS := -Wall -Werror -Wextra

CMP := clang++ -o

all:
	$(CMP) $(NAME) $(SRC) $(FLAGS)

clean:
	rm -rf $(NAME);

re: clean all