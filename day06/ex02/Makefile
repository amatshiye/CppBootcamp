NAME := ex02

SRC := main.cpp A.cpp B.cpp C.cpp Base.cpp

CMP := clang++ -o

FLAGS := -Wall -Werror -Wextra

all:
	$(CMP) $(NAME) $(FLAGS) $(SRC) 

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all