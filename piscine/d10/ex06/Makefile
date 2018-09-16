# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 16:49:45 by ranuytte          #+#    #+#              #
#    Updated: 2018/09/16 11:22:53 by ranuytte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = ./srcs/*.c
OBJ = *.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
	
