NAME		= computor

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I includes
RM			= rm -f

SRCS		= src/main.c \
			  src/parsing.c \
			  src/computor.c \
			  src/tools.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c includes/computor.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(NAME)

re: fclean all

.PHONY: all clean fclean re
