# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/30 14:31:06 by iel-ferk          #+#    #+#              #
#    Updated: 2019/01/31 10:10:25 by iel-ferk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/main.c srcs/ft_do_op.c srcs/ft_op.c srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c

OBJ = main.o ft_do_op.o ft_op.o ft_atoi.o ft_putchar.o ft_putstr.o ft_putnbr.o

HEADER = includes/ft_do_op.h

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(HEADER)
	gcc -c $(FLAG) $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
