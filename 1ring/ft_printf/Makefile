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
SRCS =	ft_specifer.c	\
		ft_putchr.c		\
		ft_putstr.c		\
		ft_putnbr.c		\
		ft_putnbru.c	\
		ft_putnbruhex.c	\
		ft_putptr.c		\
		ft_printf.c		\

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
