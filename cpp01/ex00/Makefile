.PHONY : all fclean clean re

NAME     =	ex00
SRC      =	./src/main.cpp ./src/newZombie.cpp ./src/randomChump.cpp ./src/Zombie.cpp
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