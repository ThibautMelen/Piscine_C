# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmelen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/01 16:12:27 by thmelen           #+#    #+#              #
#    Updated: 2018/03/01 16:12:30 by thmelen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = do_op.c ft_basic.c ft_oper.c main.c operateur.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
