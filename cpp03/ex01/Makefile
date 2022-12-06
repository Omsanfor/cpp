.PHONY : all fclean clean re

NAME     =	scavtrap
SRC      =	./ClapTrap.cpp ./main.cpp ./ScavTrap.cpp
OBJ      =	$(SRC:.cpp=.o)
HDR      =	./ClapTrap.h ./ScavTrap.h
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