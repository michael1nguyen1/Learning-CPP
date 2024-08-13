# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 16:16:05 by linhnguy          #+#    #+#              #
#    Updated: 2024/08/13 20:31:21 by linhnguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
HEADERS = -I ./include

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20
DEBUG_CXXFLAGS = -g
SRCS = main.cpp	Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
DEBUG_OBJS = $(SRCS:.cpp=.debug.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) Program Made"

debug: $(DEBUG_OBJS)
	$(CXX) $(DEBUG_OBJS) $(HEADERS) $(DEBUG_CXXFLAGS) $(CXXFLAGS) -o $(NAME)_debug
	@echo "$(NAME) Debug Program Made"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(HEADERS)

%.debug.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG_CXXFLAGS) -c $< -o $@ $(HEADERS)

clean:
	$(RM) $(OBJS) $(DEBUG_OBJS)
	@echo "Cleaned object files"

fclean: clean
	$(RM) $(NAME) $(NAME)_debug
	@echo "Fully Cleaned"

re: fclean all

.PHONY: all clean fclean re debug