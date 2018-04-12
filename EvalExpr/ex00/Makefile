# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmelen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 14:25:16 by thmelen           #+#    #+#              #
#    Updated: 2018/02/25 18:36:46 by thmelen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS =	./expr_parsing.c ./ft_basic.c \
		./ft_calculator.c ./ft_eval_expr.c \
		./ft_oper.c ./main.c \

FLAGS = -Wall -Wextra -Werror

all : compile_c

compile_c :
	gcc $(FLAGS) -o $(NAME) $(SRCS)

clean :
	rm -f $(NAME)

fclean : clean

re : clean all
