NAME := heapstack

FLAGS := -Wall -Werror -Wextra

SRC := main.cpp Pony.cpp

CMP := clang++

OBJ := main.o Pony.o

all: to_obj
	$(CMP) -o $(NAME) $(OBJ) $(FLAGS)

to_obj:
	$(CMP) -c $(SRC) $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
