NAME = philo
HEADERS	= -I ./include

CC = g++
CFLAGS = -Wall -Wextra -Werror
DEBUG_CFLAGS = -g
SRCS =  main.c 
OBJS = $(SRCS:.c=.o)
DEBUG_OBJS = $(SRCS:.c=.debug.o)
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
