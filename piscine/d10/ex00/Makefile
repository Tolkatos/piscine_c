# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 21:16:30 by ranuytte          #+#    #+#              #
#    Updated: 2018/09/11 22:38:45 by ranuytte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ./srcs/ft_putchar.c \
		  ./srcs/ft_putstr.c \
		  ./srcs/ft_strcmp.c \
		  ./srcs/ft_strlen.c \
		  ./srcs/ft_swap.c
OBJ = ft_*.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SOURCES)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

