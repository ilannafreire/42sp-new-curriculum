# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifreire <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/23 06:04:14 by ifreire           #+#    #+#              #
#    Updated: 2026/05/23 06:04:19 by ifreire          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
      srcs/ft_putstr.c \
      srcs/ft_strcmp.c \
      srcs/ft_strlen.c \
      srcs/ft_swap.c

OBJ = ft_putchar.o \
      ft_putstr.o \
      ft_strcmp.o \
      ft_strlen.o \
      ft_swap.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: srcs/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
