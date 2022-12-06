.PHONY : all fclean clean re

NAME     =	ex03
SRC      =	./src/HumanA.cpp ./src/HumanB.cpp ./src/main.cpp ./src/Weapon.cpp
OBJ      =	$(SRC:.cpp=.o)
HDR      =	./inc/HumanA.h ./inc/HumanB.h ./inc/Weapon.h
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