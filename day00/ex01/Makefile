NAME := phonebook

SRC := main.cpp Phonebook.class.cpp Phonebook.class.hpp

OBJ := main.o Phonebook.class.o

FLAGS := -Wall -Werror -Wextra

CMP := clang++

all: to_obj
	$(CMP) $(FLAGS) $(OBJ) -o $(NAME)

to_obj:
	$(CMP) $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)
	rm -rf Phonebook.class.hpp.gch

fclean: clean
	rm -rf $(NAME)

re: fclean all