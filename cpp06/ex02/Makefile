NAME = Real_type
HEADERS = -I ./include

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20
SRCS = src/Serializer.cpp src/main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) Program Made"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(HEADERS)

clean:
	$(RM) $(OBJS)
	@echo "Cleaned object files"

fclean: clean
	$(RM) $(NAME)
	@echo "Fully Cleaned"

re: fclean all

.PHONY: all clean fclean re

