# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/07 10:53:33 by linhnguy          #+#    #+#              #
#    Updated: 2024/08/07 11:01:05 by linhnguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
HEADERS	= -I ./include

CC = c++
CFLAGS = -Wall -Wextra -Werror
DEBUG_CFLAGS = -g
SRCS =  PhoneBook.cpp	actions.cpp		main.cpp	Contacts.cpp
OBJS = $(SRCS:.cpp=.o)
DEBUG_OBJS = $(SRCS:.cpp=.o)
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
