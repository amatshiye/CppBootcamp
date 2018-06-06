NAME := zombie

FLAGS := -Wall -Werror -Wextra

SRC := main.cpp Zombie.cpp ZombieEvent.cpp 

OBJ := main.o Zombie.o ZombieEvent.o

CMP := clang++

all: to_obj
	$(CMP) -o $(NAME) $(FLAGS) $(OBJ)

to_obj:
	$(CMP) -c $(SRC) $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all