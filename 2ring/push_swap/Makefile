NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c		\
       push_swap_utils.c	\
       push.c			\
       swap.c			\
       rotate.c			\
       rrotate.c		\
       libftprintf.a		\
       libft.a		

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
