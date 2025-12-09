CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Fixed
SRC = $(shell find . -name "*.cpp")
OBJ = $(SRC:%.cpp=%.o)

%.o : %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@


$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $@

all : $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.SECONDARY : $(OBJ)
