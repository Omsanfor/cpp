.PHONY : all fclean clean re

NAME     =	megaphone
SRC      =	megaphone.cpp
OBJ      =	$(SRC:.cpp=.o)
CC       =	c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re
all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
			$(CC) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all