NAME = libftprintf.a
INC = ./includes/*.h
SRCS = ./srcs/*.c
FLAG = -Wall -Wextra -Werror
OBJS = ./srsc/*.o

all: ${NAME}

${NAME}:
	gcc ${FLAG} -c ${SRCS} -I ${INC}

clean:
	rm -f ${OBJS}

fcelan: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
