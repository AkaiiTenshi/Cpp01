NAME = sed

SRCS = main.cpp Sed.cpp
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = $(SRCS:.cpp=.o)



$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
