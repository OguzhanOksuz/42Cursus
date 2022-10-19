# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 09:51:56 by Ooksuz            #+#    #+#              #
#    Updated: 2022/10/19 10:47:10 by Ooksuz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC =	ft_printf.h
SRCS =	ft_printf.c	\
      	ft_putnbr.c	\
      	ft_putnbruhex.c	\
      	ft_putstr.c	\
      	ft_putchr.c	\
      	ft_putnbru.c	\
      	ft_putptr.c	\
      	ft_specifer.c
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
