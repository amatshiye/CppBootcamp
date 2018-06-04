# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/04 07:29:02 by amatshiy          #+#    #+#              #
#    Updated: 2018/06/04 07:29:19 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

FLAGS := -Wall -Werror -Wextra

SRC := megaphone.cpp

CMP := clang++

all: to_obj
	$(CMP) -o $(NAME) $(FLAGS) $(NAME).o

to_obj:
	$(CMP) -c $(SRC) $(FLAGS)

clean:
	rm -rf $(NAME).o

fclean: clean
	rm -rf $(NAME)

re: fclean all
