NAME = get_next_line

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SCRS =	get_next_line.c			\
		get_next_line_utils.c	\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
