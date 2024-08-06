# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 21:44:39 by linhnguy          #+#    #+#              #
#    Updated: 2024/08/01 21:50:35 by linhnguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
HEADERS	= -I ./include

CC = c++
CFLAGS = -Wall -Wextra -Werror
DEBUG_CFLAGS = -g
SRCS =  megaphone.cpp 
OBJS = $(SRCS:.cpp=.o)
DEBUG_OBJS = $(SRCS:.cpp=.debug.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Program Made"

debug: $(DEBUG_OBJS)
	$(CC) $(DEBUG_OBJS) $(HEADERS) $(DEBUG_CFLAGS) $(CFLAGS) -o $(NAME)
	@echo "Debug Program Made"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADERS)

%.debug.o: %.c
	$(CC) $(CFLAGS) $(DEBUG_CFLAGS) -c $< -o $@ $(HEADERS)

clean:
	$(RM) $(OBJS) $(DEBUG_OBJS)
	@echo "Cleaned object files"

fclean: clean
	$(RM) $(NAME)
	@echo "Fully Cleaned"

re: fclean all

.PHONY: all clean fclean re debug
