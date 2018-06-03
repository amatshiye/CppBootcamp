FLAGS := -Wall -Werror -Wextra

NAME := megaphone

SRC := megaphone.cpp

CMP := clang++

all: to_obj
	@echo "Compiling files...";
	$(CMP) -o $(NAME) $(FLAGS) $(NAME).o
	
to_obj:
	@echo "Creating objects for no good reason :) ...";
	$(CMP) -c $(SRC) $(FLAGS)

clean:
	@echo "Removing object files";
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
