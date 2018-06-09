NAME := ft_retro

SRC := RetroGame.cpp SpaceShip.cpp main.cpp

FLAGS := -Wall -Werror -Wextra -lncurses

CMP := clang++ -o

all:
	$(CMP) $(NAME) $(FLAGS) $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all