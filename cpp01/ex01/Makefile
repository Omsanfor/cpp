.PHONY : all fclean clean re

NAME     =	ex01
SRC      =	./src/main.cpp ./src/Zombie.cpp ./src/zombieHorde.cpp
OBJ      =	$(SRC:.cpp=.o)
HDR      =	./inc/Zombie.h
CC       =	c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re 
all:		$(NAME)

$(NAME):	$(OBJ) 
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HDR)
			$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all