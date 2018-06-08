# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 09:54:03 by amatshiy          #+#    #+#              #
#    Updated: 2018/06/08 09:54:05 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := frag_trap

SRC := FragTrap.cpp main.cpp

OBJ := FragTrap.o main.o

FLAGS := -Wall -Werror -Wextra

CMP := clang++

all: to_obj
	$(CMP) -o $(NAME) $(OBJ) $(FLAGS)

to_obj:
	$(CMP) -c $(SRC) $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all