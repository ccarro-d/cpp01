
NAME    = u_violence

CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -MMD -MP

SRC     = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ:.o=.d)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(OBJ:.o=.d)
