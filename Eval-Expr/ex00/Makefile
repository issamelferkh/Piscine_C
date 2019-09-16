# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 20:52:29 by iel-ferk          #+#    #+#              #
#    Updated: 2019/09/16 16:50:33 by iel-ferk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC += eval_expr.c
SRC += ft_calculate.c
SRC += ft_convert.c
SRC += ft_free.c
SRC += ft_str_1.c
SRC += ft_str_2.c

FLAGS = -Wall -Wextra -Werror

CC = gcc $(FLAGS)

all:
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
