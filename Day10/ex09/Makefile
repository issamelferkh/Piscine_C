# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/31 03:46:46 by iel-ferk          #+#    #+#              #
#    Updated: 2019/01/31 10:10:35 by iel-ferk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRC = srcs/ft_advanced_do_op.c srcs/ft_opp.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_atoi.c

OBJ = ft_advanced_do_op.o ft_opp.o ft_strcmp.o ft_putstr.o ft_putchar.o ft_putnbr.o ft_atoi.o

HEADER = includes/ft_adv_opp.h includes/ft_opp.h

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
